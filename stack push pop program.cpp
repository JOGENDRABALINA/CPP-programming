#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> Jog;
    int n,a;
    cout << "Enter the stack size: ";
    cin >> n;
    int i;
    for(i=0;i<n;i++)
    {
        cin >> a;
        Jog.push_back(a);
    }
    stack<int>Hru;
    Hru.push(Jog[0]);
    for(i=1;i<n;i++)
    {
        if (Jog[i]==Hru.top())
        {
            Hru.pop();
        }
        else
        {
            Hru.push(Jog[i]);
        }
    }
        while(!Hru.empty())
        {
            cout << Hru.top() << " ";
            Hru.pop();
        }
   
}
