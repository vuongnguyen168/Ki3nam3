#include<bits/stdc++.h>
using namespace std;
bool check(long n){
	if(n<2) return false;
	for(long i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	long t;
	cin>>t;
	while(t--){
		long l,r;
		cin>>l>>r;
		vector<long>a;
		for(long i=l;i<=r;i++){
			if(check(i)) a.push_back(i);
		}
		cout<<a.size()<<endl;

	}	
}
//2
//7
//1 4 3 9 10 13 7
//9
//0 2 8 5 2 1 4 13 23


