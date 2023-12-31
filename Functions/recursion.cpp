//            recursion
#include<iostream>
using namespace std;
int fact(int n){
	if(n==1){
		return 1;
	}
	else{
		return (n*fact(n-1));
	}
}
int main(){
	int a=5;
	cout<<fact(a);
	return 0;
}
