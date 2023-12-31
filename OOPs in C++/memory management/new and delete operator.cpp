#include<iostream>
using namespace std;
int main(){
	int a=4;
	int *ptr=&a;
	cout<<"The value of a is "<<*ptr<<endl;
	cout<<"The address of a is "<<ptr<<endl;
	cout<<"The address of a is "<<&a<<endl;
	cout<<"The value of a is "<<*(ptr)<<endl;
	
	int *p=new int(5);
	cout<<"The value at address p "<<p<<" is "<<*p<<endl;
	
	float *arr =new float[4];
	for(int i=0;i<4;i++){
		cin>>arr[i];
	}
	delete[] arr;
	for(int i=0;i<4;i++){
		cout<<"The value of arr ["<<i<<"]"<<" is "<<arr[i]<<endl;
	}
	cout<<"character"<<endl;
	char *cr=new char[5];
	for(int i=0;i<5;i++){
		cin>>cr[i];
	}
	delete[] cr;
	for(int i=0;i<5;i++){
		cout<<"The value of cr ["<<i<<"]"<<" is "<<cr[i]<<endl;
	}

}
