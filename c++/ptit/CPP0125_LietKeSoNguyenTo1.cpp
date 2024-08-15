#include<bits/stdc++.h>
bool nt(long n){
	if(n<2) return false;
	for(long i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
using namespace std;
int main(){
	long a,b;
	cin>>a>>b;
	if(a>b) swap(a,b);
	for(long i=a;i<=b;i++){
		if(nt(i)) cout<<i<<" ";
	}
	cout<<endl;
}

