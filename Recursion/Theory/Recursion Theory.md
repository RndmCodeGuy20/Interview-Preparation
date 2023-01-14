<style>
*{
 font-family: 'Inria Sans', sans-serif;
}

h1, h2, h3 {
    font-family: 'Bebas Neue', sans-serif;
}
</style>

# RECURSION AND BACKTRACKING

Any function which calls itself is called _recursive_. A recursive method solves a problem by calling a copy of itself
to work on a smaller
problem. This is called the recursion step. The recursion step can result in many more such recursive calls.

## Notes on Recursion

- Recursive algorithms have two types of cases, recursive cases and base cases.
- Every recursive function case must terminate at a base case.
- Generally, iterative solutions are more efficient than recursive solutions _due to the overhead of function calls_.
- A recursive algorithm can be implemented without recursive function calls using a stack, but it’s usually more trouble
  than its worth.
- That means any problem that can be solved recursively can also be solved iteratively.
- For some problems, there are no obvious iterative algorithms.
- Some problems are best suited for recursive solutions while others are not.