#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
vector<vector<double>> multiply(int n_A, int m_A, vector<vector<double>> matrix_A, int n_B, int m_B, vector<vector<double>> matrix_B)
{
    vector<vector<double>> result;
    if (n_A != m_B || m_A != n_B)
    {
        return result;
    }
    for (int i = 0; i < n_A; i++)
    {
        vector<double> row;
        for (int j = 0; j < n_B; j++)
        {
            vector<double> element;
            for (int k = 0; k < m_B; k++)
            {
                double temp = (matrix_A[i][k] * matrix_B[k][j]);
                element.push_back(temp);
            }
            row.push_back(accumulate(element.begin(), element.end(), 0));
        }
        result.push_back(row);
    }
    return result;
}