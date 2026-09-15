#include <iostream>
using namespace std;

void addition(int A[10][10], int B[10][10], int r, int c)
{
    int C[10][10];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            C[i][j] = A[i][j] + B[i][j];

    cout << "\nAddition of matrices:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
}

void subtraction(int A[10][10], int B[10][10], int r, int c)
{
    int C[10][10];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            C[i][j] = A[i][j] - B[i][j];

    cout << "\nSubtraction of matrices:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
}

void multiplication(int A[10][10], int B[10][10],
                    int r1, int c1, int r2, int c2)
{
    if (c1 != r2)
    {
        cout << "\nMatrix multiplication is not possible.\n";
        return;
    }

    int C[10][10] = {0};

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                C[i][j] += A[i][k] * B[k][j];

    cout << "\nMultiplication of matrices:\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
}


void transpose(int A[10][10], int r, int c)
{
    cout << "\nTranspose of matrix:\n";

    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
            cout << A[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int A[10][10], B[10][10];
    int r1, c1, r2, c2;
    int choice;

    cout << "Enter rows and columns of Matrix A: ";
    cin >> r1 >> c1;

    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> A[i][j];

    cout << "\nEnter rows and columns of Matrix B: ";
    cin >> r2 >> c2;

    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> B[i][j];

    cout << "\n----- MATRIX OPERATIONS -----\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Transpose of Matrix A\n";
    cout << "5. Transpose of Matrix B\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            if (r1 == r2 && c1 == c2)
                addition(A, B, r1, c1);
            else
                cout << "\nAddition is not possible. Dimensions must be same.\n";
            break;

        case 2:
            if (r1 == r2 && c1 == c2)
                subtraction(A, B, r1, c1);
            else
                cout << "\nSubtraction is not possible. Dimensions must be same.\n";
            break;

        case 3:
            multiplication(A, B, r1, c1, r2, c2);
            break;

        case 4:
            transpose(A, r1, c1);
            break;

        case 5:
            transpose(B, r2, c2);
            break;

        default:
            cout << "\nInvalid choice!\n";
    }

    return 0;
}