#include<iostream>
#include<string>
using namespace std;
int n;
class Employee{
	private:
		string name;
		int id;
		float salary;
		public:
			void setdata(void){
				cout<<"enter the name of employee : ";
				cin>>name;
		cout<<endl;
				cout<<"enter the id of "<<name<<" : ";
				cin>>id;
		cout<<endl;
				cout<<"enter the salary of "<<id<<" :";
				cin>>salary;
		cout<<endl;
			}
			void getdata(void){
             for(int i=0;i<n;i++){
             	cout<<name[i]<<endl;
			 }
			}
};
int main(){
	cout<<"enter the no. of Employee : ";
	cin>>n;
	Employee s[n];
	for(int i=0;i<n;i++){
		s[i].setdata();
		s[i].getdata();
	}
}
