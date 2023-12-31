#include<iostream>
#include<math.h>
using namespace std;
class point2;
class point1{
	double x1,x2,y1,y2;
	friend class point2;
	public:
		point1(double a,double b,double c,double d){
			x1=a;
			x2=b;
			y1=c;
			y2=d;
		}
};
class point2{
friend class point1;
	public:
		
};
int main(){
	point1 p1(5,2,5,2);
	
}
