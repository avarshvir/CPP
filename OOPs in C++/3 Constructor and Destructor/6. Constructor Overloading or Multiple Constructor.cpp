#include<iostream>
#include<string>
using namespace std;
class student{
	private:
		int id;
		string name;
		string course;
		public:
			student(){                                //Default Constructor
				id=3001;
				name="abc";   
				course="ECE";
			}
			student(int,string,string);
			student(int,string);
			student(string,string);
			void display(void){
				cout<<"Name of the Student is "<<name<<endl;
				cout<<"Id of thr Student is "<<id<<endl;
				cout<<"Course "<<course<<endl;
			}
};
student::student(int i,string n, string c){           //Parameterized Constructor
	id=i;                            
	name=n;
	course=c;
}
student::student(int i, string n){
	id=i;                            
	name=n;
	course="ME";
}
student::student(string n,string c){
	id=3004;
	name=n;
	course=c;
}
/*student::student(string n,string c){
    id=3005;
	name=n;
	course=c;
}*/

int main(){
	student s1;
	s1.display();     //default constructor activate
	cout<<endl;
	student s2(3002,"xyz","CSE");
	s2.display();                                //Real Parameterized Constructor
	cout<<endl;
	student s3(3003,"qwe");                      //Default and Parametrized Constructor
	s3.display();
	cout<<endl;
	student s4("opr","CE");                      //Default and Parametrized Constructor
 	s4.display();
	cout<<endl;
	student s5("ikj","BT");
	s5.display();
}
