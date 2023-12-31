#include<iostream>
using namespace std;
class c2;
class c1{
	int a;
	friend void swap(c1 &, c2 &);
	public:
		void inset(int value){
			a=value;
		}
		void display(void){
			cout<<"the value of a "<<a<<endl;
		}
};
class c2{
	int b;
	friend void swap(c1 &, c2 &);
	public:
		void inset(int value){
			b=value;
		}
		void display(void){
			cout<<"the value of b "<<b<<endl;
		}
};
void swap(c1 &o1, c2 &o2){
	int temp;
	temp=o1.a;
	o1.a=o2.b;
	o2.b=temp;
}
int main(){
	c1 a1;
	a1.inset(88);
	a1.display();
	c2 b1;
	b1.inset(77);
	b1.display();
	swap(a1,b1);
	cout<<"after swapping a is ";
	a1.display();
	cout<<"after swapping b is ";
	b1.display();
	
}
