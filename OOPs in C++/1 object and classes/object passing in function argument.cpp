#include<iostream>
using namespace std;
class complex{
	int a,b;
	public:
		void setdata(int a1,int b1){
			a=a1;
			b=b1;
		}
		void sum(complex o1,complex o2){
			a=o1.a+o2.a;
			b=o1.b+o2.b;
		}
		void show(){
			cout<<"complex no. is "<<a<<"+"<<b<<"i"<<endl;
		}
};
int main(){
	complex c1,c2,c3;
	c1.setdata(2,4);
	c1.show();
	c2.setdata(4,8);
	c2.show();
	c3.sum(c1,c2);
	c3.show();
	
}
