#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Nhap kich thuoc cua mang: "<<endl;
	cin>>n;
	if(n<= 0){
		cout<<"Sai kich thuoc mang!"<<endl;
	}
	double a[n];
	cout<<"Nhap cac phan tu mang: "<<endl;
	for(int i = 0; i<n; ++i){
		cout<<"a["<< i << "]"<<endl;
		cin>>a[i];
	}
	double x;
	cout<<"Nhap x: "<<endl;
	cin>>x;
	
	int count = 0;
	for(int i = 0; i<n; ++i){
		if(a[i] == x){
			count++;
		}
	}
	cout<<"So "<<x<<" xuat hien "<<count<<" lan";
}
