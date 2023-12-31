#include<iostream>
using namespace std;
class A{
	protected:
		int a;
		public:
		void Set(int x){
				a=x;
			}
		virtual	void display(){
				cout<<"The value of base class A is "<<a<<endl;
			}
};
class B:public A{
	protected:
		int b;
		public:
			void Set(int y){
				b=y;
			}
			void display(){
			    cout<<"The value of base class A is "<<a<<endl;
				cout<<"The value of base class B is "<<b<<endl;
			}
};
int main(){
	A *ptr_a;
	A a_ob;
//	ptr_a=&a_ob;
//	ptr_a->Set_A(20);
//	ptr_a->display();
	B b_ob;
	ptr_a=&b_ob;
    ptr_a->Set(20);
    ptr_a->display();
}
