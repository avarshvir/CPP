#include<iostream>
#include<string>
using namespace std;
class Employee{
	string name;
	int id;
	float salary;
	static string cname;
         public:
         	void set_data(string n, int i, float s){
         		name=n;
         		id=i;
         		salary=s;
			 }
			 void display(){
			 	cout<<"name of the employee is "<<name<<endl;
			 	cout<<"id of the "<<name<<" is "<<id<<endl;
			 	cout<<"salary of "<<name<<" is"<< salary<<endl;
			   cout<<"comapny name "<<cname<<endl;
			 }
};
string Employee::cname="jjj";
int main(){
	Employee e1,e2;
	e1.set_data("kkkk",322,100);
	e1.display();
	e2.set_data("kfea",342,200);
	e2.display();
}
