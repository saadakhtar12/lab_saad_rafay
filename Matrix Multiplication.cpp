#include<iostream>
using namespace std;
void Multiply(int r1, int c1, int r2, int c2, int a[10][10], int b[10][10]){
	int i = 0, j = 0, k = 0, mult[100][100];
	//checking if multiplication is possible
	while (c1 != r2)
	{
		cout << "Operation Not Possible as reheck matrix size.";

		cout << "Enter rows and columns for first matrix: ";
		cin >> r1 >> c1;

		cout << "Enter rows and columns for second matrix: ";
		cin >> r2 >> c2;
	}


	// declaring elements of matrix mult to 0.
	for (i = 0; i < r1; ++i)
	for (j = 0; j < c2; ++j)
	{
		mult[i][j] = 0;
	}

	// Multiplying matrix a and b and storing in array mult.
	for (i = 0; i < r1; ++i)
	for (j = 0; j < c2; ++j)
	for (k = 0; k < c1; ++k)
	{
		mult[i][j] += a[i][k] * b[k][j];
	}

	// Displaying the multiplication of two matrix.
	cout << endl << "Result Matrix: " << endl;
	for (i = 0; i < r1; ++i)
	for (j = 0; j < c2; ++j)
	{
		cout << " " << mult[i][j];
		if (j == c2 - 1)
			cout << endl;
	}
}
