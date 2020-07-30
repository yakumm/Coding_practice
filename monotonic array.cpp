#include<bits/stdc++.h>
using namespace std;

bool increasing(vector<int> &v){
	int n = v.size();
	bool flag = true;
	for(int i =1;i<n;i++){
		if(v[i]>=v[i-1])
			flag=true;
		else{
			flag=false;
			break;
		}
	}
	return flag;
}

bool decreasing(vector<int> &v){
	int n = v.size();
	bool flag = true;
	for(int i =1;i<n;i++){
		if(v[i]<=v[i-1])
			flag=true;
		else{
			flag=false;
			break;
		}
	}
	return flag;
}

bool monotonic(vector<int> &v){
	if(increasing(v) || decreasing(v))
		return true;
	else
		return false;
}
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	cout<<monotonic(v)<<endl;
}
