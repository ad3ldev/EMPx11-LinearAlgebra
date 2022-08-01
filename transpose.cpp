#include <iostream>
#include <vector>

using namespace std;
vector<vector<double>> transpose(int n, int m, vector<vector<double>> matrix)
{
    vector<vector<double>> result;
    for (int i = 0; i < m; i++)
    {
        vector<double> temp;
        for (int j = 0; j < n; j++)
        {
            temp.push_back(matrix[j][i]);
        }
        result.push_back(temp);
    }
    return result;
}