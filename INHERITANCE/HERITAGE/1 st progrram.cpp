#include<iostream>
using namespace std;
class Mother {
	public :
		void display() {
			cout<<"hi, honey, how are you?\n";
		}

};
class Daughter : public Mother {
	public :
		void display() {
			cout<<"hi, mom, i am fine, how are you?\n";
		}

};
int main() {
	Daughter d;
	d.display();
	return 0;
}