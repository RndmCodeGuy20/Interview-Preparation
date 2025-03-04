# Check if Number is a Sum of Powers of Three

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Math</div>
</div>

---

Given an integer `n`, return `true` _if it is possible to represent_ `n` _as the sum of distinct powers of three._ Otherwise, return `false`.

An integer `y` is a power of three if there exists an integer `x` such that `y == 3x`.

**Example 1:**

**Input:** n = 12
**Output:** true
**Explanation:** 12 = 31 + 32

**Example 2:**

**Input:** n = 91
**Output:** true
**Explanation:** 91 = 30 + 32 + 34

**Example 3:**

**Input:** n = 21
**Output:** false

**Constraints:**

*   `1 <= n <= 107`