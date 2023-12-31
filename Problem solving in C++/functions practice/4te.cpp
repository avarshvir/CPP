#include<iostream>
using namespace std;
class Rectangle{
	private:
		int A1,A2;
		public:
			void get_data(int l1, int b1, int l2, int b2){
				A1=l1*b1;
				A2=l2*b2;
			}
			void area(){
	return A1;
	return A2;
}
			
};
int main(){
	Rectangle R1,R2;
	R1.get_data(4,5);
	R2.get_data(5,8);
				cout<<"area of rectangle 1: "<<R1.area()<<endl;
				cout<<"area of rectangle 2: "<<R2.area()<<endl;
			}
