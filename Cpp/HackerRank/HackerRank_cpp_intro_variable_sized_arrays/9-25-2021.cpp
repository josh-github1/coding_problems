#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;


int main() 
{
    
    vector<int> thisVec;

    while (true) 
    {
    
        int tempInt;
        
        cin >> tempInt;
        thisVec.push_back(tempInt);
        
        if (cin.peek() == '\n') 
        {
            break;
        } 
    
    }

    int num_of_arr = thisVec[0];
    int num_of_queries = thisVec[1];


    vector< vector<int> > nested_vec;
       
    for (int i = 0; i < num_of_arr; i++)
    {
        // cout << "First for loop, iteration i: " << i << endl;
        vector<int> thisVec;

        int count = 0;
        while (true) 
        {
            // count ++;
            // cout << "first while loop, iteration: " << count << endl;
            int tempInt;
            cin >> tempInt;
            thisVec.push_back(tempInt);
            if (cin.peek() == '\n') 
            {
                break;
            } 
        }
        nested_vec.push_back(thisVec);
    } 

    vector< vector<int> > nested_query;
    for (int i = 0; i < num_of_queries; i++)
    {
        vector<int> thisVec;
        while (true) 
        {
            int tempInt;
            cin >> tempInt;
            thisVec.push_back(tempInt);
            if (cin.peek() == '\n') 
            {
            break;
            } 
        }
        nested_query.push_back(thisVec);

    }
    
    for (int i = 0; i < num_of_queries; i++)
    {
        // cout << "nested vec" << nested_vec[nested_query[i][0]] << endl;
        // int x = nested_vec[nested_query[i][0]][0];
        // cout << "nested vec + 1" << x << endl;

        cout << nested_vec[nested_query[i][0]][nested_query[i][1]] << endl;
    }
    
    return 0;
}