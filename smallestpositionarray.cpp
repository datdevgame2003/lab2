#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Nhap kich thuoc cua mang: "<<endl;
	cin>>n;
	if(n<= 0){
		cout<<"Sai kich thuoc mang"<<endl;
	}
	int a[n];
	cout<<"Nhap cac phan tu cua mang: "<<endl;
	for(int i = 0; i<n; ++i){
		cout<<"a["<<i<<"]"<<endl;
		cin>>a[i];
	}
	int minNumber = a[0];
	int position = 0;
	for(int i = 1; i<n; ++i){
		if(a[i] < minNumber){
			minNumber = a[i];
			position = i;
		}
	}
	cout<<"So nho nhat cua mang: "<<minNumber<<endl;
	cout<<"Vi tri cua no la: "<<position;
}
