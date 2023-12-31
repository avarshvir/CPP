// default constructor example 3
#include<iostream>
#include<string>
using namespace std;
class Employee{
	int id;
	char name;
	public:
		Employee();            //default constructor declaration
		int set_data(int,char);
		void show(void){	cout<<"the name of employee is "<<name<<endl;
	cout<<"the id of the employee is "<<id<<endl;
}
};
Employee::Employee(){
	id=1234;
    name='l';
}
Employee::set_data(int i,char n){
	id=i;
	name=n;
}

int main(){
	Employee e1,e2;
	e1.show();                          //constructor call
	e2.set_data(4321,'k');
	e2.show();
}
