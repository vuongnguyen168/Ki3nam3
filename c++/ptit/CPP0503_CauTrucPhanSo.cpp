#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long tu,mau;
};
void nhap(PhanSo &a){
	cin>>a.tu>>a.mau;
}
void rutgon(PhanSo &a){
	long gcd=__gcd(a.tu,a.mau);
	a.tu=a.tu/gcd;
	a.mau=a.mau/gcd;
}
void in(PhanSo a){
	cout<<a.tu<<"/"<<a.mau<<endl;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
