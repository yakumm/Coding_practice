#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    vector<int> v;
    int i=0;
    while(i<s.length())
    {
        if(s[i]=='.')
        {   v.push_back(0);
            i++;
        }
        if(s[i]=='-'&&s[i+1]=='.')
        {
            v.push_back(1);
            i+=2;
        }
        if(s[i]=='-'&&s[i+1]=='-')
        {
            v.push_back(2);
            i+=2;
        }
    }
    for(int j=0;j<v.size();j++)
        cout<<v[j];
    cout<<endl;
}
