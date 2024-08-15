#include<bits/stdc++.h>
using namespace std;
bool nt(long n){
	if (n<2) return false;
	for(long i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
bool check(long n){
	long x=sqrt(n);
	if(nt(x)&&x*x==n) return true;
	return false;
}
int main(){
	long t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		long cnt=0;
		for(long i=1;i<=n;i++){
			if(check(i)){
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}
