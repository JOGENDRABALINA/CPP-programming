/*#include<iostream>
using namespace std;
class student{
	public:
		string name,roll,college,branch;
		int bc=0;
		double per;
		student(string n,string r,string c,string b,int bc,double pe)
		{
			this->name=n; // this-> best way if we get garbage value use this method infront of the variable
			this->roll=r;
			this->college=c;
			this->branch=b;
			this->bc=bc;
			this->per=pe;
		}
		void display()
		{
			cout << name << "  " << roll << "  " << college << "  " << branch  << "  " << bc  << "  " << per  << "  " << endl;
		}
};

int main()
{
	student s1("Jogendra","22MH1A05F9","Aditya","CSE",0,83.1);
	s1.display();
}

#include<iostream>
using namespace std;
int num;
class name{
	public:
		name()
		{
			num=num;
		}
		int display()
		{
			cout << "\nEnter the number: ";
			cin >> num;
			if (num%2==0)
			{
				cout << "Even";
			}
			else 
			{
				cout << "Odd";
			}
		}
		
};

int main()
{
     name s1;
     s1.display();
}*/

#include<iostream>
using namespace std;
string name;
string company;
int salary;
class emp{
	public:
		emp()
		{
		    this->name=name;
		    this->company=company;
		    this->salary=salary;
		    
		}
		void display()
		{
			cout << name << endl << endl;
			cout << company << endl << endl;
			cout << salary << endl << endl;
		}
};

int main()
{
	emp details("Jogendra","Amazon",80000);
	details.display();
}



















