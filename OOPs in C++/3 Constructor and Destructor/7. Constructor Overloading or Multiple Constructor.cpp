#include<iostream>
using namespace std;
class complex{
	int r,i;
	public:
	//	complex(){}
		complex(){
			r=0;
			i=0;
		}
		complex(int, int);
		complex(int);
		void display(void){
			cout<<"The Complex Number is "<<r<<" + "<<i<<"i"<<endl;
		}
};
complex::complex(int x,int y){
	r=x;
	i=y;
}
complex::complex(int x){
	r=x;
}
int main(){
	complex c1;
	c1.display();
	complex c2(20,10);
	c2.display();
	complex c3(20);
	c3.display();
}
