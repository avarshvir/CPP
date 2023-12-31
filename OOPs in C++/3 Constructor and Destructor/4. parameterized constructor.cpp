#include<iostream>
#include<math.h>
using namespace std;
class Points{
	private:
		int x,y;
		public:
			Points(int,int);
			void show(void){
				cout<<"The points of x and y are ("<<x<<","<<y<<")"<<endl;
			}
			friend float distance(Points,Points);
};
Points::Points(int a,int b){
	x=a;
	y=b;
}
float distance(Points p,Points q){
	int x_dis=pow((p.x-q.x),2);
	int y_dis=pow((p.y-q.y),2);
	int sum=x_dis+y_dis;
	cout<<sum;
	//return sqrt((pow((p.x-q.x),2)))-(pow((p.y-q.y),2));
}
int main(){
	Points p1(10,20);
	Points p2(30,40);
	p1.show();
	p2.show();
	distance(p1,p2);
}
