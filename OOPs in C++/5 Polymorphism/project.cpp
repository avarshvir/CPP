#include<iostream>
using namespace std;
class University{
	protected:
		string uni_name;
		float rank;
		public:
			void Uni_name(string uni_name,float rank){
				cout<<"Enter the name of University "<<endl;
				cin>>uni_name;
	            rank=2;
			}
};
class College:public University{
	public:
		string col_name;
		float col_rate;
		void Col_name(string uni_name,float rank){
				cout<<"Enter the name of College "<<endl;
				cin>>col_name;
	            col_rate=9.9;
			}
};
class Department:public College{
	protected:
		int tot_dep;
};
int main(){
	
}
