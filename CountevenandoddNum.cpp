#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Nhap kich thuoc mang: "<<endl;
	cin>>n;
	if(n<= 0){
		cout<<"Loi kich thuoc mang!"<<endl;
		return 1;
	}
	int a[n];
	cout<<"Nhap cac phan tu mang: "<<endl;
	for(int i = 0; i<n; ++i){
		cout<<"a["<< i << "]"<< "="<<endl;
		cin>>a[i];
	}
	int evenNumCount = 0;
	int oddNumCount = 0;
	for(int i = 0; i<n; ++i){
		if(a[i] % 2 == 0){
			evenNumCount++;
		}else{
		oddNumCount++;
	}
}
	cout<<"So luong so chan trong mang: "<< evenNumCount<<endl;
	cout<<"So luong so le trong mang: "<< oddNumCount;
	
	
}
