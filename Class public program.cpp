#include<iostream>
using namespace std;
class Add
{
	public:
		int addition(int a,int b)
		{
			cout << "NOTE :For Addition of two numbers\n\n";
			cout << "Enter the first number: ";
			cin >> a;
			cout << "Enter the second number: ";
			cin >> b;
			int sum;
			sum=a+b;
			cout << "The result is: " << sum << endl << endl;
		}
};

class Sub
{
	public:
		int substraction(int a,int b)
		{
			cout << "NOTE :For Substraction of two numbers\n\n";
			cout << "Enter the first number: ";
			cin >> a;
			cout << "Enter the second number: ";
			cin >> b;
			int sum;
			sum=a-b;
			cout << "The result is: " << sum << endl << endl;
		}
};

class Mul
{
	public:
		int multiplication(int a,int b)
		{
			cout << "NOTE :For Multiplication of two numbers\n\n";
			cout << "Enter the first number: ";
			cin >> a;
			cout << "Enter the second number: ";
			cin >> b;
			int sum;
			sum=a*b;
			cout << "The result is: " << sum << endl << endl;
		}
};

class Div
{
	public:
		int division(int a,int b)
		{
			cout << "NOTE :For Division of two numbers\n\n";
			cout << "Enter the first number: ";
			cin >> a;
			cout << "Enter the second number: ";
			cin >> b;
			int sum;
			sum=a/b;
			cout << "The result is: " << sum << endl << endl;
		}
};

int main()
{
	int a,b;
	Add addobject;
	addobject.addition(a,b);
	Sub subobject;
	subobject.substraction(a,b);
	Mul mulobject;
	mulobject.multiplication(a,b);
	Div divobject;
	divobject.division(a,b);
}

