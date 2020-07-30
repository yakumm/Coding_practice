#include<bits/stdc++.h>
using namespace std;

void spiraltraversal(vector<vector<int>> &v){
	int n = v.size();
	for(int i=0;i<n;i++){
		if(i%2==0){
			for(int j=0;j<n;j++){
				cout<<v[i][j]<<" ";		
			}
			cout<<endl;
		}
		else{
			for(int j=n-1;j>=0;j--){
				cout<<v[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
