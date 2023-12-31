#include<iostream>
#include<string>
using namespace std;
int main(){
	string ab="Arshvir";
	cout<<ab[1]<<endl;
	cout<<ab[0]<<endl;
	for(int i=0;i<=7;++i){
		cout<<i<<"="<<ab[i]<<endl;
	}
	int x,y,z;
	cout<<"x"<<endl;
	cin>>x;
	cout<<"y"<<endl;
	cin>>y;
	cout<<"z"<<endl;
	cin>>z;
	z=x+y;
	cout<<z;
	if(x+y==z){
		ab[1] ='N';
cout<<ab;
			}
			else{
				ab[5];
				cout<<ab[5];
			}
	return 0;
}
