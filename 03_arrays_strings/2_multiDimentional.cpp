#include <iostream>
using namespace std;
#include <climits>

int basicArr()
{
    int table[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << table[i][j] << " ";
        }
        cout << "\n";
    }
}

int inputArr()
{
    int matrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// find whether the key is present in matrix or not
bool linearSearch(int mat[][4], int rows, int cols, int key = 5) // it's necessary to give no. of cols
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (key == mat[i][j])
            {
                return i + j;
            }
        }
    }
    return 0;
}
int linearS()
{
    int matrix[3][4] = {{1, 2, 3, 4}, {4, 5, 6, 8}, {7, 8, 9, 10}};
    int rows = 3;
    int cols = 4;
    linearSearch(matrix, rows, cols);
}

int rowSum()
{
    int lowVal = INT_MIN;
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 1};
    for (int i = 0; i < 3; i++)
    {
        int tempSum = 0;
        for (int j = 0; j < 3; j++)
        {
            tempSum += matrix[i][j];
        }
        lowVal = max(lowVal, tempSum);
    }
    return lowVal;
}

int diagonalSum()
{
}
int main()
{
    // basicArr();
    // inputArr();
    // cout << linearS();
    // cout<<rowSum();
    diagonalSum();
}