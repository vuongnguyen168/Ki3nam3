#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin >>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string t="";
		long cnt=0;
		
		while(ss>>t){
			cnt++;
		}
		cout<<cnt<<endl;
	}
}
