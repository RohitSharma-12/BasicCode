#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int numCntr, count = 0;
	int state = true;
	int* numCntrptr;
	int* numCells;

	cout << "Enter Number of Ingridiants" << endl;
	cin >> numCntr;

	numCntrptr = new int[numCntr];

	cout << "Enter Number of Quantity inside Ingridiants" << endl;
	for (uint8_t i = 0; i < numCntr; i++)
	{
		cin >> numCntrptr[i];
	}

	cout << "Containter Quantity" << endl;
	for (uint8_t i = 0; i < numCntr; i++)
	{
		cout << numCntrptr[i] << " ";
	}
	cout << endl;

	numCells = new int[numCntr];

	cout << "Enter Number of quantity according to container" << endl;
	for (uint8_t i = 0; i < numCntr; i++)
	{
		cin >> numCells[i];
	}

	uint8_t i = 0;
	while (state)
	{
		numCntrptr[i] = numCntrptr[i] - numCells[i];
		if (numCntrptr[i] < numCells[i])
		{
			state = false;
		}
		if (i == (numCntr - 1))
		{
			count++;
			i = 0;
		}
		i++;
	}

	cout << "Count : " << count + 1 << endl;

	cin >> count;
}
