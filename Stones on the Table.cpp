#include<bits/stdc++.h>
using namespace std;

int main()
{   int n;
    cin>>n;
    stack<char> a;
    string s;
    cin>>s;
    a.push(s[0]);
    for(int i=1;i<n;i++)
    {
        if(s[i]!=a.top())
            a.push(s[i]);
    }
    int count=0;
    while(!a.empty())
    {
        a.pop();
        count++;
    }
    cout<<s.length()-count<<endl;
}
