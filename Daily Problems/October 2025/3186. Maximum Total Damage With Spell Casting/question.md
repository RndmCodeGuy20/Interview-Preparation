# Maximum Total Damage With Spell Casting

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Hash Table</div>
<div style="color: #46c6c2">Two Pointers</div>
<div style="color: #46c6c2">Binary Search</div>
<div style="color: #46c6c2">Dynamic Programming</div>
<div style="color: #46c6c2">Sorting</div>
<div style="color: #46c6c2">Counting</div>
</div>

---

A magician has various spells.

You are given an array `power`, where each element represents the damage of a spell. Multiple spells can have the same damage value.

It is a known fact that if a magician decides to cast a spell with a damage of `power[i]`, they **cannot** cast any spell with a damage of `power[i] - 2`, `power[i] - 1`, `power[i] + 1`, or `power[i] + 2`.

Each spell can be cast **only once**.

Return the **maximum** possible _total damage_ that a magician can cast.

**Example 1:**

**Input:** power = \[1,1,3,4\]

**Output:** 6

**Explanation:**

The maximum possible damage of 6 is produced by casting spells 0, 1, 3 with damage 1, 1, 4.

**Example 2:**

**Input:** power = \[7,1,6,6\]

**Output:** 13

**Explanation:**

The maximum possible damage of 13 is produced by casting spells 1, 2, 3 with damage 1, 6, 6.

**Constraints:**

*   `1 <= power.length <= 105`
*   `1 <= power[i] <= 109`