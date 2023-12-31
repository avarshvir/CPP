#include<iostream>
using namespace std;
template<class T>
float add(T a, T b){
	cout<<a+b<<endl;
	return a+b;
}
int main(){
	add(5.5,4.6);
}
