#include<iostream>
using namespace std;
int main(){
	int a=3;
	int* b;
	b=&a;
	
	// * Derefrence Operator
    //   & Adress of Operator
    cout<<a<<"\n";   //simply display value of a
	cout<<b<<endl;    //display adress of a
	cout<<*b<<endl;     //display value of a 
	cout<<&b<<endl;     //display adress of b;
	cout<<&a<<endl;        //display adress of a  
    int **c=&b;   // ** pointer to pointer it store adress of another pointer
	cout<<&b<<endl;     //display adress of b
    cout<<c<<endl;       //display adress of b
    cout<<*c<<endl;
    cout<<**c;
}
