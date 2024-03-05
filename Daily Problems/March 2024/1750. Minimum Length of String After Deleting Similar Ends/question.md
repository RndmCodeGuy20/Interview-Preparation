
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

# Minimum Length of String After Deleting Similar Ends

<div style="display: flex; justify-content: space-between; align-items: center">
<div class="diff" style="color: #fac31d;padding: 2px; background-color: '#3a3f4b'; border-radius: 5px;">Medium</div>
<br>
<div class="diff" style="color: #46c6c2">Two Pointers</div>
<div class="diff" style="color: #46c6c2">String</div>
</div>

---

Given a string `s` consisting only of characters `'a'`, `'b'`, and `'c'`. You are asked to apply the following algorithm on the string any number of times:

1.  Pick a **non-empty** prefix from the string `s` where all the characters in the prefix are equal.
2.  Pick a **non-empty** suffix from the string `s` where all the characters in this suffix are equal.
3.  The prefix and the suffix should not intersect at any index.
4.  The characters from the prefix and suffix must be the same.
5.  Delete both the prefix and the suffix.

Return _the **minimum length** of_ `s` _after performing the above operation any number of times (possibly zero times)_.

**Example 1:**

**Input:** s = "ca"
**Output:** 2
**Explanation:** You can't remove any characters, so the string stays as is.

**Example 2:**

**Input:** s = "cabaabac"
**Output:** 0
**Explanation:** An optimal sequence of operations is:
- Take prefix = "c" and suffix = "c" and remove them, s = "abaaba".
- Take prefix = "a" and suffix = "a" and remove them, s = "baab".
- Take prefix = "b" and suffix = "b" and remove them, s = "aa".
- Take prefix = "a" and suffix = "a" and remove them, s = "".

**Example 3:**

**Input:** s = "aabccabba"
**Output:** 3
**Explanation:** An optimal sequence of operations is:
- Take prefix = "aa" and suffix = "a" and remove them, s = "bccabb".
- Take prefix = "b" and suffix = "bb" and remove them, s = "cca".

**Constraints:**

*   `1 <= s.length <= 105`
*   `s` only consists of characters `'a'`, `'b'`, and `'c'`.
