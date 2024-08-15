#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
//		vector<long>a;
		long a[n+5][n+5];
		for(long i=0;i<n;i++){
			for(long j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		for(long i=0;i<n;i++){
			if(i%2!=0){
				for(long j=n-1;j>=0;j--){
					cout<<a[i][j]<<" ";
				}
//				cout<<endl;
			}
			else{
				for(long j=0;j<n;j++){
					cout<<a[i][j]<<" ";
				}
//				cout<<endl;
			}
			
		}
		cout<<endl;
	}
	
}


