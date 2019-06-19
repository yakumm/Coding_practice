#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<vector<int>> a;
    bool flag = true;
    for(int i=0;i<n;i++)
    {
        vector<int> temp;
        for(int j=0;j<3;j++)
        {
            int t;
            cin>>t;
            temp.push_back(t);
        }
        a.push_back(temp);
    }

    for(int j=0;j<3;j++)
    {
        int sum=0;
        for(int i=0;i<a.size();i++)
        {
            sum=sum+a[i][j];
        }
       
        if(sum!=0)
        {
            flag=false;
            break;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
