#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string id;
	string name,gen,dob,add,num,date;
	string year,month,day;
};
long x=1;
void nhap(struct NhanVien &a){
	if (x==1) cin.ignore();
	if(x<10) a.id="0000"+to_string(x);
	else a.id="000"+to_string(x);
	x++;
	getline(cin,a.name);
	getline(cin,a.gen);
	getline(cin,a.dob);
	getline(cin,a.add);
	getline(cin,a.num);
	getline(cin,a.date);
	stringstream ss(a.dob);
	string tmp;
	vector<string>b;
	while(getline(ss,tmp,'/')){
		b.push_back(tmp);
	}
	a.year=b[2];
	a.month=b[1];
	a.day=b[0];
}
bool cmp(NhanVien a, NhanVien b){
	if(a.year==b.year){
		if(a.day==b.day)return a.month<b.month;
		else return a.day<b.day;
	}
//	else if(a.year==b.year && a.month==b.month){
//		return a.day<b.day;
//	}
	else return a.year<b.year;
}
void sapxep(struct NhanVien ds[],long n){
	sort(ds,ds+n,cmp);
}
void inds(struct NhanVien ds[],long n){
	for(long i=0;i<n;i++){
		cout<<ds[i].id<<" "<<ds[i].name<<" "<<ds[i].gen<<" ";
		cout<<ds[i].dob<<" "<<ds[i].add<<" ";
		cout<<ds[i].num<<" "<<ds[i].date<<" ";
		cout<<endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
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
