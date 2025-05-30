# Find Words Containing Character

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #46c6c2;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Easy</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">String</div>
</div>

---

You are given a **0-indexed** array of strings `words` and a character `x`.

Return _an **array of indices** representing the words that contain the character_ `x`.

**Note** that the returned array may be in **any** order.

**Example 1:**

**Input:** words = \["leet","code"\], x = "e"
**Output:** \[0,1\]
**Explanation:** "e" occurs in both words: "l**ee**t", and "cod**e**". Hence, we return indices 0 and 1.

**Example 2:**

**Input:** words = \["abc","bcd","aaaa","cbc"\], x = "a"
**Output:** \[0,2\]
**Explanation:** "a" occurs in "**a**bc", and "**aaaa**". Hence, we return indices 0 and 2.

**Example 3:**

**Input:** words = \["abc","bcd","aaaa","cbc"\], x = "z"
**Output:** \[\]
**Explanation:** "z" does not occur in any of the words. Hence, we return an empty array.

**Constraints:**

*   `1 <= words.length <= 50`
*   `1 <= words[i].length <= 50`
*   `x` is a lowercase English letter.
*   `words[i]` consists only of lowercase English letters.