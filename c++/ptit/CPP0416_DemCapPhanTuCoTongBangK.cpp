#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while (t--) {
		long n,k;
		cin>>n>>k;
		vector<long>v;
		for(long i=0;i<n;i++){
			long x;
			cin>>x;
			v.push_back(x);
		}
		long cnt=0;
		for(long i=0;i<n;i++){
			for(long j=i+1;j<n;j++){
				if(v[i]+v[j]==k) cnt++;
			}
		}
		cout<<cnt<<endl;
    }
}


