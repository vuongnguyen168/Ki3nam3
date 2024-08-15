#include<bits/stdc++.h>
using namespace std;
int main(){
	long n;
	cin>>n;
	set<long>a;
	for(long i=0;i<n;i++){
		long x;
		cin>>x;
		a.insert(x);
	}
	for(auto x: a){
		cout<<x<<" ";
	}
	cout<<endl;
}
//3
//1 1 0
//1 1 1
//1 0 0
//2
//1 0 0
//0 1 1

