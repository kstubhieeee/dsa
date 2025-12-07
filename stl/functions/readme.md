# STL Utility Functions

This document provides definitions, linked source files, examples, and time complexities for various STL utility functions.

# STL Utility Functions

Definitions, linked source files, examples, and time complexities for the STL utility helpers in this folder.

## Index
- [`sort`](#sort)
- [`reverse`](#reverse)
- [`find`](#find)
- [`count`](#count)
- [`accumulate`](#accumulate)
- [`max_element` / `min_element`](#max_element--min_element)
- [`next_permutation`](#next_permutation)
- **Custom comparator** for sorting (`comparator.cpp`)
- **Power (binary exponentiation helper)** (`power.cpp`)

---

### `sort`
**Definition:** Sorts elements in the half-open range `[first, last)` using intro-sort (quicksort + heapsort fallback). 
**Code:** [`sort.cpp`](./sort.cpp)
**Header:** `<algorithm>`
**Example:**
```cpp
vector<int> v = {4, 1, 3, 9, 5};
sort(v.begin(), v.end());           // ascending
sort(v.begin(), v.end(), greater<int>()); // descending
```
**Time Complexity:** `O(n log n)` average/worst.

### `reverse`
**Definition:** Reverses elements in `[first, last)` in place.
**Code:** [`reverse.cpp`](./reverse.cpp)
**Header:** `<algorithm>`
**Example:**
```cpp
vector<int> v = {1, 2, 3};
reverse(v.begin(), v.end()); // v -> {3, 2, 1}
```
**Time Complexity:** `O(n)`

### `find`
**Definition:** Returns iterator to first element equal to value in `[first, last)`, else `last`.
**Code:** [`find.cpp`](./find.cpp)
**Header:** `<algorithm>`
**Example:**
```cpp
auto it = find(v.begin(), v.end(), 3);
```
**Time Complexity:** `O(n)` linear scan.

### `count`
**Definition:** Counts occurrences of value in `[first, last)`.
**Code:** [`count.cpp`](./count.cpp)
**Header:** `<algorithm>`
**Example:**
```cpp
int c = count(v.begin(), v.end(), 3);
```
**Time Complexity:** `O(n)`

### `accumulate`
**Definition:** Accumulates values in `[first, last)` starting with an initial value.
**Code:** [`accumulate.cpp`](./accumulate.cpp)
**Header:** `<numeric>`
**Example:**
```cpp
int sum = accumulate(v.begin(), v.end(), 0);
```
**Time Complexity:** `O(n)`

### `max_element` / `min_element`
**Definition:** Returns iterator to max/min element in `[first, last)`.
**Code:** [`max_min_element.cpp`](./max_min_element.cpp)
**Header:** `<algorithm>`
**Example:**
```cpp
auto itMax = max_element(v.begin(), v.end());
auto itMin = min_element(v.begin(), v.end());
```
**Time Complexity:** `O(n)`

### `next_permutation`
**Definition:** Transforms the range into the next lexicographically greater permutation; returns `false` if it wraps to the smallest.
**Code:** [`next_permutation.cpp`](./next_permutation.cpp)
**Header:** `<algorithm>`
**Example:**
```cpp
vector<int> v = {1, 2, 3};
next_permutation(v.begin(), v.end()); // v -> {1, 3, 2}
```
**Time Complexity:** `O(n)`

### Custom comparator for sorting
**Definition:** User-defined compare functor/lambda to change sort ordering (e.g., descending, custom key).
**Code:** [`comparator.cpp`](./comparator.cpp)
**Header:** `<algorithm>` (for `sort`)
**Example:**
```cpp
auto cmp = [](const pair<int,int>& a, const pair<int,int>& b) {
	if (a.first != b.first) return a.first < b.first; // primary key asc
	return a.second > b.second;                       // tie-break desc
};
sort(v.begin(), v.end(), cmp);
```
**Time Complexity:** Dominated by `sort` -> `O(n log n)` (each compare is `O(1)`).

### Power helper (binary exponentiation)
**Definition:** Fast exponentiation to compute `a^b` using squaring.
**Code:** [`power.cpp`](./power.cpp)
**Example:**
```cpp
long long fastPow(long long a, long long b) {
	long long res = 1;
	while (b) {
		if (b & 1) res *= a;
		a *= a;
		b >>= 1;
	}
	return res;
}
```
**Time Complexity:** `O(log b)`

---

## Quick Reference Table
| Function | File | Complexity | Notes |
|----------|------|------------|-------|
| `sort` | `sort.cpp` | O(n log n) | Uses comparator if provided |
| `reverse` | `reverse.cpp` | O(n) | In-place reverse |
| `find` | `find.cpp` | O(n) | Linear search |
| `count` | `count.cpp` | O(n) | Linear count |
| `accumulate` | `accumulate.cpp` | O(n) | Linear fold |
| `max_element` / `min_element` | `max_min_element.cpp` | O(n) | Single pass |
| `next_permutation` | `next_permutation.cpp` | O(n) | Next lexicographic perm |
| Custom comparator | `comparator.cpp` | O(n log n) with sort | Comparator is O(1) per compare |
| Binary exponentiation | `power.cpp` | O(log b) | Fast power helper |

---

**Author:** kstubhieeee  
**Repository:** [dsa](https://github.com/kstubhieeee/dsa)
