#include<iostream>
using namespace std;
class Animal{
	private:
		string breed;
		string name;
		float  price;
		public:
		Animal(){}
		void animal(string b, string n, float p){
			breed = b;
			name = n;
			price = p;  
		}
		 void animal_data(){
			cout<<"Breed = "<<breed<<endl
			<<"Name = "<<name<<endl
			<<"Price = Rs "<<price<<"/-"<<endl;
		}
};
class Mammal:public Animal{
	private:
		string role;
		string voice;
		public:
			void set_mammal(string r, string v){
				role=r;
				voice=v;
			}
			void data(){
				cout<<"role = "<<role<<endl
				<<"voice = "<<voice<<endl;
			}
		
};
int main(){
	Animal a1;
	string b,n;
	float p;
	cout<<"enter breed "<<endl;
	cin>>b;
	cout<<"enter name "<<endl;
	cin>>n;
	cout<<"enter price "<<endl;
	cin>>p;
	a1.animal(b,n,p);
	a1.animal_data();
	cout<<endl;
	Mammal m1;
	m1.animal("kk","ll",100);
	m1.set_mammal("jj","kl");
	m1.animal_data();
	m1.data();

}
