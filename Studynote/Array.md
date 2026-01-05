## Static array
- Fixed-length array
- The number of elements is determined at compile time and cannot change.
## Dynamic array
- Variable-length array
- The number of elements can be allocated or resized at runtime (e.g., using malloc in C).
- When using malloc (or realloc) to increase the array size, remember to free the allocated memory after use to avoid memory leaks.
## 時間複雜度
- Access (讀取)：O(1)
- Search (搜尋)：O(n)
- Insertion (插入)：O(n)
- Deletion (刪除)：O(n)
