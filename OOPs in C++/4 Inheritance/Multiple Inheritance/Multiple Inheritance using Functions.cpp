#include<iostream>
using namespace std;
void compile_data();
class School{
	private:
		string school_name;
		int classes;
		public:
		
			void set_school_data(string, int);
            	void get_school_data(void){
            		cout<<"The name of the School is "<<endl
            		<<school_name<<endl
            		<<"The School has "<<classes<<" classes"<<endl;
				}
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
			void get_uni_data(void){
            		cout<<"The name of the University is "<<endl
            		<<uni_name<<endl
            		<<"The University has overall rating is "<<rating<<endl;
				}
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
		}
};
void Student::set_student_data(string n, int i){
	name=n;
	id=i;
}
int main(){
Student s1;
s1.set_school_data("hwhw",12);
s1.get_school_data();
	}
/*	void compile_data(){
string sn,un,n;
int c,r,i;
	}
*/	
