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
		for(long j=0;j<n;j++){
				cout<<a[0][j]<<" ";
			}
		cout<<endl;
		for(long i=1;i<n-1;i++){
			for(long j=0;j<n;j++){
				if(j==0||j==n-1){
					cout<<a[i][j]<<" ";
				}
				else cout<<"  ";
			}
			cout<<endl;
		}
		for(long j=0;j<n;j++){
				cout<<a[n-1][j]<<" ";
			}
		cout<<endl;
	}
	
}



