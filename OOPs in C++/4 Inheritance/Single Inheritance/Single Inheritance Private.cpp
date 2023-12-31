#include<iostream>
using namespace std;
class Employee{
	string name;
	int id;
	float salary;
	public:
		void set_data(string,int,float);
		string get_Emp_Ndata();
		int get_Emp_Idata();
		int get_Emp_Sdata();
};
void Employee::set_data(string n,int i,float k){
	name=n;//"asqw";
	id=i;//3001;
	salary=k;
}
string Employee::get_Emp_Ndata(){
	return name;
}
int Employee::get_Emp_Idata(){
	return id;
}
int Employee::get_Emp_Sdata(){
	return salary;
}
class Programmer:private Employee{
	string Lang_Code;
	float s;
	int point;
	public:
		void process();
		void display();
};
void Programmer::process(){
    set_data();
	s=get_Emp_Sdata()*10;
	point=10;
}
void Programmer::display(){
	cout<<"Name : "<<get_Emp_Ndata()<<endl;
cout<<"Id : "<<get_Emp_Idata()<<endl;
	cout<<"salary : "<<s<<endl;
}
int main(){
	string n;
	int i;
	float k;
	cout<<"enter name : "<<endl;
	cin>>n;
	cout<<"enter id : "<<endl;
	cin>>i;
	cout<<"enter salary : "<<endl;
	cin>>k;
	Programmer p1;
//	p1.set_data(n,i,k);
//	p1.get_Emp_Ndata();
//	p1.get_Emp_Idata();
//	p1.get_Emp_Sdata();
	p1.process();
	p1.display();

	
}
