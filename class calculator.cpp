#include<iostream>
using namespace std;

int a,b,ch;
class choice{
	public:
		int cal()
	   {
	   	    cout << "\n\npress 1 for Addition";
	   	    cout << "\n\npress 2 for substraction";
	   	    cout << "\n\npress 3 for Multiplication";
			cout << "\n\nEnter your choice: ";
			cin >> ch;
			switch (ch)
			{
				case 1:
					cout << "\n\nEnter the first number: ";
					cin >> a;
					cout << "\n\nEnter the second number: ";
					cin >> b;
					cout << a+b;
					break;
				case 2:
					cout << "\n\nEnter the first number: ";
					cin >> a;
					cout << "\n\nEnter the second number: ";
					cin >> b;
					cout << a-b;
					break;
				case 3:
					cout << "\n\nEnter the first number: ";
					cin >> a;
					cout << "\n\nEnter the second number: ";
					cin >> b;
					cout << a*b;
					break;
				default:
					cout << "\n\nInvalid choice";
			}
	    }
};
class name{
	public:
		int times()
		{
			int n,num,i;
			cout << endl;
            cout << endl;
			cout << "Enter the number: ";
			cin >> n;
			cout << endl;
			for(i=1;i<=n;i++)
			{
				cout << i << endl;
			}
	    }
};

int main()
{
	choice calobj;
	calobj.cal();
	
	name nameobj;
	nameobj.times();
}

