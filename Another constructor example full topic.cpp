#include<iostream>
using namespace std;
class College{
	public:
		string name,placement,infrastructure,branch;
		int fees;
		double per;
		College(string n,string p,string i,string b,int f,double pe);
		void display();
		
};
College::College(string n,string p,string i,string b,int f,double pe){
	this->name=n;
	this->placement=p;
	this->infrastructure=i;
	this->branch=b;
	this->fees=f;
	this->per=pe;
}
void College::display(){
	cout<<name<<" "<<placement<<" "<<infrastructure<<" "<<branch<<" "<<fees<<" "<<per;
}
int main(){
	College s1("aec","80","good","allbranch",125,12);
	s1.display();
}
