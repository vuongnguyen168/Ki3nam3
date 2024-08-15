#include<bits/stdc++.h>
using namespace std;
int main(){
	long n;
	cin>>n;
	long a[n+10][n+10];
	for(long i=0;i<n;i++){
		for(long j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	long cnt=0;
	for(long i=0;i<n;i++){
		long sum0=0,sum1=0;
		for(long j=0;j<3;j++){
			if(a[i][j]==0) sum0++;
			if(a[i][j]==1) sum1++;
		}
		if(sum1>sum0) cnt++;
	}
	cout<<cnt<<endl;
}
//3
//1 1 0
//1 1 1
//1 0 0
//2
//1 0 0
//0 1 1

