#include <iostream>
using namespace std;
int SpiralMatrix(int mat[4][4], int n, int m)
{
    int Srow = 0;
    int Scol = 0;
    int Erow = n - 1;
    int Ecol = m - 1;
    while (Srow <= Erow && Scol <= Ecol)
    {
        // Top
        for (int j = Scol; j <= Ecol; j++)
        {
            cout << mat[Srow][j]<<",";
        }
        // Right
        for (int i = Srow + 1; i <= Erow; i++)
        {
            cout << mat[i][Ecol]<<",";
        }
        // Bottom
        for (int j = Ecol - 1; j >= Scol; j--)
        {
            cout << mat[Erow][j]<<",";
        }
        // Left
        for (int i = Erow - 1; i >= Srow + 1; i--)
        {
            cout << mat[i][Scol]<<",";
        }
         Srow++;
    Scol++;
    Ecol--;
    Erow--;
    }
    cout<<endl;
    return 0;
   
}

int main()
{
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    SpiralMatrix(matrix, 4, 4);
    return 0;
}