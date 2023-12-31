#include<iostream>
using namespace std;
int main()
{
	char vowel;
	cin>>vowel;
	if(vowel=='a'|| vowel=='A'){
		cout<<"A is a vowel";
	}
	else if(vowel=='e'){
		cout<<"E is a vowel";
	}
	else if(vowel=='i'){
		cout<<"I is a vowel";
	}
	else if(vowel=='o'){
		cout<<"O is a vowel";
	}
	else if(vowel=='u'){
		cout<<"U is a vowel";
	}
	else{
		cout<<"it is a consonant";
	}
	return 0;
}

