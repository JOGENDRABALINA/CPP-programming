#include<bits/stdc++.h>
using namespace std;
void subset(vector<int>a,int index,vector<int>ans,int size)
{
	if (index>=size)
	{
		int i;
		for(i=0;i<ans.size();i++)
		{
			cout << ans[i] << " ";
		}
		cout << endl;
		return;
	}
		ans.push_back(a[index]);
		subset(a,index+1,ans,size);
		ans.pop_back();
		subset(a,index+1,ans,size);
}
int main()
{
	vector<int> a={1,2,3};
	subset(a,0,{},a.size());
}
