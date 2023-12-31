#include<iostream>
using namespace std;
class point{
	int x,y;
	public:
		point(int,int);
		void show(void){
			cout<<"the points are ("<<x<<","<<y<<")"<<endl;
		}
};
point::point(int a, int b){
 x=a;
 y=b;
}
int main(){
	int p1,p2;
	cout<<"enter points"<<endl;
	cin>>p1>>p2;
	point p(p1,p2);
	p.show();
	return 0;
}
