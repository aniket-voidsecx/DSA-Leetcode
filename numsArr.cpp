#include <iostream>
using namespace std;

void numsArr(int nums[3][3], int n, int m)
{
    int sum = 0;

    // Sum of 2nd row elements
    for (int j = 0; j < m; j++)
    {
        sum += nums[1][j];
    }

    cout << "Sum is: " << sum << endl;
}

int main()
{
    int matrix[3][3] = {
        {1, 4, 9},
        {11, 4, 3},
        {2, 2, 3}
    };

    numsArr(matrix, 3, 3);

    return 0;
}