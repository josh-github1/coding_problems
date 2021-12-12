#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{

    int num_of_arr;
    int num_of_queries;
    
    cin >> num_of_arr;
    cin >> num_of_queries;
    
    vector< vector<int> > nested_vec;
    
    int x;
    cin >> x;
    int* array = new int[ x ];
    // use array here ...
    delete [] array;
       
    for (int i = 0; i < num_of_arr; i++)
    {
        vector<int> inner_arr;
        cin >> inner_arr;
        nested_vec[i].push_back(inner_arr);
    } 

    vector< vector<int> > nested_query;
    for (int i = 0; i < num_of_queries; i++)
    {
        int n;
        vector<int> inner_query;
        cin >> inner_query;
        nested_query[i].push_back[inner_query];
    }
    
    for (int i = 0; i < num_of_queries; i++)
    {
        cout << nested_vec[nested_query[i][0]][nested_query[i][1]] << endl;
    }
    
    return 0;
}
