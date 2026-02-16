# Reverse Bits

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #46c6c2;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Easy</div>
<div style="color: #46c6c2">Divide and Conquer</div>
<div style="color: #46c6c2">Bit Manipulation</div>
</div>

---

Reverse bits of a given 32 bits signed integer.

**Example 1:**

**Input:** n = 43261596

**Output:** 964176192

**Explanation:**

Integer

Binary

43261596

00000010100101000001111010011100

964176192

00111001011110000010100101000000

**Example 2:**

**Input:** n = 2147483644

**Output:** 1073741822

**Explanation:**

Integer

Binary

2147483644

01111111111111111111111111111100

1073741822

00111111111111111111111111111110

**Constraints:**

*   `0 <= n <= 231 - 2`
*   `n` is even.

**Follow up:** If this function is called many times, how would you optimize it?