#include<iostream>
#include<string>
using namespace std;
class Dog{
	private:
		float price;
		char breed[10];
		string mood;
		public:
			void set_price(float);
			void set_breed(void);
			void set_mood(string);
            void display();
};
void Dog::set_price(float p){
	price=p;
}
void Dog::set_breed(){
	cout<<"Enter the Breed : ";
	cin>>breed;
}
void Dog::set_mood(string m){
	mood=m;
}
void Dog::display(){
	cout<<"Chosen Dog breed is : "<<breed<<endl;
	cout<<"Price     : "<<price<<endl;
	cout<<"Dog Mood  : "<<mood;
}
int main(){
	Dog b1,m1,p1;
	/*if(b1.set_breed()== "pug"){
		b1.set_mood("happy");
		b1.set_price(1000);
		b1.display();
	}*/
	b1.set_breed();
	b1.set_mood("happy");
	b1.set_price(1000);
	b1.display();
}
