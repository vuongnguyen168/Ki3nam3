#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		vector<long>a;
		vector<long>dd(1000001,0);
		for(long i=0;i<n;i++){
			long x;
			cin>>x;
			a.push_back(x);
			dd[x]++;
		}
		long cnt=0;
		for(auto x: a){
			if(dd[x]>1){
				cnt+=dd[x];
				dd[x]=0;
			}
		}
		cout<<cnt<<endl;
	}
	
}
//3
//1 1 0
//1 1 1
//1 0 0
//2
//1 0 0
//0 1 1

