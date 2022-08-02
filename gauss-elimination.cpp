#include <iostream>
#include <vector>

using namespace std;
vector<vector<double>> gauss(int n, int m, vector<vector<double>> matrix)
{
    for (int i = 0; i < n; i++)
    {
        vector<double> top_row;
        for (int j = i + 1; j < n; j++)
        {
            top_row = matrix[i];
            vector<double> row = matrix[j];
            if (row[i] != 0)
            {
                double coff = (-row[i]) / top_row[i];
                transform(top_row.begin(), top_row.end(), top_row.begin(), [coff](double d) -> double
                          { return d * coff; });
                for (int k = 0; k < m; k++)
                {
                    matrix[j][k] = top_row[k] + row[k];
                }
            }
        }
    }
    return matrix;
}