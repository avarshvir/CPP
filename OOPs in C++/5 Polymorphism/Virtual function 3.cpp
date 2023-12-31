#include<iostream>
#include<cstring>
using namespace std;
class Arsh{
	protected:
		string title;
		int age;
		float rate;
		int fol;
		public:
			Arsh(string title,int age,float rate,int fol){
				this->title=title;
				this->age=age;
			    this->rate=rate;
			    this->fol=fol;
			}
	virtual	void display(){
			cout<<"this function is invoked when virtual is not placed "<<endl;
			}
};
class Arsh_soc:public Arsh{
	protected:
		string youtube;
		string insta;
		public:
		Arsh_soc(string title, int age, string youtube, string insta, float rate,int fol):Arsh(title,age,rate,fol){
			this->youtube=youtube;
			this->insta=insta;
			/*this->you_rate=you_rate;
			this->ins_fol=ins_fol;*/
		}
		void display(){
			cout<<"The name is "<<title<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Channel name "<<youtube<<endl;
			cout<<"insta account name "<<insta<<endl;
			cout<<"Subscriber on youtube "<<rate<<"K"<<endl;
			cout<<"follower on insta "<<fol<<endl;
		}
	};
class Arsh_web:public Arsh{
	private:
		string web;
		public:
			Arsh_web(string web,string title, int age,float rate,int fol):Arsh(title,age,rate,fol){
				this->web=web;
			}
			void display(){
			cout<<"The name is "<<title<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"website rating "<<rate<<endl;
			//cout<<"follower "<<fol<<endl;
		    cout<<"website name is "<<web<<" or itsarc.w3space.com"<<endl;
		}
};	
	int main(){
		string title;
		int age;
		float rate;
		int fol;
		string web;
	    title="Arshvir";
	    age=19;
	    rate=14.4;
	    fol=250;
	    web="its arc";
	    Arsh_soc soc(title,age,"av top 10","avarshvir",rate,fol);
	  //  soc.display();      it will work
	    rate=10;
		Arsh_web wb(web,title,age,rate,fol);
	//	wb.display();         it will also work
	Arsh* ptr[2];
	ptr[0]=&soc;                    //Pointer of base class pointing to Arsh_soc object
	ptr[1]=&wb;                     //Pointer of base class pointing to Arsh_wb object
	ptr[0]->display();
	cout<<endl;
	ptr[1]->display();
	}
