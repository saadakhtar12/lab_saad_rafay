#include<iostream>

using namespace std;

void Add(int a[][100], int b[][100], int r, int c){
	int sum[100][100], i = 0, j = 0;
	//calculating sum of two matrics
	for (i = 0; i < r; ++i)
	for (j = 0; j < c; ++j)
		sum[i][j] = a[i][j] + b[i][j];

	// Displaying the resultant sum matrix.
	cout << endl << "Sum of two matrix is: " << endl;
	for (i = 0; i < r; ++i)
	for (j = 0; j < c; ++j)
	{
		cout << sum[i][j] << "  ";
		if (j == c - 1)
			cout << endl;
	}
}

void Sub(int a[100][100], int b[100][100], int r, int c){
	int i = 0, j = 0, sub[100][100];
	//calculating sub of two matrixes
	for (i = 0; i < r; ++i)
	for (j = 0; j < c; ++j)
		sub[i][j] = a[i][j] - b[i][j];
	// Displaying the resultant Subtraction matrix.
	cout << endl << "Subtraction of two matrix is: " << endl;
	for (i = 0; i < r; ++i)
	for (j = 0; j < c; ++j)
	{
		cout << sub[i][j] << "\t";
		if (j == c - 1)
			cout << endl;
	}
}