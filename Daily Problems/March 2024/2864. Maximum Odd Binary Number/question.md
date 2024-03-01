
<style>
*{
    font-family: "Plus Jakarta Sans", sans-serif;
    padding: 0;
    margin: 0;
    box-sizing: border-box;
}
.diff{
    background: #3a3f4b;
    padding: 5px;
    width: max-content;
    border-radius: 5px;
    font-size: 12px;
    font-family: "Plus Jakarta Sans", sans-serif;
    font-weight: 700;
}
</style>

# Maximum Odd Binary Number

<div style="display: flex; justify-content: space-between; align-items: center">
<div class="diff" style="color: #46c6c2;padding: 2px; background-color: '#3a3f4b'; border-radius: 5px;">Easy</div>
<br>
<div class="diff" style="color: #46c6c2">Math</div>
<div class="diff" style="color: #46c6c2">String</div>
<div class="diff" style="color: #46c6c2">Greedy</div>
</div>

---

You are given a **binary** string `s` that contains at least one `'1'`.

You have to **rearrange** the bits in such a way that the resulting binary number is the **maximum odd binary number** that can be created from this combination.

Return _a string representing the maximum odd binary number that can be created from the given combination._

**Note** that the resulting string **can** have leading zeros.

**Example 1:**

**Input:** s = "010"
**Output:** "001"
**Explanation:** Because there is just one '1', it must be in the last position. So the answer is "001".

**Example 2:**

**Input:** s = "0101"
**Output:** "1001"
**Explanation:** One of the '1's must be in the last position. The maximum number that can be made with the remaining digits is "100". So the answer is "1001".

**Constraints:**

*   `1 <= s.length <= 100`
*   `s` consists only of `'0'` and `'1'`.
*   `s` contains at least one `'1'`.
