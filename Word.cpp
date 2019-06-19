#include<bits/stdc++.h>
using namespace std;

int main()
{
   string su;
   cin>>su;
   int up=0;
   int low =0;
   for(int i=0;i<su.length();i++)
   {
        if(isupper(su[i]))
            up++;
        else
            low++;
   }
   if(up>low)
   {
    transform(su.begin(), su.end(), su.begin(), ::toupper);
   }
   else
   {
    transform(su.begin(), su.end(), su.begin(), ::tolower);
   }
   cout<<su<<endl;
 }

