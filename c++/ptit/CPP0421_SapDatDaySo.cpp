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
			se.insert(x);
		}
		for(long i=0;i<n;i++){
			if(se.count(i)!=0){
				cout<<i<<" ";
			}
			else cout<<"-1 ";
		}
		cout<<endl;
		
    }
}


