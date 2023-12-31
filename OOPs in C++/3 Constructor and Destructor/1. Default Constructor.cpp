#include<iostream>
using namespace std;
class Complex{
	int i,r;
	public:
	Complex();     //construction declaration
		void PrintData(void){
			cout<<"the Complex no. is "<<r<<"+ i"<<i<<endl;
		}
	/*	void set_data(void){
			cin>>r;
			cin>>i;
		}*/
};
Complex::Complex(){
	r=10;
	i=5;
	cout<<"H"<<endl;
}
int main(){
	Complex C1;
	//C1.set_data();
	C1.PrintData();
	C1.PrintData();
}
