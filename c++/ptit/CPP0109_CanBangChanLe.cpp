#include<bits/stdc++.h>
using namespace std;
bool check(long n){
	long le=0,chan=0;
	long x;
	while(n!=0){
		x=n%10;
		if(x%2==0) chan+=1;
		else le+=1;
		n=n/10;
	}
	if (le==chan) return true;
	else return false;
}
int main(){

	long n;
	cin>>n;
	long start=pow(10,n-1);
	long end=start*10-1;
	long cnt=0;
	for(long i=start;i<=end;i++){
		if(check(i)&&cnt!=9){
			cnt++;
			cout<<i<<" ";
		}
		else if(check(i)&&cnt==9){
			cnt=0;
			cout<<i<<" "<<endl;
		}
	}
	cout<<endl;

	
}
//3
//1 1 0
//1 1 1
//1 0 0
//2
//1 0 0
//0 1 1

