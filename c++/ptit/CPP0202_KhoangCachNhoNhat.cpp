#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while (t--){
		long min= LONG_MAX;
		long n;
		cin>>n;
		long a[n];
		for (long i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(long i=0;i<n-1;i++){
			if(abs(a[i+1]-a[i])<min){
				min = abs(a[i+1]-a[i]);
			}
		}
		cout<<min<<endl;
	}
}
//2
//5
//2 4 5 7 9
//10
//87 32 99 75 56 43 21 10 68 49

