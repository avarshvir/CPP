#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int flag=0;
	for(int i=1;i<=n;i++){
		if(n%i==0)
		flag++;
	}
	if(flag==2){
		cout<<"no. is prime"<<endl;
	}
	else{
		cout<<"no. is not prime"<<endl;
	}
	
	return 0;
}
