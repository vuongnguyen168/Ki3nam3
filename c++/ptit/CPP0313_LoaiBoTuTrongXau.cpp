#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	cin.ignore();
//	vector<string>v;
	set<string>st;
	while(t--){
		string s;
		getline(cin,s);
//		v.push_back(s);
		st.insert(s);
	}
	cout<<st.size()<<endl;
}

//4
//CHUC MUNG NAM MOI
//HAPPY NEW YEAR
//CHUC MUNG TUOI MOI
//CHUC MUNG NAM MOI
