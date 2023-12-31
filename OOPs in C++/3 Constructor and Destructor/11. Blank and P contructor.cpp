#include<iostream>
using namespace std;
class drinks{
	private:
		string type;
		string brand;
		float price;
		public:
			drinks(){}     //blank or default constructor
			drinks(string t,string b, float p);
			void display(void){
				cout<<endl<<"The Drink is "<<type<<endl
				<<" of brand "<<brand<<endl
				<<" and price is Rs "<<price<<"/-"<<endl;
			}
};
drinks::drinks(string t, string b, float p){
	type=t;
	brand=b;
	price=p;
};
int main(){
	string t,b;
	float p;
	cout<<"enter Type and Brand "<<endl;
	cin>>t>>b;
	cout<<"enter Price "<<endl;
	cin>>p;
	drinks d1(t,b,p);
	d1.display();
	drinks d2=drinks("soft drink","Pepsi",p);
	d2.display();
    
	drinks d3,d4,d5;
	d3=drinks("Soft drink","Coca Cola",p);
	d3.display();
	cout<<"enter Type and Brand "<<endl;
	cin>>t>>b;
	cout<<"enter Price "<<endl;
	cin>>p;
	d4=drinks(t,b,p);
	d4.display();
	cout<<"\n";
	cout<<"enter Type and Brand "<<endl;
	cin>>t>>b;
	cout<<"enter Price "<<endl;
	cin>>p;
	d5=drinks(t,b,p);
	d5.display();
	
}
