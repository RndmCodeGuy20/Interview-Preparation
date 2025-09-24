# Fraction to Recurring Decimal

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Hash Table</div>
<div style="color: #46c6c2">Math</div>
<div style="color: #46c6c2">String</div>
</div>

---

Given two integers representing the `numerator` and `denominator` of a fraction, return _the fraction in string format_.

If the fractional part is repeating, enclose the repeating part in parentheses.

If multiple answers are possible, return **any of them**.

It is **guaranteed** that the length of the answer string is less than `104` for all the given inputs.

**Example 1:**

**Input:** numerator = 1, denominator = 2
**Output:** "0.5"

**Example 2:**

**Input:** numerator = 2, denominator = 1
**Output:** "2"

**Example 3:**

**Input:** numerator = 4, denominator = 333
**Output:** "0.(012)"

**Constraints:**

*   `-231 <= numerator, denominator <= 231 - 1`
*   `denominator != 0`