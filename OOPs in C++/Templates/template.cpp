#include<iostream>
using namespace std;
template<class T=int>
class A{
	private:
		T a;
		T b;
		public:
			T add(T a,T b){
				this->a=a;
				this->b=b;
			    cout<<a+b<<endl;
			}
};
int main(){
	A<char> a1;
	a1.add('.','@');
}
