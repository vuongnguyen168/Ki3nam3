#include <bits/stdc++.h>
#include<string>
using namespace std;

bool check(string s){
	for(long i=0;i<s.size();i++){
		long x=s[i]-'0';
		if (x%2==0) continue;
		else return false;
	}
	
	return true;
}
int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s,s1;
        getline(cin,s);
        for(auto x: s){
        	if(count(s.begin(),s.end(),x)==1){
        		cout<<x;
			}
			
		}
		cout<<endl;
    }
}
//4
//123456787654321
//86442824468
//8006000444422220000222244440006008
//235365789787654324567856578654356786556

