#include<iostream>
using namespace std;
class c2;
class c1{
	int data;
	public:
		int setvalue(int value){
			data=value;
		}
		friend void add(c1,c2);
};
class c2{
	int num;
	public:
		int setvalue(int value){
			num=value;
		}
		friend void add(c1,c2);
};
void add(c1 o1, c2 o2){
	cout<<"the sum is "<<o1.data+o2.num;
}
int main(){
	c1 a;
	a.setvalue(6);
	c2 b;
	b.setvalue(12);
	add(a,b);
}
