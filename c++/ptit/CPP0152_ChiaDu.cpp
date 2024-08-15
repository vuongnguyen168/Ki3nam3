#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		long a,m;
		cin>>a>>m;
		bool check=false;
		for (long i=0;i<=m-1;i++){
			if(a*i%m==1){
				check=true;
				cout<<i<<endl;
				break;
			}
			
		}
		if(check==false){
			cout<<"-1"<<endl;
		}
		
	}
}
