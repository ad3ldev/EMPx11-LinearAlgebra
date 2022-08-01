#include "multiplication.cpp"

vector<vector<double>> power(int n, int m, int exponent, vector<vector<double>> matrix)
{
    if (exponent == 1)
    {
        return matrix;
    }
    vector<vector<double>> intermediate = power(n, m, exponent - 1, matrix);
    vector<vector<double>> result = multiply(n, m, matrix, n, m, intermediate);
    return result;
}