#include<bits/stdc++.h>
using namespace std;
bool check(long n){
	if (n<2) return false;
	for (long i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	long t;
	cin >> t;
	while(t--){
		long n;
		cin >>n;
		for(long i=2;i<=n/2;i++){
			if(check(i) && check(n-i)){
				cout<<i<<" "<<n-i<<endl;
				break;
			} 
		}
//		cout<<endl;
	}
	
}

