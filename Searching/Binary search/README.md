# Binary Search

## Divide and Conquer strategy

- Works on sorted array

### Algorithm
- Sort array
- If element is found at middle, return its index
- If middle element is greater than key, continue search in right sub-array
- If middle element is smaller than key, continue search in left sub-array
- It keeps on recursing until the element is found in the middle

### Analysis Time Complexity
- Since in each iteration array is subdivided into two half, there are logn iteration
- Worst case T.C = O(logn)
- Average case T.C = O(logn)
- Best case T.C = O(1)

### Recurrence Relation
- T(n) = T(n/2) +1
