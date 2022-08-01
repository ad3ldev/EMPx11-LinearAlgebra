#include <vector>

using namespace std;
bool is_equal(int n_A, int m_A, vector<vector<double>> matrix_A, int n_B, int m_B, vector<vector<double>> matrix_B)
{
    if (n_A != n_B || m_A != m_B)
    {
        return false;
    }
    for (int i = 0; i < n_A; i++)
    {
        for (int j = 0; j < m_A; j++)
        {
            if (matrix_A[i][j] != matrix_B[i][j])
            {
                return false;
            }
        }
    }
    return true;
}