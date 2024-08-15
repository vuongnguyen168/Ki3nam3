#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string name,gen,dob,add,num,date;
};
long cnt=0;
void nhap(struct NhanVien &a){
	if (cnt==0) cin.ignore();
	cnt++;
	getline(cin,a.name);
	getline(cin,a.gen);
	getline(cin,a.dob);
	getline(cin,a.add);
//	cin>>a.num>>a.date;
	getline(cin,a.num);
	getline(cin,a.date);
}
void inds(struct NhanVien a[],long n){
	for(long i=0;i<n;i++){
		if(i<9) cout<<"0000";
		else cout<<"000";
		cout<<i+1<<" "<<a[i].name<<" "<<a[i].gen<<" "<<a[i].dob<<" "<<a[i].add<<" "<<a[i].num<<" "<<a[i].date<<endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
//3
//Nguyen Van A
//Nam
//10/22/1982
//Mo Lao-Ha Dong-Ha Noi
//8333012345
//31/12/2013
//Ly Thi B
//Nu
//10/15/1988
//Mo Lao-Ha Dong-Ha Noi
//8333012346
//22/08/2011
//Hoang Thi C
//Nu
//04/02/1981
//Mo Lao-Ha Dong-Ha Noi
//8333012347
//22/08/2011
