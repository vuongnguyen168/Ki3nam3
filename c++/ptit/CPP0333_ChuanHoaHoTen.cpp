#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string tmp;
	vector<string>a;
	while(ss>>tmp){
		a.push_back(tmp);
	}
	for(long i=0;i<a.size();i++){
		cout<<char(toupper(a[i][0]));
		for(long j=1;j<a[i].size();j++){
			cout<<char(tolower(a[i][j]));
		}
		if(i==a.size()-2) cout<<",";
		cout<<" ";
	}
}
