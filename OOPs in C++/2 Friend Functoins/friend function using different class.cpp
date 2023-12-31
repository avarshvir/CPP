// friend function using different classes
#include<iostream>
using namespace std;
class complex;
class calculator{
	public:
		int add(int a, int b){
			return (a+b);
		}
		int sumR(complex,complex);
		int sumC(complex,complex);
};
class complex{
	float real,img;
/*friend for individual
->	friend int calculator::sumR(complex, complex);
->	friend int calculator::sumC(complex, complex);*/

//making friend entire class
friend class calculator;
	public:
		void get(void);
		void display(){
			cout<<"the real and img part is : "<<real<<" + "<<img<<"i"<<endl;
		}
};
void complex::get(){
	cout<<"enter the real part : ";
	cin>>real;
	cout<<"enter the img part : ";
	cin>>img;
}
int calculator::sumR(complex o1, complex o2){
	return(o1.real+o2.real);
//	return(o1.img+o2.img);
}
int calculator::sumC(complex o1, complex o2){
	return (o1.img+o2.img);
}
int main(){
	complex c1,c2;
	c1.get();
	c1.display();
	c2.get();
	c2.display();
	calculator calc;
	cout<<"the sum is "<<calc.sumR(c1,c2);
    cout<<endl;
    cout<<"the comp sum is "<<calc.sumC(c1,c2);
}

