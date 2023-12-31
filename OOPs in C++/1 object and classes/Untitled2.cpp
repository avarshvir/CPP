#include<iostream>
#include<string.h>
using namespace std;
class Employee{
	private:
	string name;
	int id;
	long double salary;
	public:
		void set_Data(string n, int i, long double s);
		void get_Data(){
			cout<<"Name of the Employee is "<<name<<endl;
			cout<<"ID of the "<<name<<" is "<<id<<endl;
			cout<<"Salary of the "<<name <<" is "<<salary<<endl;
		}
};
void Employee::set_Data(string n, int i, long double s){
	name=n;
	id=i;
	salary=s;
}
int main(){
	Employee e1,e2;
	e1.set_Data("Arshvir",7423,2500000);
	e1.get_Data();
    e2.set_Data("jdkfj",44,344);
    e2.get_Data();
	return 0;
}
