#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &a)
{
    for(int i=0;i<a.size();i++)
        cout<<a[i];//<<" ";
    cout<<endl;
}


int main()
{   string a,b;
    cin>>a>>b;
    vector<int> v;
    int n=a.length();
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
            v.push_back(1);
        else
            v.push_back(0);
    }
    print(v);
}
