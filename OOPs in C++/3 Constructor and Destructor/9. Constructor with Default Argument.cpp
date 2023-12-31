#include<iostream>
#include<string>
using namespace std;
class Animal{
	private:
		string name;
		string type;
		float price;
		public:
			Animal(string n, float p, string b="Dog"){
				name=n;
				type=b;
				price=p;
			}
			void Show(void);
};
void Animal::Show(){
	cout<<"The info is "<<name<<" "<<type<<" "<<"Rs"<<price<<"/-"<<endl;
}
int main(){
    string n,b;
    float p;
    cout<<"Enter Name, Type and Price "<<endl;
    cin>>n;
    cin>>p;
    cin>>b;
    Animal A(n,p,b);
    A.Show();
	Animal A1("Do",1000);
	//cin>>A1;
	A1.Show();
	Animal A2("Lo",2000,"Lion");
	A2.Show();
	Animal A3=Animal("To",3000,"Tiger");
	A3.Show();
}
