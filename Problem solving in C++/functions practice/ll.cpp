#include<iostream>
using namespace std;
void show();
class complex{
	public:
	float real;
	float img;
};
void get(float x,float y){
	 float real=x;
	 float img=y;
}
void show(float real, float img){
	cout<<"real = "<<real;
	cout<<endl<<"imaginary = "<<img;
}
void sum(complex obj1, complex obj2){
float real=obj1.real+obj2.real;
float img=obj1.img+obj2.img;
}
complex subtract(complex obj1, complex obj2){
	complex temp;
	temp.real=obj1.real-obj2.real;
	temp.img=obj1.img-obj2.img;
	return temp;
	
}
int main(){
	complex obj1,obj2,obj3;
	
     obj1.get(10,20);
	 obj2.get(20,30);
	 obj3.sum(obj1, obj2);
	 obj3.show();
	 obj2.subtract(obj1,obj2);
     obj3.show();
	 return 0;
}
