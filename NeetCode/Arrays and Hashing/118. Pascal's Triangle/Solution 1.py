class Solution:
    def pascalsTriangle(self, numRows: int):
        init_list = [1, 1]
        temp = [1]
        rez = []

        rez.append(temp)
        if numRows == 1:
            return rez
        rez.append(init_list)
        if numRows == 2:
            return rez

        for k in range(numRows - 2):
            temp = [1]
            for i in range(len(init_list) - 1):
                temp.append(init_list[i] + init_list[i + 1])
            temp.append(1)
            init_list = temp[:]
            rez.append(init_list)
        return rez


if __name__ == "__main__":
    solution: Solution = Solution()
    solution.pascalsTriangle(5)
