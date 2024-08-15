#include<bits/stdc++.h>
using namespace std;
long gcd(long a,long b){
	while(b!=0){
		long tmp=b;
		b=a%b;	
		a=tmp;
	}
	return a;
}
bool nt(long n){
	if (n<2) return false;
	for(long i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	long t;
	cin>>t;
	while(t--){
		long x;
		cin>>x;
		long cnt=0;
		for(long i=1;i<=x;i++){
			if(gcd(i,x)==1){
				cnt++;
			}
		}
		if(nt(cnt)){
			cout<< 1<<endl;
		}
		else cout<<0<<endl;
		
	}
}
