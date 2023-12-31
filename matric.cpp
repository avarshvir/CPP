#include<iostream>
using namespace std;
int main(){
	int m1[3][3],m2[3][3],m[3][3];
	cout<<"Enter the element of 1st matrix 3 X 3 : "<<endl;
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cin>>m1[i][j];
	}
	}
	cout<<"your 1st matrix 3 X 3 : "<<endl;
	for(int i=0;i<3;i++){
//		cout<<"-";
	for(int j=0;j<3;j++){
		cout<<m1[i][j]<<" ";
	}
	cout<<endl;
	}
	cout<<"Enter the element of 2nd matrix 3 X 3 : "<<endl;
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cin>>m2[i][j];
	}
	}
	cout<<"your 2nd matrix 3 X 3 : "<<endl;
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<m2[i][j]<<" ";
	}
	cout<<endl;
	}
    cout<<"Matrix Subtraction is "<<endl;
    for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		m[i][j]=m1[i][j]+m2[i][j];
	cout<<m[i][j]<<" ";
	}
	cout<<endl;
	}

}
/*void add(){
	
}*/
