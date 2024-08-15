#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	cin.ignore();
	while(t--){
		vector<long>a;
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tmp="";
		while(ss>>tmp){
			a.push_back(stoi(tmp));
		}
		long chan=0,le=0;
		bool check=false;
		for(auto x:a){
			if(x%2==0){
				chan+=1;
			}
			else le+=1;
		}
		if(chan>le&&a.size()%2==0) check=true;
		else if(le>chan&&a.size()%2!=0) check=true;
		if(check==true) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
//2
//11 22 33 44 55 66 77
//23 34 45 56 67 78 89 90 121 131 141 151 161 171

