#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"I am constructor "<<endl;
		}
};
class B:public A{
	public:
		B(){
			cout<<"I am constructor B "<<endl;
		}
};
int main(){
	B obj;
}
