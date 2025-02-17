# Letter Tile Possibilities

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Hash Table</div>
<div style="color: #46c6c2">String</div>
<div style="color: #46c6c2">Backtracking</div>
<div style="color: #46c6c2">Counting</div>
</div>

---

You have `n`  `tiles`, where each tile has one letter `tiles[i]` printed on it.

Return _the number of possible non-empty sequences of letters_ you can make using the letters printed on those `tiles`.

**Example 1:**

**Input:** tiles = "AAB"
**Output:** 8
**Explanation:** The possible sequences are "A", "B", "AA", "AB", "BA", "AAB", "ABA", "BAA".

**Example 2:**

**Input:** tiles = "AAABBC"
**Output:** 188

**Example 3:**

**Input:** tiles = "V"
**Output:** 1

**Constraints:**

*   `1 <= tiles.length <= 7`
*   `tiles` consists of uppercase English letters.