#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int>Jog;
	Jog[1]=2;
	for(auto it:Jog)
	{
		cout << it.first << endl;
		cout << it.second << endl;
	}
}

//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//    // Write C++ code here
//    map<int,int>Jog;
//    vector<int>v ={1,1,2,3,4,5,7,8,9,1,2,5,6,7};
//    for(int i=0;i<v.size();i++)
//    {
//        Jog[v[i]]+=1;
//    }
//    for (auto it:Jog)
//    {
//        cout << it.first << "   " << it.second << endl;
//    }
//    return 0;
//}
