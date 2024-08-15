#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long tu,mau;
};
void nhap(PhanSo &a){
	cin>>a.tu>>a.mau;
}
PhanSo tong(PhanSo p,PhanSo q){
	PhanSo t;
	t.tu=(p.tu*q.mau+q.tu*p.mau);
	t.mau=(p.mau*q.mau);
	long x=__gcd(t.tu,t.mau);
	t.tu=t.tu/x;
	t.mau=t.mau/x;
	return t;
}
void in(PhanSo t){
	cout<<t.tu<<"/"<<t.mau<<endl;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
