#include<bits/stdc++.h>
using namespace std;
long checkfibo(long n){
	long fi[n+5];
	fi[0]=0;
	fi[1]=1;
	for(long i=2;i<=n;i++){
		fi[i]=fi[i-1]+fi[i-2];
	}
	return fi[n];
}
int main(){
	long t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;	
		vector<long>a;
		for(long i=0;i<=100;i++){
			a.push_back(checkfibo(i));
		}
		if(find(a.begin(),a.end(),n) !=a.end()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
}

