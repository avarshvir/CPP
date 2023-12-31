// Multilevel Inheritance
#include<iostream>
using namespace std;
class GF                            //GF=Grand Father
{
	protected:
		string hair;
		float  height;
		public:
			void set_GF_data(string h, float he){
				hair=h;
				height = he;
			}
};
class F:public GF{
protected:
     string eye;
	 float height;
	 public:
	 void set_F_data(string e, float hi){
	 	eye=e;
	    height = hi;
	 }	
};
class C:public F{
	int age;
	public:
		void C_data(int a){
			age=a;
		}
		void all_data(){
			cout<<"The hair Color of child is "<<hair<<endl;
			GF::set_GF_data(" ",6.11);
			cout<<"the height is  "<<height<<endl
			<<"the eye color is "<<eye<<endl;
			cout<<"the age is "<<age<<endl;
		}
};
int main(){
	C c1;
    c1.set_GF_data("brown",6.11);
	c1.set_F_data("black",9.11);
	c1.C_data(16);
	c1.all_data();
}
