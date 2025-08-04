# Fruit Into Baskets

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Hash Table</div>
<div style="color: #46c6c2">Sliding Window</div>
</div>

---

You are visiting a farm that has a single row of fruit trees arranged from left to right. The trees are represented by an integer array `fruits` where `fruits[i]` is the **type** of fruit the `ith` tree produces.

You want to collect as much fruit as possible. However, the owner has some strict rules that you must follow:

*   You only have **two** baskets, and each basket can only hold a **single type** of fruit. There is no limit on the amount of fruit each basket can hold.
*   Starting from any tree of your choice, you must pick **exactly one fruit** from **every** tree (including the start tree) while moving to the right. The picked fruits must fit in one of your baskets.
*   Once you reach a tree with fruit that cannot fit in your baskets, you must stop.

Given the integer array `fruits`, return _the **maximum** number of fruits you can pick_.

**Example 1:**

**Input:** fruits = \[1,2,1\]
**Output:** 3
**Explanation:** We can pick from all 3 trees.

**Example 2:**

**Input:** fruits = \[0,1,2,2\]
**Output:** 3
**Explanation:** We can pick from trees \[1,2,2\].
If we had started at the first tree, we would only pick from trees \[0,1\].

**Example 3:**

**Input:** fruits = \[1,2,3,2,2\]
**Output:** 4
**Explanation:** We can pick from trees \[2,3,2,2\].
If we had started at the first tree, we would only pick from trees \[1,2\].

**Constraints:**

*   `1 <= fruits.length <= 105`
*   `0 <= fruits[i] < fruits.length`