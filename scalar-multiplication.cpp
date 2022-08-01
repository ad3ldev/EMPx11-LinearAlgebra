#include <iostream>
#include <vector>

using namespace std;
vector<vector<double>> scalar(int n, int m, double scalar, vector<vector<double>> matrix)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = scalar * matrix[i][j];
        }
    }
    return matrix;
}