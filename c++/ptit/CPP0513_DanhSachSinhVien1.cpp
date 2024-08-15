#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string name,classs,dob;
	double gpa;
};
string check(string s){
	stringstream ss(s);
	string tmp;
	vector<string>a;
	while(getline(ss,tmp,'/')){
		a.push_back(tmp);
	}
	for(auto &x:a){
		if(stoi(x)<10) x="0"+x;
	}
	return a[0]+"/"+a[1]+"/"+a[2];
}
void nhap(struct SinhVien a[],int n){
	cin.ignore();
	for(long i=0;i<n;i++){
		getline(cin,a[i].name);
		getline(cin,a[i].classs);
		getline(cin,a[i].dob);
		cin>>a[i].gpa;
		cin.ignore();
	}
}
void in(SinhVien a[],int n){
	for(int i=0;i<n;i++){
		if(i<9) cout<<"B20DCCN00"<<i+1<<" ";
		else cout<<"B20DCCN0"<<i+1<<" ";
		cout<<a[i].name<<" "<<a[i].classs<<" "<<check(a[i].dob)<<" "<<fixed<<setprecision(2)<<a[i].gpa;
		cout<<endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
//2
//Nguyen Van An
//D20CQCN01-B
//2/12/2002
//3.19
//Nguyen Van An
//D20CQCN01-B
//2/12/2002
//3.19
