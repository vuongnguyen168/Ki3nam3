#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while (t--) {
		long n;
		cin>>n;
		set<long>se;
		vector<long>v;
		for(long i=0;i<n;i++){
			long x;
			cin>>x;
			v.push_back(x);
		}
		for(auto x:v){
			while(x!=0){
				long d=x%10;
				se.insert(d);
				x=x/10;
			}
		}
		for(auto x:se){
			cout<<x<<" ";
		}
		cout<<endl;
		
    }
}


