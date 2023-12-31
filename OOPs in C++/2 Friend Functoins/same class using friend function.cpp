#include<iostream>
using namespace std;
class complex{
	float real,img;
	friend complex sum(complex, complex);
	public:
		/*void get(void){
			cout<<"enter real no. : ";
			cin>>real;
			cout<<"enter imaginary no. : ";      //input from user
			cin>>img;
			cout<<endl;
		}*/
		void get(float a,float b){
			real=a;
			img=b;
		}
		void display(){
			cout<<"complex no. is "<<real<<" + "<<img<<"i"<<endl;
		}
};
complex sum(complex o1, complex o2){
	complex temp;
	temp.real=o1.real+o2.real;
	temp.img=o1.img+o2.img;
	return temp;
}
int main(){
	complex c1,c2,c3;
	/*c1.get();
	c1.display();             //input from user
	c2.get();
	c2.display();
	c3=sum(c1,c2);
	c3.display();*/
	c1.get(10,90);
	c1.display();
	c2.get(20,100);
	c2.display();
	c3=sum(c1,c2);
	c3.display();
}
