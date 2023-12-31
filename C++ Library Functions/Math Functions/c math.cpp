#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int x,y,z;
	cout<<"enter value of x:"<<endl;
	cin>>x;
	cout<<"enter value of y:"<<endl;
	cin>>y;
	if(max(x,y)==x)
		cout<<"x is max:"<<x<<endl;
	else 
		cout<<"y is max:"<<y<<endl;
		if(min(x,y)==x)
		cout<<"x is min:"<<x<<endl;
	else
		cout<<"y is min:"<<y<<endl;
	
	return 0;
}
