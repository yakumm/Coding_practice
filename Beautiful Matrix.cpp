#include<bits/stdc++.h>
using namespace std;


int main()
{
    int count = 0;
    vector<vector<int>> a;
    for(int i=0;i<5;i++)
    {
        vector<int> temp;
        for(int j=0;j<5;j++)
        {
            int t;
            cin>>t;
            temp.push_back(t);
        }
        a.push_back(temp);
    }

    int x,y;
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        {
            if(a[i][j]==1)
            {
                x=i;
                y=j;
            }
        }

    if(x==2&&y==2)
        cout<<count<<endl;
    else
        cout<<abs(x-2)+abs(y-2)<<endl;
}
