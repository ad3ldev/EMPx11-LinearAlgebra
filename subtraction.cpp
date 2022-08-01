#include <iostream>
#include <vector>

using namespace std;
vector<vector<double>> subtract(int n_A, int m_A, vector<vector<double>> matrix_A, int n_B, int m_B, vector<vector<double>> matrix_B)
{
    vector<vector<double>> result;
    if (n_A != n_B || m_A != m_B)
    {
        return result;
    }
    for (int i = 0; i < n_A; i++)
    {
        vector<double> temp;
        for (int j = 0; j < m_A; j++)
        {
            temp.push_back(matrix_A[i][j] - matrix_B[i][j]);
        }
        result.push_back(temp);
    }
    return result;
}