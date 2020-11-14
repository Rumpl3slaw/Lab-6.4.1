#include <iostream>
#include <iomanip>

using namespace std;

void Input(int* a, const int size);
void Cout(int* a, const int size);
int Max(int* a, const int size);
int Sum(int* a, const int size);

void Input(int* a, const int size)
{
	for (int i = 0;i < size;i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
	cout << endl;
}
int main()
{
	srand((unsigned)time(NULL));

	const int size = 10;
	int a[size];

	Input(a, size);

	cout << "Masyv:" << endl;
	cout << endl;
	Cout(a, size);

	int max = Max(a, size);
	cout << "Maksymal`nyi element masyva:" << max << endl;
	cout << endl;

	int sum = Sum(a, size);
	cout << "Suma elementiv do ostannogo dodatnogo elementu:" << sum << endl;
	cout << endl;

	return 0;

}
void Cout(int* a, const int n)
{
	for (int i = 0;i < n;i++)
		cout << setw(5) << a[i];
	cout << endl;
	cout << endl;
}
int Max(int* a, const int size)
{
	int p_i = 0;
	int max = a[p_i];
	for (int i = p_i + 1;i < size;i++)
	{
		if (max < a[i])
			max = a[i];
		else;
	}
	return max;
}
int Sum(int* a, const int size)
{
	int S = 0;

	for (int i = 0;i < size;i++)
	{
		if (a[i] > 0)
		{
			int ki = size - 1;
			for (a[ki]< 0;ki--;);
			for (i++;i < ki;i++)
				S += a[i];
			i = size;
		}
		else;
	}
	return S;
}
int Change(int* a, const int size,int A,int B)
{
    cout << "A=";
    cin >> A;
	cout << endl;
	cout << "B=";
	cin >> B;
	cout << endl;

	int c = 0;
	for (int i = c;i < size;i++)
	{
		int  pi = 0;
		int ppi = 0;
		int value;
		value = a[i];
		if ((0 <= value && value < 1) || (-1 < value <= 0))
		{
			pi = a[ppi];
			a[ppi] = a[i];
			a[i] = pi;
			ppi++;
		}
		else;
	}
	return 0;
}