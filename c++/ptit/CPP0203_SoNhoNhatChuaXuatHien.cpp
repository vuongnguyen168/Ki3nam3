#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while (t--){
		long n;
		cin>>n;
		long a[n];
		map<long,long>m;
		for (long i=0;i<n;i++){
			cin>>a[i];
			m[a[i]]++;
		}
		for (long i=1;i<=n+1;i++){
			if(m[i]==0){
				cout<<i<<endl;
				break;
			}
		}
	}
}
//2
//5
//1 2 3 4 5
//5
//0 -10 1 3 -20


