#include<bits/stdc++.h>
using namespace std;
bool nt(long n){
	if(n<2){
		return false;
	}
	for(long i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
long check(long n){
	if(n==1){
		return 1;
	}
	if(n%2==0){
		return 2;
	}
	if(nt(n)){
		return n;
	}
	for(long i=2;i<=sqrt(n);i++){
		if(n%i==0&&nt(i)){
			return i;
		}	
	}
	return n;
}
int main(){
	long t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		for(long i=1;i<=n;i++){
			cout<<(check(i))<<" ";
		}
		cout<<endl;
	}
}
