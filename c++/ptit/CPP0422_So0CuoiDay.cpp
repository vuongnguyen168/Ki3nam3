#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		vector<long>a;
		vector<long>b;
		vector<long>c;
		for(long i=0;i<n;i++){
			long x;
			cin>>x;
			a.push_back(x);
		}
		for(auto x:a){
			if(x!=0){
				b.push_back(x);
			}
			else c.push_back(x);
		}
		for(auto x:b){
			cout<<x<<" ";
		}
		for(auto x:c){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
//2
//7
//1  2 0  0  0  3  6
//6
//0  1  0  2  0  3
