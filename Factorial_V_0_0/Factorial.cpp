#include <iostream>
using namespace std;

int iFactorial(int);

int main()
{
	int iNumber = 5;

	cout << iFactorial(iNumber) << endl;

	return 0;
}

int iFactorial(int number)
{
	int result = number;
	number--;

	if (number > 0)
	{
		result *= iFactorial(number);
	}
	else
	{
		result = 1;
	}

	return result;
}

