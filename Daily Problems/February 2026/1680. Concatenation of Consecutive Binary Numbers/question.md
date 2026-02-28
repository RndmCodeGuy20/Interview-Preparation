# Concatenation of Consecutive Binary Numbers

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Math</div>
<div style="color: #46c6c2">Bit Manipulation</div>
<div style="color: #46c6c2">Simulation</div>
</div>

---

Given an integer `n`, return _the **decimal value** of the binary string formed by concatenating the binary representations of_ `1` _to_ `n` _in order, **modulo**_ `109 + 7`.

**Example 1:**

**Input:** n = 1
**Output:** 1
**Explanation:** "1" in binary corresponds to the decimal value 1. 

**Example 2:**

**Input:** n = 3
**Output:** 27
**Explanation:** In binary, 1, 2, and 3 corresponds to "1", "10", and "11".
After concatenating them, we have "11011", which corresponds to the decimal value 27.

**Example 3:**

**Input:** n = 12
**Output:** 505379714
**Explanation**: The concatenation results in "1101110010111011110001001101010111100".
The decimal value of that is 118505380540.
After modulo 109 + 7, the result is 505379714.

**Constraints:**

*   `1 <= n <= 105`