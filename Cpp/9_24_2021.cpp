#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


// Solution: Just find the total sum of both vectors and subtract to get the missing number

/*
    Find missing value, e.g. [1 2 3 4] & [1 2 4]
*/
int missingVal(vector<int> in1, vector<int> in2)
{
    vector<int> inArr1 = in1;
    vector<int> inArr2 = in2;

    vector<int> hold1;
    vector<int> hold2;

    for (int i = 0; i < in1.size()-1; i++)
    {
        for (int k = 0; k < in2.size()-1; k++)
        {
            if (inArr1[i] == inArr2[k])
            {
                hold1.push_back(inArr1[i]);
                hold2.push_back(inArr2[k]);
                
                inArr1.erase(inArr1.begin()+i);
                inArr2.erase(inArr2.begin()+k);

            }
        }
    }

    cout << "Size of 1st input array is now: " << inArr1.size() << endl;
    cout << "Size of 2nd input array is now: " << inArr2.size() << endl;

    int ret; 
    if (inArr1.size() != 0)
    {
        int ret = inArr1[0];
    }

    if (inArr2.size() != 0)
    {
        int ret = inArr2[0];
    }

    return ret;

}

int main()
{
    cout << "test" << endl;
    vector<int> a{1, 2, 3, 4, 5};
    vector<int> b{1, 2, 3, 5};
    cout << "test" << endl;

    missingVal(a, b);

    cout << "The missing value is: " <<  endl;
}