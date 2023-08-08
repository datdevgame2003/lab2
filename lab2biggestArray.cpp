#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter number n: "<<endl;
	cin>>n;
	if(n<= 0){
		cout<<"Error number!"<<endl;
	}
	int a[n];
	cout<<"Enter number of array: "<<endl;
	for(int i = 0; i<n; i++){
		cout<<"a["<<i<<"]"<<"="<<endl;
		cin>>a[i];
	}
	int maxNumber = a[0];
	for(int i = 1; i<n; i++){
		if(a[i]> maxNumber){
			maxNumber = a[i];
		}
	}
	cout<<"The biggest number in that array: "<<maxNumber<<endl;
}
