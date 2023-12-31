#include<iostream>
using namespace std;
int area(int a);
int area(int a,int b);
int area(int a){
	int z;
	z=a*a;
	return z;
}
int area(int a,int b){
	int z;
	z=a*b;
	return z;
}
int main()
{int a=10;
	area(a);
	cout<<area(a);
}
