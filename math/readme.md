# Mathematical Problems - Approaches and Complexity Analysis

This document covers all mathematical problems that I have done with their approaches, time complexities, and optimization strategies.

## Table of Contents
1. [Count Digits](#count-digits)
2. [Reverse a Number](#reverse-a-number)
3. [Palindrome Number](#palindrome-number)
4. [Armstrong Number](#armstrong-number)
5. [Prime Number](#prime-number)
6. [Divisors of a Number](#divisors-of-a-number)
7. [GCD (Greatest Common Divisor)](#gcd-greatest-common-divisor)
8. [LCM (Least Common Multiple)](#lcm-least-common-multiple)
9. [Factorial](#factorial)
10. [Count Prime Numbers till N](#count-prime-numbers-till-n)
11. [Perfect Number](#perfect-number)
12. [Largest Digit in a Number](#largest-digit-in-a-number)
13. [Count Odd Digits in a Number](#count-odd-digits-in-a-number)

---

## Count Digits
**Code:** [`count_digit.cpp`](./count_digit.cpp)

### Approach
Iteratively divide the number by 10 until it becomes 0, counting each division operation.

### Time Complexity
**O(log₁₀ n)** where n is the input number. The number of digits is proportional to log₁₀ n.

### Space Complexity
**O(1)** - Only uses constant extra space.

### Optimization
The current approach is already optimal. An alternative mathematical approach is:
```cpp
int countDigits = floor(log10(n)) + 1;
```
This gives **O(1)** time complexity but uses logarithm computation which may have similar practical performance.

---

## Reverse a Number
**Code:** [`reverse_a_number.cpp`](./reverse_a_number.cpp)

### Approach
Extract digits one by one from the end using modulo operation, and build the reversed number by multiplying by 10 and adding the extracted digit.

### Time Complexity
**O(log₁₀ n)** - Processes each digit exactly once.

### Space Complexity
**O(1)** - Only uses constant extra space.

### Optimization
The current approach is optimal. Be careful about integer overflow for large numbers. Consider using `long long` or checking for overflow before multiplication:
```cpp
if (reversedNumber > INT_MAX/10) // Handle overflow
```

---

## Palindrome Number
**Code:** [`palindrome-number.cpp`](./palindrome-number.cpp)

### Approach
Reverse the entire number and compare with the original. Uses the same reversal logic as reverse_a_number.

### Time Complexity
**O(log₁₀ n)** - Reverses all digits.

### Space Complexity
**O(1)** - Constant extra space.

### Optimization
Instead of reversing the entire number, reverse only half:
```cpp
while (n > reversedNumber) {
    reversedNumber = reversedNumber * 10 + n % 10;
    n /= 10;
}
return n == reversedNumber || n == reversedNumber / 10;
```
This reduces operations by half and handles odd-length numbers. Time complexity remains **O(log₁₀ n)** but with fewer iterations.

---

## Armstrong Number
**Code:** [`armstrong-number.cpp`](./armstrong-number.cpp)

### Approach
1. Count the number of digits
2. Extract each digit and raise it to the power of digit count
3. Sum all powered digits and compare with original

### Time Complexity
**O(d log₁₀ n)** where d is the number of digits. Counting digits takes O(log₁₀ n), and for each digit, we compute power which takes O(d) operations.

### Space Complexity
**O(1)** - Constant extra space.

### Optimization
Avoid using `pow()` function which works with floating-point numbers. Implement integer exponentiation:
```cpp
int power(int base, int exp) {
    int result = 1;
    while (exp--) result *= base;
    return result;
}
```
Also, you can avoid counting digits first by calculating both in a single pass, storing digits in an array or vector, then processing them.

---

## Prime Number
**Code:** [`prime-number.cpp`](./prime-number.cpp)

### Approach
Check divisibility from 2 to n-1. If any number divides n, it's not prime.

### Time Complexity
**O(n)** - Checks all numbers from 2 to n-1.

### Space Complexity
**O(1)** - Constant extra space.

### Optimization
Multiple optimizations possible:

1. **Check up to √n**: Any factor larger than √n must be paired with a factor smaller than √n.
```cpp
for (int i = 2; i * i <= n; i++)
```
Time complexity: **O(√n)**

2. **Skip even numbers**: After checking 2, only check odd numbers.
```cpp
if (n % 2 == 0) return false;
for (int i = 3; i * i <= n; i += 2)
```

3. **6k ± 1 optimization**: All primes > 3 are of the form 6k ± 1.
```cpp
if (n <= 3) return n > 1;
if (n % 2 == 0 || n % 3 == 0) return false;
for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) return false;
}
```
Time complexity: **O(√n)** but with fewer iterations.

---

## Divisors of a Number
**Code:** [`divisors-of-a-number.cpp`](./divisors-of-a-number.cpp)

### Approach
Check every number from 1 to n and add to result if it divides n.

### Time Complexity
**O(n)** - Checks all numbers from 1 to n.

### Space Complexity
**O(k)** where k is the number of divisors.

### Optimization
Check only up to √n. For each divisor i found, both i and n/i are divisors:
```cpp
for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
        numbers.push_back(i);
        if (i != n / i) {
            numbers.push_back(n / i);
        }
    }
}
sort(numbers.begin(), numbers.end()); // If sorted order needed
```
Time complexity: **O(√n)** for finding divisors + **O(k log k)** for sorting where k is the number of divisors.

---

## GCD (Greatest Common Divisor)
**Code:** [`gcd.cpp`](./gcd.cpp)

### Approach
Find the smaller number and check all numbers from 1 to the smaller number. Keep track of the largest common divisor.

### Time Complexity
**O(min(n1, n2))** - Checks all numbers up to the smaller value.

### Space Complexity
**O(1)** - Constant extra space.

### Optimization
Use **Euclidean Algorithm** which is based on the principle: GCD(a, b) = GCD(b, a % b)
```cpp
int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
```
Or using recursion:
```cpp
int GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a % b);
}
```
Time complexity: **O(log(min(n1, n2)))** - Exponentially faster than the current approach.

---

## LCM (Least Common Multiple)
**Code:** [`lcm.cpp`](./lcm.cpp)

### Approach
Calculate GCD using brute force method, then use the formula: LCM(a, b) = (a * b) / GCD(a, b)

### Time Complexity
**O(min(n1, n2))** - Dominated by the GCD calculation.

### Space Complexity
**O(1)** - Constant extra space.

### Optimization
Use the optimized Euclidean algorithm for GCD:
```cpp
int LCM(int a, int b) {
    return (a / GCD(a, b)) * b; // Divide first to avoid overflow
}
```
Time complexity: **O(log(min(n1, n2)))**

**Important**: Divide before multiplying to prevent integer overflow.

---

## Factorial
**Code:** [`factorial.cpp`](./factorial.cpp)

### Approach
Iteratively multiply all numbers from 1 to n.

### Time Complexity
**O(n)** - Performs n-1 multiplications.

### Space Complexity
**O(1)** - Constant extra space.

### Optimization
The iterative approach is already optimal for standard factorial calculation. However:

1. **For large numbers**: Use modular arithmetic if result needs to be mod some prime.
2. **For very large n**: Use logarithms to approximate: log(n!) ≈ n log(n) - n
3. **Memoization**: If computing factorials repeatedly, store previously computed values.
4. **Data type**: For n > 20, factorial exceeds `long long`. Consider using `__int128`, BigInteger, or return result modulo some number.

Note: Recursive approach is possible but uses O(n) stack space and is generally slower due to function call overhead.

---

## Count Prime Numbers till N
**Code:** [`Count-of-Prime-Numbers-till-N.cpp`](./Count-of-Prime-Numbers-till-N.cpp)

### Approach
For each number from 2 to n, check if it's prime using the basic primality test (checking divisibility from 2 to n-1).

### Time Complexity
**O(n²)** - For n numbers, each primality test takes O(n) time.

### Space Complexity
**O(1)** - Constant extra space.

### Optimization
Use **Sieve of Eratosthenes** algorithm:
```cpp
int countPrimes(int n) {
    if (n <= 2) return 0;
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i * i < n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    return count(isPrime.begin(), isPrime.end(), true);
}
```
Time complexity: **O(n log log n)**
Space complexity: **O(n)**

This is significantly faster for large n. For example, counting primes up to 1 million:
- Current approach: ~1 trillion operations
- Sieve of Eratosthenes: ~10 million operations

---

## Perfect Number
**Code:** [`perfect-number.cpp`](./perfect-number.cpp)

### Approach
Find all divisors less than n by checking each number from 1 to n-1. Sum them and compare with n.

### Time Complexity
**O(n)** - Checks all numbers from 1 to n-1.

### Space Complexity
**O(1)** - Constant extra space.

### Optimization
Similar to finding divisors, check only up to √n:
```cpp
bool isPerfect(int n) {
    if (n <= 1) return false;
    int sum = 1; // 1 is always a divisor
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i && i * i != n) {
                sum += n / i;
            }
        }
    }
    return sum == n;
}
```
Time complexity: **O(√n)**

**Mathematical Note**: Known perfect numbers are extremely rare and have the form 2^(p-1) * (2^p - 1) where 2^p - 1 is a Mersenne prime. For practical purposes, you could check against the list of known perfect numbers.

---

## Largest Digit in a Number
**Code:** [`Largest-Digit-in-a-Number.cpp`](./Largest-Digit-in-a-Number.cpp)

### Approach
Extract each digit using modulo 10, keep track of the maximum digit found.

### Time Complexity
**O(log₁₀ n)** - Processes each digit once.

### Space Complexity
**O(1)** - Constant extra space.

### Optimization
The current approach is already optimal. One minor improvement is to return early if 9 is found:
```cpp
int largestDigit(int n) {
    int maxDigit = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 9) return 9; // Early exit
        maxDigit = max(maxDigit, digit);
        n /= 10;
    }
    return maxDigit;
}
```
This doesn't change worst-case complexity but improves average case.

---

## Count Odd Digits in a Number
**Code:** [`count-number-of-odd-digits-in-a-number.cpp`](./count-number-of-odd-digits-in-a-number.cpp)

### Approach
Extract each digit using modulo 10, check if it's odd by checking if digit % 2 != 0, increment counter if true.

### Time Complexity
**O(log₁₀ n)** - Processes each digit once.

### Space Complexity
**O(1)** - Constant extra space.

### Optimization
The current approach is already optimal. Minor improvements:

1. **Simpler odd check**: Use `digit & 1` instead of `(digit % 10) % 2`:
```cpp
if ((n % 10) & 1) count++;
```

2. **No need for modulo twice**: The current code does `(n % 10) % 2`. Since we already have the digit, just check that:
```cpp
int digit = n % 10;
if (digit % 2 != 0) count++;
```

These are micro-optimizations that don't change time complexity but slightly improve performance.

---

## Summary Table

| Problem | Current Complexity | Optimized Complexity | Key Optimization |
|---------|-------------------|---------------------|------------------|
| Count Digits | O(log n) | O(1) | Use logarithm formula |
| Reverse Number | O(log n) | O(log n) | Already optimal, handle overflow |
| Palindrome | O(log n) | O(log n / 2) | Reverse only half |
| Armstrong | O(d log n) | O(d log n) | Use integer exponentiation |
| Prime Check | O(n) | O(√n) | Check up to square root |
| Divisors | O(n) | O(√n) | Check up to square root |
| GCD | O(min(a,b)) | O(log min(a,b)) | Euclidean algorithm |
| LCM | O(min(a,b)) | O(log min(a,b)) | Use optimized GCD |
| Factorial | O(n) | O(n) | Already optimal, use memoization for multiple calls |
| Count Primes | O(n²) | O(n log log n) | Sieve of Eratosthenes |
| Perfect Number | O(n) | O(√n) | Check up to square root |
| Largest Digit | O(log n) | O(log n) | Already optimal, early exit on 9 |
| Count Odd Digits | O(log n) | O(log n) | Already optimal, use bitwise AND |

---

**Author:** kstubhieeee  
**Repository:** [dsa](https://github.com/kstubhieeee/dsa)
