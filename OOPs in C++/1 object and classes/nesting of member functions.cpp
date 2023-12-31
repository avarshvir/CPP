#include<iostream>
#include<string>
using namespace std;
class binary{
	string s;
		void chk_bin(void);
	public:
		void read(void);
	
		void one_comp(void);
		void two_comp(void);
		void display();
};
void binary::read(void){
	cout<<"enter a binary no.: ";
	cin>>s;
}
void binary::chk_bin(void){
	for(int i=0;i<s.length();i++){
		if(s.at(i)!='0' && s.at(i)!='1'){
			cout<<"invalid";
			exit(0);
		}
	}
}
void binary::one_comp(void){
	chk_bin();
	for(int i=0;i<s.length();i++){
		if(s.at(i)=='0'){
			s.at(i)='1';
		}
		else{
			s.at(i)='0';
		}
	}
}
void binary::two_comp(void){
	one_comp();
}
void binary::display(){
	cout<<"binary no. is : ";
	for(int i=0;i<s.length();i++){
		cout<<s.at(i);
	}
	cout<<endl;
}
int main(){
	binary b;
	b.read();
	b.display();
	//b.chk_bin();
	b.one_comp();
	b.display();
	b.two_comp();
	return 0;
}
