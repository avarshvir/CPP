#include<iostream>
using namespace std;
class Complex{
	private:
		int r,i;
		char c;
		public:
			Complex(int, int, char); //parametrized Constructor declaration
			void show(void){
				cout<<r<<" + "<<i<<"i"<<" + "<<c<<endl;
			}
};
Complex::Complex(int a,int b,char k){
	r=a;
	i=b;
	c=k;
}
int main(){
	//implict call
	Complex a(10,20,'A');
	//explict call
	Complex b=Complex(30,40,'B');
    a.show();
    b.show();

}
