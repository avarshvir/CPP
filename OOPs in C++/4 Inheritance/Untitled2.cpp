#include<iostream>
using namespace std;
class p1{
	protected:
		int x;
		public:
			void setp1(int a){
				x=a;
			}
		int showp1(){
			return x;
		}
			
};
class p2:public p1{
	protected:
	int y;
	public:
		void setp2(int b){
			y=b;
			//setp1(30);
		}
		void show(){
			cout<<showp1()<<" "<<y<<endl;
		}
	
};
int main(){
	p2 o1;
	o1.setp1(10);
	o1.setp2(20);
	o1.show();
}
