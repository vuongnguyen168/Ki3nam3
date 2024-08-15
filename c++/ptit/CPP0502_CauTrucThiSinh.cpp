#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string name,dob;
	double m1,m2,m3;
};
void nhap(struct ThiSinh &a){
	getline(cin,a.name);
	getline(cin,a.dob);
	cin>>a.m1>>a.m2>>a.m3;
}
void in(struct ThiSinh a){
	cout<<a.name<<" "<<a.dob<<" ";
	cout<<fixed<<setprecision(1)<<a.m1+a.m2+a.m3<<endl;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
