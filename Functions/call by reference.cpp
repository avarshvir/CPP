        //call by reference      function
        // swapping of two number
#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main(){
	int x,y;
	x=10;
	y=20;
	cout<<"Before calling Function "<<endl;
	cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
	swap(x,y);
	cout<<"After Calling Function "<<endl;
	cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
	return 0;
}                           
