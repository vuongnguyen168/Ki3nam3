#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		vector<long>a;
		map<long,long>m;
		for(long i=0;i<n;i++){
			long x;
			cin>>x;
			a.push_back(x);
			m[x]++;
		}
		sort(a.begin(),a.end());
		long cnt=0;
		for(long i=a[0];i<=a[n-1];i++){
			if(m[i]==0){
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	
}
