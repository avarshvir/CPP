#include<iostream>
using namespace std;
int main(){
	int rate[]={300,450,520,590};
	
		cout<<"****Riley Residence Hall Charges****"<<endl;
	int m;
	cout<<endl;
	cout<<"Enter the no. of meal: ";
	cin>>m;
	if(m==0){
		cout<<"no meal : "<<rate[0]<<endl;
		int sem;
		cout<<"Enter months: ";
		cin>>sem;
		cout<<"total = "<<sem*rate[0];
	}
	else if(m==1){
		cout<<"for one meal : "<<rate[1]<<endl;
		int sem;
		cout<<"Enter months: ";
		cin>>sem;
		cout<<"total = "<<sem*rate[1];
	}
	else if (m==2){
		cout<<"two meal : "<<rate[2]<<endl;
		int sem;
		cout<<"Enter months: ";
		cin>>sem;
		cout<<"total = "<<sem*rate[2];
	}
	else if(m==3){
		cout<<"three meal : "<<rate[3]<<endl;
		int sem;
		cout<<"Enter months: ";
		cin>>sem;
		cout<<"total = "<<sem*rate[3];
	}
	else{
		cout<<"invalid";
	}
	
}
