
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

# Group Anagrams

<div style="display: flex; justify-content: space-between; align-items: center">
<div class="diff" style="color: #fac31d;padding: 2px; background-color: '#3a3f4b'; border-radius: 5px;">Medium</div>
<br>
<div class="diff" style="color: #46c6c2">Array</div>
<div class="diff" style="color: #46c6c2">Hash Table</div>
<div class="diff" style="color: #46c6c2">String</div>
<div class="diff" style="color: #46c6c2">Sorting</div>
</div>

---

Given an array of strings `strs`, group **the anagrams** together. You can return the answer in **any order**.

An **Anagram** is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

**Example 1:**

**Input:** strs = \["eat","tea","tan","ate","nat","bat"\]
**Output:** \[\["bat"\],\["nat","tan"\],\["ate","eat","tea"\]\]

**Example 2:**

**Input:** strs = \[""\]
**Output:** \[\[""\]\]

**Example 3:**

**Input:** strs = \["a"\]
**Output:** \[\["a"\]\]

**Constraints:**

*   `1 <= strs.length <= 104`
*   `0 <= strs[i].length <= 100`
*   `strs[i]` consists of lowercase English letters.
