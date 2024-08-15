#include<bits/stdc++.h>
using namespace std;
long a[100001];
int main(){
	a[0]=0;
	a[1]=1;
	long t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		for(long i=2;i<=n;i++){
			a[i]=a[i-1]+a[i-2];
		}
		cout<<a[n]<<endl;
	}

}
