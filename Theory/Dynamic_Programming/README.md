# Dynamic Programming...

<h2 align="center"> What is Dynamic Programmig </h2>
Dynamic Programming is an algorithmic paradigm that solves a given complex problem by breaking it into subproblems and storing the results of subproblems to avoid computing the same results again.

# 1. Overlapping Subproblems Property

<div align="center"> <h2> Mathematical Background <h2> </div>

Consider the following mathematical function:

 <div align="center">
    
$f(n) = f(n-1) + f(n-2), where {n} >= 2$
    
$f(1) = 1$
$f(0) = 0$
</div>
    
<b> Fibonacci series: </b>a series of numbrs in which each number (Fibonacci number) is the sum of the two prededing numbers.

$$ f(n) = \\{0, 1, 1, 2, 3, 5, 8, 13, 21, ... \\} $$

```c

/* simple recursive program for nth Fibonacci numbers */

int fib(int n) {

    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);

}

```


<div align="center"> <h3> Solution: Use Memory </h3> </div>

<b>Remember the results.</b>
Do not solve the same problem again, just recall it from memory.

Two methods of storing results in memory:

- Momoization (Top-Down)
- Tabulation (Bottom-Up)

<br> <br>

<h2> Memoization Technique </h2> 

- Initialize a lookup array/table with all its elements as NIL.
  - NIL is simply a constant value, e.g. -1, that signifies absence of a solution.
- Call the recursive function f(n) to solve for 'n' using memoization.

<div align="center"> <h3> Algorithm </h3> </div>

- <b>At every step i, f(i) performs the following steps</b>: <br>
  a. checks wheather array[i] is NIL or not. <br>
  b. If it's not NIL, f(i) returns the value 'table[i]'. <br>
  c. If it's NIL and 'i' satisfies the base condition, we update the lookup array with the base value and return the same. <br>
  d. If it's NUL and 'i' doesn't satisfy the base condition, then f(i) splits the problem 'i' into subproblems and recursively calls itself to solve them. <br>
  e. After the recursive calls return, f(i) combines the solutions to subproblems, updates the lookup array and returns the solution for problem 'i'. <br>
  
  

<div align="center"> <h2> Code for Fibonacci Numbers </h2> </div>

```c

/* function for nth fibonacci number (using memoization) */

int fib(int n) {
  if(arr[n] == NIL) {
    if(n <= 1) arr[n] = n;
    else arr[n] = fib(n-1) + fib(n-2);
  }
  return arr[n];
}
```
<br> <br>

<h2> Tabulation Technique </h2>
