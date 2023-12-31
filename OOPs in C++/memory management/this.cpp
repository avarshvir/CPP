#include<iostream>
using namespace std;
class no{
	private:
		int n;
		public:
		no& set(int n){
			this->n=n;
	        return *this;
		}
		void get_data(){
			cout<<"the no. is "<<n<<endl;
		}
};
int main(){
	no n;
	n.set(2).get_data();
}
