#include<iostream>
using namespace std;
class Base{
	public:
		int a=5;
		virtual void display(){
			cout<<"the value of a is "<<a<<endl;
		}
};
class Derived:public Base{
	public:
		int b=4;
		void display(){
			cout<<"the value of a is "<<a<<endl;
			cout<<"the value of b is "<<b<<endl;
		}
};
int main(){
	Base *b_ptr;
	Base b_ob;
	Derived d_ob;
	b_ptr=&d_ob;
	b_ptr->display();
	b_ptr=&b_ob;
	b_ptr->display();
}
