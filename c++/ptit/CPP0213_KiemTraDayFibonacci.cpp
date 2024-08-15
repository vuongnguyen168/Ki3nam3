#include<bits/stdc++.h>
using namespace std;
long fibo(long n){
	vector<long>fi(n+5);
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
		vector<long>b;
		for(long i=0;i<n;i++){
			long x;
			cin>>x;
			a.push_back(x);
		}
		for(long i=0;i<=99;i++){
			b.push_back(fibo(i));
//			cout<<fibo(i)<<endl;
		}
//		for(auto x:b){
//			cout<<x<<" ";
//		}
//		cout<<endl;
		
		for(auto x:a){
			if(find(b.begin(),b.end(),x)!=b.end()){
				cout<<x<<" ";
			}
		}
		cout<<endl;
	}	
}
//2
//7
//1 4 3 9 10 13 7
//9
//0 2 8 5 2 1 4 13 23



