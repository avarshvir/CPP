#include<iostream>
using namespace std;
class base{
	int data;
	public:
		base(){
		}
		base(int d){
			data=d;
			cout<<"base class constructor "<<endl;
		}
		void base_data(){
			cout<<"base data = "<<data<<endl;
		}
};
class derived:public base{
	int data1;
	public:
		derived(int d,int d2):base(d){
			data1=d2;
			cout<<"derived class constructor "<<endl;
		}
		void derived_data(){
			cout<<"derived data = "<<data1<<endl;
		}
};
int main(){
	derived d1(20,10);
	d1.base_data();
	d1.derived_data();
}
