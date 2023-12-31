#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"enter the range:";
	cin>>n;
	for(i=0;i<=n;i++){
		if(i==20){
			break;
		}
		cout<<i<<endl;
	}
	return 0;
}
