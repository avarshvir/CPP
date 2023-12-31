#include<iostream>
#include<string.h>
using namespace std;
class Student{
	private:
		int id;
		string name;
		float marks;
		public:
			void display(){
	cout<<"Student name : "<<name<<endl;
	cout<<"id no : "<<id<<endl;
	cout<<"marks obtained : "<<marks<<endl;
}
			void set_id(int);
			void set_name(string);
			void set_marks(float);
};

void Student::set_id(int num){
	id=num;
}
void Student::set_marks(float m){
	marks=m;
}
void Student::set_name(string k){
	name=k;
}
int main(){
	Student s1;
	s1.set_id(222);
	s1.set_marks(100);
	s1.set_name("kkkk");
	s1.display();
}
