#include<iostream>
using namespace std;
class complex{
	int real,img;
	public:
		complex(){
		}
		complex(int real,int img){
			this->real=real;
			this->img=img;
		}
		void getData(){
			cout<<"The Complex number is "<<real<<" + "<<img<<"i"<<endl;
		}
};
int main(){
	complex c1;
	c1=complex(1,2);
	c1.getData();
	
}
