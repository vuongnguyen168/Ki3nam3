#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string name,gen,dob,add,num,date;
};
void nhap(struct NhanVien &a){
	getline(cin,a.name);
	getline(cin,a.gen);
	getline(cin,a.dob);
	getline(cin,a.add);
	getline(cin,a.num);
	getline(cin,a.date);
}
void in(struct NhanVien a){
	cout<<"00001 ";
	cout<<a.name<<" "<<a.gen<<" "<<a.dob<<" "<<a.add<<" "<<a.num<<" "<<a.date<<endl;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
//Nguyen Van Hoa
//Nam
//22/11/1982
//Mo Lao-Ha Dong-Ha Noi
//8333123456
//31/12/2013
