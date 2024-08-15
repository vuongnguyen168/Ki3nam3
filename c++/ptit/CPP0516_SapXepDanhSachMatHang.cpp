#include<bits/stdc++.h>
using namespace std;
struct MatHang{
	long id;
	string name, group;
	double buy,sale;
	double profit;
};
bool cmp(MatHang a, MatHang b){
	return a.profit>b.profit; 
}
int main(){
	long n;
	cin>>n;
	cin.ignore();
	struct MatHang a[n];
	for(long i=0;i<n;i++){
		getline(cin,a[i].name);
		getline(cin,a[i].group);
		cin>>a[i].buy>>a[i].sale;
		cin.ignore();
		a[i].profit=a[i].sale-a[i].buy;
		a[i].id=i+1;
	}
	sort(a,a+n,cmp);
	for(long i=0;i<n;i++){
		cout<<a[i].id<<" "<<a[i].name<<" "<<a[i].group<<" ";
		cout<<fixed<<setprecision(2)<<a[i].profit<<endl;
	}
}
//3
//May tinh SONY VAIO
//Dien tu
//16400
//17699
//Tu lanh Side by Side
//Dien lanh
//18300
//25999
//Banh Chocopie
//Tieu dung
//27.5
//37
