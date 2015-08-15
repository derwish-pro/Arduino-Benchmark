

#include "stdafx.h"
#include <time.h>
#include <iostream>
#include <stdio.h>
using namespace std;


int main()
{

	int startTime;
	int endTime;
	system("pause");


	cout << "Calculating float:" << endl;

	startTime = clock();
	float x;
	x = 10000;

	for (int a = 0; a < 1000; a++)

	for (int i = 0; i < 100; i++)
		for (int i2 = 0; i2 < 100; i2++)
		{
			x = i2;

			for (int i3 = 0; i3 < 7; i3++)
			{
				x = x * 0.999;
			}
		}

	endTime = clock();
	float result = float(endTime - startTime) / 1000;
	cout << result;
	cout << "ms" << endl;
	cout << x << endl;


	cout << "Calculating int:" << endl;

	startTime = clock();
	int x2;

	for (int a = 0; a < 1000; a++)

	for (int i = 0; i < 100; i++)
		for (int i2 = 0; i2 < 100; i2++)
		{
			x2 = i2;

			for (int i3 = 0; i3 < 7; i3++)
			{
				x2 = x2 * 2;
			}
		}


	endTime = clock();
	result = float(endTime - startTime) / 1000;
	cout << result;
	cout << "ms" << endl;
	cout << x2 << endl;



	system("pause"); 

	return 0;
}

