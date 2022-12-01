#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = rand() % 25;
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}

void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];

	if (i < size - 1)
		Print(a, size, i + 1);

	else
		cout << endl;
}

int Max(int* a, const int size, int i, int max)
{
	if (a[i] > max)
		max = a[i];
	if (i < size - 1)
		return Max(a, size, i + 1, max);
	else
		return max;
}

int Min(int* a, const int size, int i, int min)
{
	if (a[i] < min)
		min = a[i];
	if (i < size - 1)
		return Min(a, size, i + 1, min);
	else
		return min;
}

int Average(int* a, const int size, int i, int min, int max)
{
	const int n = 8;
	min = Min(a, n, 1, a[0]);
	max = Max(a, n, 1, a[0]);

	if (i < size - 1)
		return (min + max) / 2;
	else
		return 0;
}

int main()
{
	srand((unsigned)time(NULL));

	const int n = 8;
	int a[n];

	int Low = -100;
	int High = 100;

	Create(a, n, Low, High, 0);
	Print(a, n, 0);

	cout << "max = " << Max(a, n, 1, a[0]) << endl;
	cout << "min = " << Min(a, n, 1, a[0]) << endl;
	cout << "average = " << Average(a, n, 1, 0, 0) << endl;


	return 0;
}

