#include<iostream>
using namespace std;
class Number{
	int a;
	public:
		Number(){}
		Number(int num){
			a=num;
		}
		Number(Number &ob){
		cout<<"Copy Constructor"<<endl;
			a=ob.a;
		}
		void display(void){
			cout<<"The Number is "<<a<<endl;
		}
};
int main(){
	Number n1,n2,n3(10),n4;
	n1.display();             //blank constructor invoked
	n1=n2;
	n2.display();
	n3.display();
	int x;
	cout<<"enter x "<<endl;
	cin>>x;
	n4=Number(x);                  //parameterized constructor invoked                
	n4.display();
	Number n5=n3;                     //copy constructor invoked
	n5.display();
}
