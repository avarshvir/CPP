#include<iostream>
using namespace std;
int fact(int n){
	int f=1;
	cout<<"enter the no. to find factorial: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		f*=i;
	}
	return f;
}
int main(){
	int k,n;
	k=fact(n);
	cout<<k;
	
    
}
