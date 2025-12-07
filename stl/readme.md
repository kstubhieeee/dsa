# C++ STL (Standard Template Library) Reference Guide

## STL Libraries
1. [Pairs](#pairs)
2. [Vectors](#vectors)
3. [List](#list)
4. [Deque](#deque)
5. [Stack](#stack)
6. [Queue](#queue)
7. [Priority Queue](#priority-queue)
8. [Set](#set)
9. [Multiset](#multiset)
10. [Unordered Set](#unordered-set)
11. [Map](#map)
12. [Multimap](#multimap)
13. [Unordered Map](#unordered-map)
14. [Iterator](#iterator)

---

## Pairs
**Code File:** [`pairs.cpp`](./pairs.cpp)

### Definition
A pair is a simple container that stores two values together as a single unit. It's part of the utility library.

### Time Complexities
| Operation | Time Complexity |
|-----------|----------------|
| Creation | O(1) |
| Access (first/second) | O(1) |
| Assignment | O(1) |

### Common Operations
```cpp
pair<int, int> p = {1, 2};
p.first;  // Access first element
p.second; // Access second element
```

---

## Vectors
**Code File:** [`vectors.cpp`](./vectors.cpp)

### Definition
A dynamic array that can grow or shrink in size automatically. Elements are stored in contiguous memory locations.

### Time Complexities
| Operation | Time Complexity |
|-----------|----------------|
| push_back() | O(1) amortized |
| pop_back() | O(1) |
| insert() at end | O(1) amortized |
| insert() at position | O(n) |
| erase() at end | O(1) |
| erase() at position | O(n) |
| access [] | O(1) |
| at() | O(1) |
| front() | O(1) |
| back() | O(1) |
| size() | O(1) |
| clear() | O(n) |
| find() | O(n) |
| sort() | O(n log n) |

---

## List
**Code File:** [`list.cpp`](./list.cpp)

### Definition
A doubly linked list that allows fast insertion and deletion at both ends and in the middle. Elements are not stored in contiguous memory.

### Time Complexities
| Operation | Time Complexity |
|-----------|----------------|
| push_front() | O(1) |
| push_back() | O(1) |
| pop_front() | O(1) |
| pop_back() | O(1) |
| insert() | O(1) |
| erase() | O(1) |
| front() | O(1) |
| back() | O(1) |
| size() | O(1) |
| clear() | O(n) |
| remove() | O(n) |
| reverse() | O(n) |
| sort() | O(n log n) |

---

## Deque
**Code File:** [`deque.cpp`](./deque.cpp)

### Definition
Double-ended queue that allows fast insertion and deletion at both front and back. Combines features of vector and list.

### Time Complexities
| Operation | Time Complexity |
|-----------|----------------|
| push_back() | O(1) |
| push_front() | O(1) |
| pop_back() | O(1) |
| pop_front() | O(1) |
| emplace_back() | O(1) |
| emplace_front() | O(1) |
| insert() | O(n) |
| erase() | O(n) |
| access [] | O(1) |
| front() | O(1) |
| back() | O(1) |
| size() | O(1) |
| clear() | O(n) |

---

## Stack
**Code File:** [`stack.cpp`](./stack.cpp)

### Definition
LIFO (Last In First Out) data structure. Elements are added and removed from the same end (top).

### Time Complexities
| Operation | Time Complexity |
|-----------|----------------|
| push() | O(1) |
| pop() | O(1) |
| top() | O(1) |
| emplace() | O(1) |
| size() | O(1) |
| empty() | O(1) |
| swap() | O(1) |

**Note:** Stack does not support iteration or random access.

---

## Queue
**Code File:** [`queue.cpp`](./queue.cpp)

### Definition
FIFO (First In First Out) data structure. Elements are added at the back and removed from the front.

### Time Complexities
| Operation | Time Complexity |
|-----------|----------------|
| push() | O(1) |
| pop() | O(1) |
| front() | O(1) |
| back() | O(1) |
| emplace() | O(1) |
| size() | O(1) |
| empty() | O(1) |
| swap() | O(1) |

**Note:** Queue does not support iteration or random access.

---

## Priority Queue
**Code File:** [`PriorityQueue.cpp`](./PriorityQueue.cpp)

### Definition
A heap-based container where elements are ordered by priority. By default, it's a max-heap (largest element at top). Can be converted to min-heap using `greater<>`.

### Time Complexities
| Operation | Time Complexity |
|-----------|----------------|
| push() | O(log n) |
| pop() | O(log n) |
| top() | O(1) |
| emplace() | O(log n) |
| size() | O(1) |
| empty() | O(1) |
| swap() | O(1) |

**Syntax for Min Heap:**
```cpp
priority_queue<int, vector<int>, greater<int>> pq;
```

---

## Set
**Code File:** [`set.cpp`](./set.cpp)

### Definition
An ordered collection of unique elements. Elements are automatically sorted in ascending order. Implemented using Red-Black Tree.

### Time Complexities
| Operation | Time Complexity |
|-----------|----------------|
| insert() | O(log n) |
| erase() | O(log n) |
| find() | O(log n) |
| count() | O(log n) |
| lower_bound() | O(log n) |
| upper_bound() | O(log n) |
| size() | O(1) |
| empty() | O(1) |
| clear() | O(n) |
| begin() | O(1) |
| end() | O(1) |

**Key Features:**
- Stores only unique elements
- Elements are sorted
- No duplicate values allowed

---

## Multiset
**Code File:** [`multiset.cpp`](./multiset.cpp)

### Definition
Similar to set but allows duplicate elements. Elements are stored in sorted order.

### Time Complexities
| Operation | Time Complexity |
|-----------|----------------|
| insert() | O(log n) |
| erase(value) | O(log n + k) where k = count |
| erase(iterator) | O(1) |
| find() | O(log n) |
| count() | O(log n + k) where k = count |
| lower_bound() | O(log n) |
| upper_bound() | O(log n) |
| size() | O(1) |
| empty() | O(1) |
| clear() | O(n) |

**Key Difference from Set:** Allows duplicate values.

---

## Unordered Set
**Code File:** [`UnorderedSet.cpp`](./UnorderedSet.cpp)

### Definition
A collection of unique elements with no particular order. Implemented using hash table for faster operations.

### Time Complexities
| Operation | Average | Worst Case |
|-----------|---------|------------|
| insert() | O(1) | O(n) |
| erase() | O(1) | O(n) |
| find() | O(1) | O(n) |
| count() | O(1) | O(n) |
| size() | O(1) | O(1) |
| empty() | O(1) | O(1) |
| clear() | O(n) | O(n) |

**Key Features:**
- No sorted order
- Faster than set for most operations
- lower_bound() and upper_bound() do NOT work
- Worst case occurs during hash collisions

---

## Map
**Code File:** [`map.cpp`](./map.cpp)

### Definition
An ordered collection of key-value pairs where keys are unique and sorted. Implemented using Red-Black Tree.

### Time Complexities
| Operation | Time Complexity |
|-----------|----------------|
| insert() | O(log n) |
| erase() | O(log n) |
| find() | O(log n) |
| count() | O(log n) |
| operator[] | O(log n) |
| at() | O(log n) |
| lower_bound() | O(log n) |
| upper_bound() | O(log n) |
| size() | O(1) |
| empty() | O(1) |
| clear() | O(n) |

**Key Features:**
- Keys are unique and sorted
- Stores key-value pairs
- Accessing non-existent key creates it with default value

---

## Multimap
**Code File:** [`MultiMap.cpp`](./MultiMap.cpp)

### Definition
Similar to map but allows duplicate keys. Keys are stored in sorted order.

### Time Complexities
| Operation | Time Complexity |
|-----------|----------------|
| insert() | O(log n) |
| erase(key) | O(log n + k) where k = count |
| erase(iterator) | O(1) |
| find() | O(log n) |
| count() | O(log n + k) where k = count |
| lower_bound() | O(log n) |
| upper_bound() | O(log n) |
| size() | O(1) |
| empty() | O(1) |
| clear() | O(n) |

**Key Difference from Map:** Allows duplicate keys.

**Note:** operator[] does NOT work in multimap.

---

## Unordered Map
**Code File:** [`UnorederedMap.cpp`](./UnorederedMap.cpp)

### Definition
A collection of key-value pairs with no particular order. Implemented using hash table for faster operations.

### Time Complexities
| Operation | Average | Worst Case |
|-----------|---------|------------|
| insert() | O(1) | O(n) |
| erase() | O(1) | O(n) |
| find() | O(1) | O(n) |
| count() | O(1) | O(n) |
| operator[] | O(1) | O(n) |
| at() | O(1) | O(n) |
| size() | O(1) | O(1) |
| empty() | O(1) | O(1) |
| clear() | O(n) | O(n) |

**Key Features:**
- No sorted order
- Faster than map for most operations
- lower_bound() and upper_bound() do NOT work
- Worst case occurs during hash collisions

---

## Iterator
**Code File:** [`iterator.cpp`](./iterator.cpp)

### Definition
An object that points to elements in a container and allows traversal through the container.

### Types of Iterators
1. **begin()** - Points to first element
2. **end()** - Points past the last element
3. **rbegin()** - Reverse iterator to last element
4. **rend()** - Reverse iterator to before first element

### Time Complexities
| Operation | Time Complexity |
|-----------|----------------|
| Increment (++) | O(1) |
| Decrement (--) | O(1) |
| Dereference (*) | O(1) |
| Access (->) | O(1) |
| Advance | O(n) for forward, O(1) for random access |

### Common Usage
```cpp
for(auto it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
}
```

---

## Quick Comparison Table

| Container | Ordered | Duplicates | Access | Insert/Delete | Use Case |
|-----------|---------|------------|--------|---------------|----------|
| Vector | No | Yes | O(1) | O(n) | Random access, dynamic array |
| List | No | Yes | O(n) | O(1) | Frequent insert/delete |
| Deque | No | Yes | O(1) | O(1) at ends | Insert/delete at both ends |
| Stack | No | Yes | O(1) top only | O(1) | LIFO operations |
| Queue | No | Yes | O(1) front/back | O(1) | FIFO operations |
| Priority Queue | By priority | Yes | O(1) top only | O(log n) | Always need max/min element |
| Set | Yes | No | O(log n) | O(log n) | Unique sorted elements |
| Multiset | Yes | Yes | O(log n) | O(log n) | Sorted with duplicates |
| Unordered Set | No | No | O(1) avg | O(1) avg | Fast unique elements |
| Map | Keys sorted | No (keys) | O(log n) | O(log n) | Key-value pairs sorted |
| Multimap | Keys sorted | Yes (keys) | O(log n) | O(log n) | Multiple values per key |
| Unordered Map | No | No (keys) | O(1) avg | O(1) avg | Fast key-value lookup |

---

## General Notes

### When to Use What?
- **Vector**: When you need random access and mostly append at end
- **List**: When you frequently insert/delete in the middle
- **Deque**: When you need to insert/delete at both ends
- **Stack**: For LIFO operations (undo mechanisms, function calls)
- **Queue**: For FIFO operations (BFS, task scheduling)
- **Priority Queue**: When you always need max/min element (Dijkstra, Huffman)
- **Set**: When you need unique sorted elements
- **Map**: When you need key-value pairs with sorted keys
- **Unordered Set/Map**: When you need faster operations and don't care about order

### Memory Considerations
- **Contiguous Memory**: Vector, Deque
- **Non-contiguous Memory**: List, Set, Map (tree-based)
- **Hash-based**: Unordered Set, Unordered Map

---

**Author:** kstubhieeee  
**Repository:** [dsa](https://github.com/kstubhieeee/dsa)
