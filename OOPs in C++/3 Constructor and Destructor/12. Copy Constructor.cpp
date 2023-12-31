// copy constructor
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
	Number n1,n2(40),n5;
	n1.display();
	n2.display();
	Number n3(n2);       //copy constructor invoked
	n3.display();
	Number n4=n2;            //copy constructor invoked
	n4.display();
	n5=n2;
	n5.display();           //copy constructor not invoked
}

