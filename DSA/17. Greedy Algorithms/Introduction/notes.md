<style>

h1{
    font-family: "Inria Serif Light", sans-serif;
    text-align: center;
    font-size: 2.5em;
}
 h2, h3, h4, h5, h6 {
    /*text-align: center;*/
    font-family: "Inria Serif Light", sans-serif;
}

.meta{
    font-family: "Inria Serif Light", sans-serif;
    text-align: end;
font-size: 1.25em;
}

p, li{
font-family: "Inria Sans Light", sans-serif;
}

a{
    color: #3399FF;
    text-decoration: none;
}
</style>

# 17. Greedy Algorithms

<div class="meta">Author: <a href="https://github.com/RndmCodeGuy20">RndmCodeGuy20</a></div>
<div class="meta">Date : 04/03/2023</div>

## Introduction

In greedy algorithms, decisions are made based on the given input at that stage, which may or may not be good for the
future run. It assumes that a local good selection makes for a global optimal solution.

## Elements of Greedy Algorithms

1. **Greedy Choice Property**: A greedy algorithm makes a locally optimal choice at each stage with the hope of
   finding a global optimal solution.
2. **Optimal Substructure**: A problem has optimal substructure if an optimal solution to the problem contains
   optimal solutions to sub-problems.

## Greedy Applications

1. **Sorting** : Selection sort, insertion sort, bubble sort, merge sort, quick sort, heap sort, etc.
2. **Priority Selection** : Huffman coding, Prim's algorithm, Kruskal's algorithm, etc.
3. **Graphs** : Dijkstra's algorithm, Prim's algorithm, Kruskal's algorithm, etc.

## Greedy Algorithms

### 1. Huffman Coding Algorithm :

Huffman coding is a lossless data compression algorithm. The idea is to assign variable-length codes to input
characters, lengths of the assigned codes are based on the frequencies of corresponding characters. The most frequent
character gets the smallest code and the least frequent character gets the largest code.