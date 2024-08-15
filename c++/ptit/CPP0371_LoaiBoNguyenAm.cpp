#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	string s1=".";
	for(long i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
		if(s[i]!='a' && s[i]!='e' && s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y'){
			s1=s1+s[i]+".";
		}	
	}
	s1.erase(s1.size()-1);
	cout<<s1<<endl;
}
