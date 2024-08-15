#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		vector<long>dd(1000001,0);
		for(long i=0;i<s.size();i++){
			dd[s[i]]++;
		}
		for(auto x : s){
			if(dd[x]!=0){
				cout<<x<<dd[x];
				dd[x]=0;
			}
		}
		cout<<endl;
	}
}


