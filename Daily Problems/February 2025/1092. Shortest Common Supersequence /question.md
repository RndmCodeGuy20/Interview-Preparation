# Shortest Common Supersequence 

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #ff375f;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Hard</div>
<div style="color: #46c6c2">String</div>
<div style="color: #46c6c2">Dynamic Programming</div>
</div>

---

Given two strings `str1` and `str2`, return _the shortest string that has both_ `str1` _and_ `str2` _as **subsequences**_. If there are multiple valid strings, return **any** of them.

A string `s` is a **subsequence** of string `t` if deleting some number of characters from `t` (possibly `0`) results in the string `s`.

**Example 1:**

**Input:** str1 = "abac", str2 = "cab"
**Output:** "cabac"
**Explanation:** 
str1 = "abac" is a subsequence of "cabac" because we can delete the first "c".
str2 = "cab" is a subsequence of "cabac" because we can delete the last "ac".
The answer provided is the shortest such string that satisfies these properties.

**Example 2:**

**Input:** str1 = "aaaaaaaa", str2 = "aaaaaaaa"
**Output:** "aaaaaaaa"

**Constraints:**

*   `1 <= str1.length, str2.length <= 1000`
*   `str1` and `str2` consist of lowercase English letters.