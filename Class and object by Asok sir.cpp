// Class 1 about class and object by ashok sir


/*#include<bits/stdc++.h>
using namespace std;
class name{
	public:
		string name="Hii Iam Jogendra";
		int na()
		{
			cout << name << endl;
		}
};
int main()
{
    name jogendra;
	jogendra.na();
}

#include<bits/stdc++.h>
using namespace std;
class name{
	public:
		string name="Jogendra";
		int na()
		{
			string name="Good Morning";
			cout << name << endl;
		}
};
int main()
{
    name *jogendra=new name();
    jogendra -> name="sir";
    jogendra -> name="Hello Every one";
    jogendra -> na();	
}


#include<iostream>
using namespace std;
class HumaBeing{
	public:
		string name;
		void Intro()
		{
			cout <<"Hi my name" <<" " << name << endl;
			}	
};
int main()
{
	HumaBeing Ravi;
	Ravi.name = "Ravi";
	Ravi.Intro();
	
		//int a = 10;
		//int *ptr = &a;
	
	HumaBeing *Jogendra = &Ravi;
	//(*Jogendra).name = "Jogendra";
	(*Jogendra).Intro();
}

//scope resolution

#include<iostream>
using namespace std;
class HumaBeing{
	public:
		string name;
		void Intro();	
};
void HumaBeing::Intro()
{
	cout <<"Hi my name" <<" " << name << endl;
}
int main()
{
	HumaBeing Ravi;
	Ravi.name = "Ravi";
	Ravi.Intro();
	
		//int a = 10;
		//int *ptr = &a;
	
	HumaBeing *Jogendra = &Ravi;
	//(*Jogendra).name = "Jogendra";
	(*Jogendra).Intro();
}

//private class

#include<iostream>
using namespace std;
class Huma{
	private:
		string name;
		int age;
	public:
		
		void SetData(int val,string word)
		{
			age=val;
			name=word;
		}
		
		void GetData()
		{
			cout << "Iam " << name << " " << "With age " << age << endl;
		}
};

int main()
{
	Huma object;
	object.SetData(19,"Jogendra");
	object.GetData();
}

#include<iostream>
using namespace std;
class Huma{
	private:
		string name;
		int age;
	public:
		Huma(string word,int val)
		{
			name=word;
			age=val;
		}
		void dispaly()
		{
			cout << name << " " << age << endl;
		}
};

int main()
{
	Huma Jog("Jogendra",19);
	Jog.dispaly();
}

#include<bits/stdc++.h>
using namespace std;
class Huma{
	private:
		string name;
		int age;
	public:
		Huma()
		{
			name="No Name";
			age =0;
		}
		Huma(string word,int val)
		{
			name=word;
			age=val;
		}
		Huma(string word)
		{
			name=word;
			age=0;
		}
		Huma(int val)
		{
			name="No Name";
			age=val;
		}
		void dispaly()
		{
			cout << name << " " << age << endl;
		}
};

int main()
{
	Huma Jog;
	Jog.dispaly();
}

#include<bits/stdc++.h>
using namespace std;
class Huma{
	private:
		string name;
		int age;
	public:
		Huma(string word="No Name",int val=0)
		{
			name=word;
			age=val;
		}
		Huma(string word)
		{
			name=word;
			age=0;
		}
		Huma(int val)
		{
			name="No Name";
			age=val;
		}
		Huma(Huma &Joge)
		{
			name=Joge.name;
			age=Joge.age;
		}
		void dispaly()
		{
			cout << name << " " << age << endl;
		}
};

int main()
{
	Huma Joge("Jogendra",19);
	Joge.dispaly();
}*/

//Copy structor

#include<iostream>
using namespace std;
class Student{
	private:
		string name;
		int roll;
	public:
		Student(string n,int r){
			name=n;
			roll=r;
		}
		//constructor overloading-constructor with different parameter
		Student(string n){
			name=n;
			this -> roll=23;
		}
			//copy constructor
		Student(Student &s){
			name=name;
			roll=21;
		}
	
		void display(){
			cout<<"Hi my name is " << name <<" with age " << roll << endl;
		}
};
int main(){
	Student s("Jogendra",19);
	//copy constructor
	Student s1(s);
	s.display();
	s1.display();
	
		
}




















