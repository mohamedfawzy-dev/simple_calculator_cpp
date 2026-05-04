#include <iostream>
using namespace std;

float Sum(float x, float y)
{
	return x + y;
}
float Multiply(float x, float y)
{
	return x * y;
}
float Divide(float x, float y)
{
	if (y == 0)
	{
		cout << "U really wanted to divide by zero ?" << endl;
		return 0;
	}
	return x / y;
}
float Subtract(float x, float y)
{
	return x - y;
}




int main()
{
	while (true)
	{
		system("cls");

		cout << "=====================================" << endl;
		cout << "         CALCULATOR SYSTEM" << endl;
		cout << "=====================================" << endl;
		cout << endl;

		float num1, num2;
		cout << "Enter The First Number : ";
		cin >> num1;

		cout << "Enter The Second One : ";
		cin >> num2;

		system("cls");

		int choice;
		cout << "1) Add\n2) Subtract\n3) Divide\n4) Multiply\n5) Exit" << endl;
		cout << "-------------------------------" << endl;
		cout << "Enter ur Choice : ";
		cin >> choice;

		system("cls");

		cout << "=====================================" << endl;
		cout << "         CALCULATOR SYSTEM" << endl;
		cout << "=====================================" << endl;
		cout << endl;

		cout << "[ Result ] " << endl;
		cout << "-------------------" << endl;

		switch (choice)
		{
		case 1:
			cout << num1 << " + " << num2 << " = " << Sum(num1, num2) << endl;
			break;
		case 2:
			cout << num1 << " - " << num2 << " = " << Subtract(num1, num2) << endl;
			break;
		case 3:
			cout << num1 << " / " << num2 << " = " << Divide(num1, num2) << endl;
			break;
		case 4:
			cout << num1 << " * " << num2 << " = " << Multiply(num1, num2) << endl;
			break;
		case 5:
			system("cls");

			cout << "=====================================" << endl;
			cout << "         CALCULATOR SYSTEM" << endl;
			cout << "=====================================" << endl;
			cout << endl;

			cout << "In case i don't see ya ... good afternoon, good evening, and good night!" << endl;
			cout << "----" << endl;
			return 0;
		default:
			cout << "Why did u choose something like that ??" << endl;
			break;
		}

		cout << "-------------------------------" << endl;
		system("pause");
	}
}