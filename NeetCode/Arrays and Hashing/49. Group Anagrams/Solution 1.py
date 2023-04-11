class Solution:

    def getMap(self, word: str) -> dict:
        tempMap = {}
        for i in word:
            tempMap[i] = 1 + tempMap.get(i, 0)

        return tempMap

    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        rez = []

        for i in range(len(strs)):
            map_1 = self.getMap(strs[i])
            temp = []
            temp.append(strs[i])

            for j in range(i + 1, len(strs)):
                map_2 = self.getMap(strs[j])

                print(map_1, map_2)
                flag = False
                for k in map_1.keys():
                    if map_1[k] == map_2.get(k, 0):
                        flag = True
                        # temp.append(strs[j])
                    else:
                        flag = False
                        break

                if flag and strs[j] not in temp:
                    temp.append(strs[j])
            print(temp)

            # print(temp)


if __name__ == "__main__":
    solution: Solution = Solution()

    solution.groupAnagrams(["eat", "ate", "tan", "nat", "tea", "bat"])
