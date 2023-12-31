#include<iostream>
using namespace std;
class bank{
	int principal;
	int year;
	float interestRate;
	float returnValue;
	public:
	bank(){}
		bank(int p,int y,float r);
		bank(int p,int y,int r);
		void show(void);
        ~bank(){
	      	cout<<"destroyed"<<endl;
		  }
};
bank::bank(int p,int y, float r){
	principal=p;
	year=y;
	interestRate=r;
	returnValue=principal;
	for(int i=0;i<y;i++){
		returnValue=returnValue*(1+interestRate);
	}
}
bank::bank(int p,int y,int r){
	principal=p;
	year=y;
	interestRate=float(r)/100;
	returnValue=principal;
	for(int i=0;i<y;i++){
		returnValue=returnValue*(1+interestRate);
	}
}
void bank::show(){
	cout<<endl<<"Principal Amount was"<<principal
    <<". Return value after "<<year
    <<" Years is "<<returnValue<<endl;
}
int main(){
	bank b1,b2;
	int p,y;
	float r;
	int R;
	cout<<"Enter the value of p, y, and r"<<endl;
	cin>>p>>y>>r;
	b1=bank(p,y,r);
	b1.show();
	
    cout<<"Enter the value of p, y, and R"<<endl;
	cin>>p>>y>>R;
	b2=bank(p,y,R);
	b2.show();
	return 0;
}

