// Multiple Inheritance
#include<iostream>
using namespace std;
void compile_data();
class School{
	protected:
		string school_name;
		int classes;
		public:
			void set_school_data(string, int);
};
void School::set_school_data(string sn,int c){
	school_name=sn;
	classes=c;
}
class University{
	protected:
		string uni_name;
		float rating;
		public:
			void set_uni_data(string,float);
};
void University::set_uni_data(string un,float r){
	uni_name=un;
	rating=r;
}
class Student:public School,public University{
	private:
		string name;
		int id;
		public:
		void set_student_data(string, int);
		void all_data(void){
			cout<<"The name of the student is : "<<name<<endl
			<<"The ID of the student is : "<<id<<endl;
				cout<<"The name of the school is "<<endl<<school_name<<endl;
				cout<<"The School has "<<classes<<" classes."<<endl;
				cout<<"The name of the University is "<<endl<<uni_name<<endl;
				cout<<"The uni has overall rating is "<<rating<<endl;	
		
		}
};
void Student::set_student_data(string n, int i){
	name=n;
	id=i;
}
int main(){
string sn,un,n;
int c,r,i;
//void compile_data();
	cout<<"enter the name of the student : "<<endl;
	    getline(cin,n);
	    cout<<"enter the id of student : "<<endl;
	    cin>>i;
	    cout<<"enter the name of the school : "<<endl;
	    cin>>sn;
	    cout<<"enter the classes of school : "<<endl;
	    cin>>c;
	    cout<<"enter the name of the university : "<<endl;
	    cin>>un;
	    cout<<"enter the rating of the university : "<<endl;
	    cin>>r;
	    Student s1;
	    s1.set_school_data(sn,c);
	    s1.set_uni_data(un,r);
	    s1.set_student_data(n,i);
	    s1.all_data();
	}
/*	void compile_data(){
string sn,un,n;
int c,r,i;
	}
*/	
