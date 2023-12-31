#include<iostream>
using namespace std;
class complex{
	private:
		int real,img;
		public:
			void setData(int r,int i){
				real=r;
				img=i;
			}
			void getData(){
				cout<<"the complex no. is "<<real<<" + "<<img<<"i"<<endl;
			}
};
int main(){
	complex *ptr;
	ptr=new complex;
	ptr->setData(1,4);
	ptr->getData(); 
	//array of object
	complex *ptr1=new complex[4];
	ptr1->setData(1,54);
	ptr1->getData();
}
