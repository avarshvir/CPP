#include<iostream>
using namespace std;
class Employee{
	protected:
	//private:
    //public:
   // float ad=40;
		string name;
		int id;
		float salary;
		public:
			Employee(){}
		void Edata(string n,int i, float s){
				name=n;
				id=i;
				salary=s;
			}
			void get_Data(){
				cout<<"Name "<<name<<endl
				<<"Id : "<<id<<endl
				<<"Salary = Rs "<<salary<<"/-"<<endl;
			}
};
class Programmer:public Employee{
	public:
		string LangCode;
		string perfomance;
		int marks;
		Programmer(){
		}
		void set_Data(string L,string p, int m){
			LangCode=L;
			perfomance=p;
			marks=m;}
			void display(){
				cout<<"Language "<<LangCode<<endl;
				cout<<"Performance "<<perfomance<<endl;
				cout<<"Points "<<marks<<endl;
			}
		
};
int main(){
	Employee e1,e2;
	for(int j=0;j<2;j++){
	string n;
	int i;
	float s;
	
	cout<<"Enter the Name "<<endl;
	cin>>n;
	cout<<"Enter the Id "<<endl;
	cin>>i;
	cout<<"Enter the Salary Rs ";
	cin>>s;
	e1.Edata(n,i,s);
	e1.get_Data();
}
    e2.Edata("lovish",3002,30000);
    e2.get_Data();

    cout<<endl;
    Programmer p1;
    p1.Edata("joe",3003,40000);
    p1.set_Data("C++","Expert",10);
	p1.get_Data();
	p1.display();
    
}
