#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int  i, k;
	double S;

	cout << "k = "; cin >> k;
	S = k;
	i = 1;
	while (i <= 15)
	{
		S *= (pow(sin(i), 2) + pow(cos(1 / i), 2)) / (i * i);
		i++;
	}
	cout << "While " << S << endl;
	S = k;
	i = 1;
	do {
		S *= (pow(sin(i), 2) + pow(cos(1 / i), 2)) / (i * i);
		i++;
	} while (i <= 15);
	cout << "Do+While " << S << endl;
	S = k;
	i = 1;
	for (i = 1; i <= 15; i++)
	{
		S *= (pow(sin(i), 2) + pow(cos(1 / i), 2)) / (i * i);
	}
	cout << " (for++) " << S << endl;

	for (i = 1; i >= 15; i--)
	{
		S *= (pow(sin(i), 2) + pow(cos(1 / i), 2)) / (i * i);
		i++;
	}
	cout << " for-- " << S << endl;
	return 0;
}