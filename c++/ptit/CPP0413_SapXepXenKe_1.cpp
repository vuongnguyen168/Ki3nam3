#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while (t--) {
		long n;
		cin>>n;
		vector<long>v;
		for(long i=0;i<n;i++){
			long x;
			cin>>x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		for(long i=0;i<v.size()/2;i++){
			cout<<v[n-i-1]<<" "<<v[i]<<" ";
		}
		if(v.size()%2!=0){
			cout<<v[v.size()/2];
		}
		cout<<endl;
    }
}


