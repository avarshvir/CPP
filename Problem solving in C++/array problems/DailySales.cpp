#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double arr[7];
  double i;
	cout<<"Enter no. of sales"<<endl;
	for(i=0;i<7;i++){
		cin>>arr[i];
	}
	for(i=0;i<7;i++){
		cout<<arr[i]<<endl;
	}
	int maxno=INT_MIN;
	int minno=INT_MAX;
	for(i=0;i<7;i++){
		maxno=max(maxno,arr[i]);
		minno=min(minno,arr[i]);
			}
cout<<"highest sale: "<<maxno<<" "<<"lowest sale"<<minno;
}
