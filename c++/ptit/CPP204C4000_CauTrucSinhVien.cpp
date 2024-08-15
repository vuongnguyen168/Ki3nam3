#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string name,classs,dob;
	double gpa;
};
void nhapThongTinSV(SinhVien &a){
	getline(cin,a.name);
//	getline(cin,a.classs);
//	getline(cin,a.dob);
	cin>>a.classs>>a.dob;
	cin>>a.gpa;
	cin.ignore();
}
string check(string s){
	stringstream ss(s);
	string tmp;
	vector<string> a;
	while(getline(ss,tmp,'/')){
		a.push_back(tmp);
	}
	if(stoi(a[0])<10) a[0]="0"+a[0];
	if(stoi(a[1])<10) a[1]="0"+a[1];
	return a[0]+"/"+a[1]+"/"+a[2];
}
void inThongTinSV(SinhVien a){
	cout<<"N20DCCN001 "<<a.name<<" "<<a.classs<<" "<<check(a.dob)<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
//Nguyen Van A
//D20CQCN01-N
//2/2/2000
//2.5
