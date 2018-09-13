
#include<iostream>
#include"stdafx.h"
using namespace std;
void Transpose(int r, int c, int a[10][10]){

	int i = 0, j = 0, transpose[10][10];
	//original matrix
	cout << endl << "Entered Matrix: " << endl;
	for (i = 0; i < r; ++i)
	for (j = 0; j < c; ++j)
	{
		cout << " " << a[i][j];
		if (j == c - 1)
			cout << endl << endl;
	}

	// finding transpose
	for (i = 0; i < r; ++i)
	for (j = 0; j < c; ++j)
	{
		transpose[j][i] = a[i][j];
	}
	// printing
	cout << endl << "Transpose of Matrix: " << endl;
	for (i = 0; i < c; ++i)
	for (j = 0; j < r; ++j)
	{
		cout << " " << transpose[i][j];
		if (j == r - 1)
			cout << endl << endl;
	}
}