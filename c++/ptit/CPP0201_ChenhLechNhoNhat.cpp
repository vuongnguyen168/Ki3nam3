#include<bits/stdc++.h>
using namespace std;
//long a[10001];
int main(){
	long t;
	cin>>t;
	while (t--){
		
		long min=LONG_MAX;
		long n;
		cin>>n;
		long a[n];
		for(long i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(long i=0;i<n-1;i++){
			long tmp=abs(a[i+1]-a[i]);
			if(tmp<min){
				min=tmp;
			}
		}
		cout<<min<<endl;
	}
}
//3
//6
//1 5 3 19 18 25
//4
//30 5 20 9
//7
//1 19 2 31 38 25 100
