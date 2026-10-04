#include <iostream>
using namespace std;

void transposeArr(int mat[][3], int n, int m)
{
    int transpose[3][2] = {0};

    // Finding transpose
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            transpose[j][i] = mat[i][j];
        }
    }

    // Printing transpose
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    transposeArr(matrix, 2, 3);

    return 0;
}