
#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string name,classs,dob;
	double gpa;
};
void nhap(struct SinhVien &a){
	getline(cin,a.name);
	getline(cin,a.classs);
	getline(cin,a.dob);
	cin>>a.gpa;
}
string check(string s){
	vector<string>a;
	stringstream ss(s);
	string tmp;
	while(getline(ss,tmp,'/')){
		a.push_back(tmp);
	}
	if(stoi(a[0])<10) a[0]="0"+a[0];
	if(stoi(a[1])<10) a[1]="0"+a[1];
	return a[0]+"/"+a[1]+"/"+a[2];
}
void in(struct SinhVien a){
	cout<<"B20DCCN001 ";
	cout<<a.name<<" "<<a.classs<<" "<<check(a.dob)<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
//Nguyen Hoa Binh
//D20CQCN04-B
//2/2/2002
//2
