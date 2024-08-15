#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		stringstream(ss);
		string word="";
		vector<string>a;
		while(ss>>word){
			a.push_back(word);
		}
		reverse(a.begin(),a.end());
		for(auto x: a){
			cout<<x<<" ";
		}
		cout<<endl;
	}
	
}


