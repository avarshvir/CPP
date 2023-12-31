#include<iostream>
using namespace std;
class A{
	protected:
		int a;
		public:
			void input_A(){
				cout<<"Enter the value of A : ";
				cin>>a;
			}
};
class B: virtual public A{
	protected:
		int b;
		public:
			void input(){
				cout<<"Enter the value of B : ";
				cin>>b;
			}
		    /*void display_B(){
		    	cout<<"The value of B is "<<b<<endl;
			}*/
};
class C:virtual public A{
	protected:
		int c;
		public:
			void input(){
				cout<<"Enter the value of C : ";
				cin>>c;
			}
		    /*void display_C(){
		    	cout<<"The value of C is "<<c<<endl;
			}*/
};
class D:public B, public C{
	int d;
	public:
		void input_D(){
				cout<<"Enter the value of D : ";
				cin>>d;
			}
		    void display_D(){
		    	cout<<"The value of A is "<<a<<endl;
				cout<<"The value of B is "<<b<<endl;
			    cout<<"The value of C is "<<c<<endl;       
				cout<<"The value of D is "<<d<<endl;
			}
			
};
int main(){
	D d1;
	d1.input_A();
	d1.B::input();                   //Syntax
	d1.C::input();             //object_name.class_name::function_name;
	d1.input_D();
	d1.display_D();
}
