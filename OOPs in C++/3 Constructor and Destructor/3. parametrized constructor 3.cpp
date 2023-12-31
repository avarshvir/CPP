// parametrized constructor
#include<iostream>
using namespace std;
class Complex{
	private:
		int r,i;
		public:
			Complex(int, int);
		//Complex Sum(Complex,Complex);
			void show(void){
				cout<<r<<" + i"<<i<<endl;
			}
};
Complex::Complex(int a,int b){
	r=a;
	i=b;
}
/*Complex::Complex Sum(Complex o1, Complex o2){
	Complex temp;
	temp.r=o1.r+o2.r;
	temp.i=o1.i+o2.i;
}*/
int main(){
	Complex a(20,40);
	Complex b=Complex(20,50);
	a.show();
	b.show();
}

