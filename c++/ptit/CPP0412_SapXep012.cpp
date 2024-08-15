#include <bits/stdc++.h>
#include<string>
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
		for(auto x : v){
			cout<<x<<" ";
		}
		cout<<endl;
    }
}
//4
//123456787654321
//86442824468
//8006000444422220000222244440006008
//235365789787654324567856578654356786556

