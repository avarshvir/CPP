#include<iostream>
using namespace std;
class o2;
class o1{
	public :
		int x;
		o1(int b){
			x=b;
		}
		friend o2;
};
class o2{
	int z,a;
	public:
		o2(int y){
			a=y;
		}
		void add(o1 ob1,o2 ob2){
			z=ob1.x + ob2.a;
		}
		void show(){
			cout<<"the sum of two no. is "<<z;
		}
};
int main(){
	o1 ob1(20);
	o2 ob2(40);
	ob2.add(ob1,ob2);
	ob2.show();
	return 0;
}
