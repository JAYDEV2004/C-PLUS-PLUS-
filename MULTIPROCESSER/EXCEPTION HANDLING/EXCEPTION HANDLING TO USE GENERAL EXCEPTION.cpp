#include<iostream>
using namespace std;
int main() {

	int a,b,c;
	char dataa[100] = "THIS IS VALUE NOT DIVIDED BY ZERO";

	cout<<"ENTER THE FIRST VALUE = ";
	cin>>a;

	cout<<"ENTER THE FIRST VALUE = ";
	cin>>a;

	try {

		if(b>0) {

			c = a*b;
			cout<<"Ans = "<<c<<endl;
		} else {

			throw a;
		}
	} catch(...) {

		cout<<dataa<<endl;
	}
}