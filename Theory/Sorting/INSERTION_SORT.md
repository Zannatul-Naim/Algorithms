
# INSERTION SORT
```
INSERTION_SORT(A)
1. for j = 2 to A.length
2.    k = A[j]
3.    // insert A[j] into the sorted sequence A[1 2 ... j-1].
4.    i = j - 1
5.    while i > 0 and A[i] > key
6.        A[i+1] = A[i]
7.        i = i - 1
8.    A[i+1] = key
```
