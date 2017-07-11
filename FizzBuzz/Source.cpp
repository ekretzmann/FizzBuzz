//Fizzbuzz Demo 1
//Created 7/10/17 by Ernie Kretzmann

#include <iostream>
using namespace std;

int main()
{
	int num = 1;
	int mult3 = 1;
	int mult5 = 1;

	while (num <= 100)
	{
		bool isMultiple = false;

		if (mult3 == 3)
		{
			cout << "Fizz";
			mult3 = 0;
			isMultiple = true;
		}

		if (mult5 == 5)
		{
			cout << "Buzz";
			mult5 = 0;
			isMultiple = true;
		}

		if (isMultiple == false)
		{
			cout << num;
		}

		cout << "\n";

		num++;
		mult3++;
		mult5++;
		
	}
	
	system("pause");
	return 0;
}