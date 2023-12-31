// Pointer to derived 
#include<iostream>
using namespace std;
class base{
	protected:
		int a;
		public:
			void set_base(int x){
				a=x;
			}
			void display(){
				cout<<"the value of a is "<<a<<endl;
			}
};
class derived: public base{
		int b;
		public:
			void set_derived(int y){
				b=y;
			}
			void display(){
				cout<<"the value of a is "<<a<<endl;
				cout<<"the value of b is "<<b<<endl;
			}
};
int main(){
	base *bs_ptr;
	base bs_ob;
	derived dr_ob;
	bs_ptr=&dr_ob;               //pointing base class pointer to derived class 
	bs_ptr->set_base(4);
	bs_ptr->display();
	//bs_ptr->set_derived(5)     will throw an error
	//bs_ptr->display();
	bs_ptr->set_base(40);
	bs_ptr->display();
	derived *dr_ptr;
	dr_ptr=&dr_ob;
	dr_ptr->set_base(400);
//	dr_ptr->display();
	dr_ptr->set_derived(50);
	dr_ptr->display();
	}
	
