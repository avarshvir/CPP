#include<iostream>
using namespace std;
class A{
	protected:
	int a;
	public:
		void inputA(){
			cout<<"Enter A"<<endl;
			cin>>a;
		}
};
class B:virtual public A{
	protected:
	int b;
	public:
		void inputB(){
			cout<<"Enter B"<<endl;
			cin>>b;
		}
};
class C:virtual public A{
	protected:
	int c;
	public:
		void inputC(){
			cout<<"Enter C"<<endl;
			cin>>c;
		}
};
class D:public B,public C{
	protected:
	int d;
	public:
		void inputB(){
			cout<<"Enter D"<<endl;
			cin>>d;
		}
		void show(){
			cout<<"The Value of A = "<<a<<endl;
			cout<<"The Value of B = "<<b<<endl;
			cout<<"The Value of C = "<<c<<endl;
			cout<<"The Value of D = "<<d<<endl;
			
		}
};
int main(){
	D d;
	d.inputA();
	d.inputB();
	d.show();
}

