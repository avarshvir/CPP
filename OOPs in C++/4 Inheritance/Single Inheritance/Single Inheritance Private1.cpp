#include<iostream>
using namespace std;
class Employee{
	string name;
	int id;
	float salary;
	public:
		void set_data(string, int, float);
		string get_Edata_N();
		int get_Edata_I();
		float get_Edata_S();
};
void Employee::set_data(string n, int i, float sa){
	name=n;
	id=i;
	salary=sa;
}
string Employee::get_Edata_N(){
	return name;
}
int Employee::get_Edata_I(){
	return id;
}
float Employee::get_Edata_S(){
	return salary;
}
class Programmer:private Employee{
	string Lang_Code;
	float sal1;
	int point;
	public:
		void process();
		void display();
		void salary();
};
void Programmer::process(){
	string n;
	int i;
	float sa;
	cout<<"enter name : ";
	cin>>n;
	cout<<"Enter id ";
	cin>>i;
	cout<<"enter salary ";
	cin>>sa;
	set_data(n,i,sa);
	sal1=get_Edata_S()*10;
	get_Edata_N();
	get_Edata_I();
	cout<<"Enter Language : "<<endl;
	cin>>Lang_Code;
	cout<<"Enter Rating : "<<endl;
	cin>>point;
}
/*void Programmer::salary(){
	set_data("ll",10,100);
}*/
void Programmer::display(){
	cout<<get_Edata_N()<<endl;
	cout<<get_Edata_I()<<endl;
	cout<<get_Edata_S()<<endl;
//	cout<<salary();
}
int main(){
	Programmer p1;
	p1.process();
	p1.display();
	
}
