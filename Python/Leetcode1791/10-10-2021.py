# https://leetcode.com/problems/find-center-of-star-graph/

'''
class Solution(object):
    def findCenter(self, edges):
        """
        :type edges: List[List[int]]
        :rtype: int
        """
        if (edges[0][0] == edges[1][0]):
            #print("case 1 passed.")
            centerInt = edges[0][0]

        if (edges[0][0] == edges[1][1]):
            #print("case 2 passed.")
            centerInt = edges[0][0]

        if (edges[0][1] == edges[1][0]):
            #print("case 3 passed.")
            centerInt = edges[0][1]
        
        if (edges[0][1] == edges[1][1]):
            #print("case 4 passed.")
            centerInt = edges[0][1]
        
        return centerInt
'''



class Solution:

    def __init__(self, edges):
        self.edges = []    # creates a new empty list for each
        self.centerNum = 0
        """
        :type edges: List[List[int]]
        :rtype: int
        """
        

    def findCenter(self, edges):
        centerInt = 0
        
        if (edges[0][0] == edges[1][0]):
            print("case 1 passed.")
            centerInt = edges[0][0]

        if (edges[0][0] == edges[1][1]):
            print("case 2 passed.")
            centerInt = edges[0][0]

        if (edges[0][1] == edges[1][0]):
            print("case 3 passed.")
            centerInt = edges[0][1]
        
        if (edges[0][1] == edges[1][1]):
            print("case 4 passed.")
            centerInt = edges[0][1]
        
        self.centerNum = centerInt
        return self.centerNum

def main():
    print("Program running")

    edges = [[1,2],[5,1],[1,3],[1,4]]    
    ans1 = Solution(edges)
    ans1.findCenter(edges)
    print(ans1.centerNum)

    print("Program finished")

if __name__ == "__main__":
    main()
