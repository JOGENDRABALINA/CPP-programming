#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>a={1,2,3};
	int n=a.size();
	for(int i=0;i<(int)pow(2,n);i++)
	{
		int x=n;
		int j=0;
		while(x)
		{
		    x--;
		    if(i&(int)pow(2,x))
		    {
		        cout<<a[j]<<" ";
		    }
		    j++;
		}
		cout<<endl;
	}
}
