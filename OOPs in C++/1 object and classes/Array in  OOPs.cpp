#include<iostream>
using namespace std;
class shop{
	int item[100];
	int price[100];
	int counter;
	public:
		void intcounter(){
		counter=0;
		}
		void setPrice();
		void Display();
};
void shop::setPrice(){
	cout<<"enter Item id of "<<counter+1<<endl;
	cin>>item[counter];
	cout<<"enter price of "<<counter+1<<endl;
	cin>>price[counter];
	counter++;
}
void shop::Display(){
	for(int i=0;i<counter;i++){
		cout<<"the price of item "<<item[i]<<" is "<<price[i]<<endl;
	}
}
int main()
{
	shop du;
	du.intcounter();
	for(int i=du.setPrice;i<du.intcounter();i++);
	du.Display();
}
