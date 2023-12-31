#include<iostream>
#include<string>
using namespace std;
class car{
     string name;
     string brand;
     int price;
     public:
     	void set_data(void){
     		cout<<"Enter the name of car : ";
     		cin>>name;
     		cout<<endl;
		 }
		 void setprice(int p){
		 	price=p;
		 }
		 void set_brand(string);
		 void show(){
	     cout<<"name of car is "<<name<<endl;
		 cout<<"brand of car is "<<brand<<endl;
		 cout<<"price of car is "<<price<<endl;	 	
		 }
};
void car::set_brand(string brand){
	car::brand=brand;
}
int main(){
	car c1;
	c1.set_data();
	c1.setprice(1000);
	c1.set_brand("tata");
	c1.show();
}
