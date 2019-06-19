#include<bits/stdc++.h>
using namespace std;

bool checkprime(int x)
{   
    if(x==2||x==3)
        return true;
    bool flag =true;
    int temp=sqrt(x);
    for(int i=2;i<=temp;i++)
        if(x%i==0)
        {
            flag=false;
            break;
        }
    return flag;
}

int main()
{   int x,y;
    cin>>x>>y;
    bool flag=true;
    if(checkprime(x)!=true||checkprime(y)!=true)
        flag=false;
    else
    {
        for(int i=x+1;i<y;i++)
            if(checkprime(i))
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
