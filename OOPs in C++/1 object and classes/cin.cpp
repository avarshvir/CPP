#include<iostream>
#include<string>
using namespace std;
class family{
	private:
		string name,name1,role,role1;
		int age,age1;
		public:
			family(string n1,string r1,int a1);
			void set_data(string n,string r, int a);
            void get_data(void){
            	cout<<"*****Family*****"<<endl
            	<<name<<" is "<<role<<endl
            	<<"and age is "<<age<<endl;
			}
};
void family::set_data(string n,string r, int a){
	name=n;
	role=r;
	age=a;
}

family::family(string n1,string r1, int a1){
	name1=n1;
	role1=r1;
	age1=a1;
}
int main(){
	string n,r;
	int a;
	cout<<"enter name "<<endl;
	cin>>n;
	cout<<"enter role "<<endl;
	cin>>r;
	cout<<"enter age "<<endl;
	cin>>a;
	/*family f2;
	f2.set_data("hell","jo",100);
	f2.get_data();*/
	family f1(n,r,a);
	f1.get_data();
}
