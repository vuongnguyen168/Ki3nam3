#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		vector<long>a;
		for(long i=0;i<n;i++){
			long x;
			cin>>x;
			a.push_back(x);
		}
		long ans=0;
		bool check=false;
		for(long i=0;i<n-1;i++){
			for(long j=i+1;j<n;j++){
				if(a[j]>a[i] && a[j]-a[i]>ans){
					check=true;
					ans=a[j]-a[i];
				}
			}
		}
		if(check==true) cout<<ans<<endl;
		else cout<<"-1"<<endl;
	}	
}
//2
//7
//1 4 3 9 10 13 7
//9
//0 2 8 5 2 1 4 13 23


