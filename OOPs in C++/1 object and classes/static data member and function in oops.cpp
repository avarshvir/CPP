#include<iostream>
using namespace std;
class Employee{
	int id;
	static int count;
	public:
		void set_data(void){
			cout<<"enter the Id of Employee : ";
			cin>>id;
			count++;
		}
		void get_data(void){
			cout<<"Id of emloyee "<<count<<" "<<"is "<<id<<endl;
		}
static void getcount(void){
	cout<<"the value of count is "<<count<<endl;
}
};
int Employee:: count=3000; //cout is static variable and property of class and default value is 0

int main(){
	Employee e1,e2,e3;
	e1.set_data();
	e1.get_data();
Employee::getcount();
	e2.set_data();
	e2.get_data();
	Employee::getcount();
	e3.set_data();
	e3.get_data();
Employee::getcount();
}
