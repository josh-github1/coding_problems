# https://leetcode.com/problems/employee-importance/

# Definition for Employee.
class Employee(object):
    def __init__(self, id, importance, subordinates):
    	#################
        :type id: int
        :type importance: int
        :type subordinates: List[int]
        #################
        self.id = id
        self.importance = importance
        self.subordinates = subordinates


class Solution(object):
    def getImportance(self, employees, id):
        
        :type employees: List[Employee]
        :type id: int
        :rtype: int
        
        totalImportance = employees[id][1]
        for i in range(0, len(employees[id][3])):
            totalImportance


def main():
    print("Program running")

    a1 = Employee(1, 5, [2,3])
    a2 = Employee(2, 3, [])
    a3 = Employee(3, 3, [])

    employee_arr = [a1, a2, a3]

    id_in = 1

    sol1 = Solution()
    imVal = sol1.getImportance(employee_arr, id_in)

    print("importance value: ", imVal)

    print("Program finished")

if __name__ == "__main__":
    main()