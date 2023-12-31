//                    function overloading
#include<iostream>
using namespace std;
int area(int x){
	return x*x;
}
int area(int x,int y){
	return x*y;
}
int main(){
	int a,b;
	a=100;
	b=200;
	cout<<"area of square is : ";
	cout<<area(a)<<" m^2"<<endl;
	cout<<"area of rectangle is : ";
	cout<<area(a,b)<<" m^2"<<endl;
}

