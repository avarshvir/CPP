#include<iostream>
using namespace std;
class base1{
	int data1;
	public:
		base1(){
		}
		base1(int d1){
			data1=d1;
			cout<<"base 1 constructor invoked "<<endl;
		}
		void base1_data(){
			cout<<"base 1 data = "<<data1<<endl;
		}
};
class base2{
	int data2;
	public:
		base2(){
		}
		base2(int d2){
			data2=d2;
			cout<<"base 2 constructor invoked "<<endl;
		}
		void base2_data(){
			cout<<"base 2 data = "<<data2<<endl;
		}
};
class derived:public base1, public base2{
	int data3;
	public:
		derived(){
		}
		derived(int d1,int d2, int d3):base1(d1),base2(d2){
			data3=d3;
			cout<<"derived constructor invoked "<<endl;
		}
		void derived_data(){
			cout<<"derived data = "<<data3<<endl;
		}
};
int main(){
	derived t;
	t=derived(1,2,3);
t.base1_data();
derived t1(4,5,6);
t1.base1_data();
t1.base2_data();
t1.derived_data();
}
