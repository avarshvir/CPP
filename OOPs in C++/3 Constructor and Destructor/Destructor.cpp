#include<iostream>
using namespace std;
class subject{
	string name;
	float price;
	public:
		subject(){}
		subject(string n, float p);
		void display(){
			cout<<"The name of the Book is "<<name<<endl
			<<"of rate Rs"<<price<<"/-"<<endl;
		}
		~subject(){
			cout<<"Destructor is Invoked "<<endl;
			cout<<"The object is destroyed"<<endl;
		}
};
subject::subject(string n,float p){
	name=n;
	price=p;
}
int main(){
	subject s1("C++",100);   //constructor is invoked and then destructor is invoked
	s1.display();
//    s1.~subject();             //another method to invoke destructor
/*	subject s2,s3;             //destructor is invoked
	string n;
	float p;
	cout<<"enter name "<<endl;
	cin>>n;
	cout<<"enter price "<<endl;
	cin>>p;
	s2=subject(n,p);
	s2.display();
*/
}
