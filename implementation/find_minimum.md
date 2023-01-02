# Problem: An array is given find the minimum

## Algorithm A

```

1. m = a[1];
2. For i = 2 to size of input:
   a. if m > a[i] then m = a[i];
3. output m;

```

## Algorithm B

comment: Sort the input increasing order and return the first element of the sorted data.

```

1. n = size of the array a
2. sort(a, a+n);  // sort in increasing order
3. output a[1];

```

## Algorithm C

comment: for each element test whether it is the minimum

```

1. i = 0;
    flag = true;
2. While flag:
    i = i+1;
    min = arr[i]; // let this is the minimum
    flag = false;
    for j = 1 to size of input
        if min > arr[j] then flag = true;
3. Output min

```
