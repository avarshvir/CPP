#include<iostream>
using namespace std;
template<class T>
class vector{
	public:
		T *arr;
		int size;
		vector(int m){
			size=m;
			arr = new T[size];
		}
		T dotProduct(vector &v){
			T d=0;
			for(int i=0;i<size;i++){
				d+this->arr[i]*v.arr[i];
			}
			return d;
		}
};
int main(){
	vector<float> v1(1);
	v1.arr[0]=1.4;
	v1.arr[1]=1.5;
	v1.arr[1]=1.6;
	vector<float> v2(2);
	v2.arr[0]=2.4;
	v2.arr[1]=2.5;
	v2.arr[1]=2.6;
	float a=v1.dotProduct(v2);
	cout<<a<<endl;
	return 0;
	
}
