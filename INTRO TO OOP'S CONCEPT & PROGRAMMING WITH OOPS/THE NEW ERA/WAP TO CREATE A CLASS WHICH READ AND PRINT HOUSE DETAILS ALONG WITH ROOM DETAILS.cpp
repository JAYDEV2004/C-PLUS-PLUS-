#include<string.h>
#include<iostream>
using namespace std;
class House_details {

	public :

		int house_number;
	long long int house_contact_number;
		char house_name[30];
		char house_address[1000];
};

class Room_details {

	public :

		int room_quantity;
		int main_room;
		int kids_room;
		int guast_room;
		int store_room;

};

int main() {
	cout<<"\n......ENTER THE HOUSE DETAILS........\n";

	House_details h[3];
	Room_details r[3];

	for(int i=0; i<1; i++) {
		cout<<endl;
		cout<<"ENTER THE HOUSE NUMBER = ";
		cin>>h[i].house_number;
		cout<<"ENTER THE HOUSE CONTACT NUMBER = ";
		cin>>h[i].house_contact_number;
		cout<<"ENTER THE HOUSE NAME = ";
		cin>>h[i].house_name;
		cout<<"ENTER THE HOUSE ADDRESS = ";
		cin>>h[i].house_address;

	}

	cout<<"\n......ENTER THE ROOM DETAILS........\n";
	for(int i=0; i<1; i++) {
		cout<<endl;
		cout<<"ENTER THE HOW MANY ROOM IN YOUR HOUSE = ";
		cin>>r[i].room_quantity;
		cout<<"ENTER THE HOW MANY MAIN ROOM IN YOUR HOUSE = ";
		cin>>r[i].main_room;
		cout<<"ENTER THE HOW MANY KIDS ROOM IN YOUR HOUSE = ";
		cin>>r[i].kids_room;
		cout<<"ENTER THE HOW MANY GUAST ROOM IN YOUR HOUSE = ";
		cin>>r[i].guast_room;
		cout<<"ENTER THE HOW MANY STORE ROOM IN YOUR HOUSE = ";
		cin>>r[i].store_room;

	}
	cout<<"\n......HEAR ARE THE HOUSE AND ROOM INFORMATION........\n";
	for(int i=0; i<1; i++) {
		cout<<"HOUSE NUMBER = "<<h[i].house_number<<endl;
		cout<<"HOUSE CONTACT NUMBER = "<<h[i].house_contact_number<<endl;
		cout<<"HOUSE NAME = "<<h[i].house_name<<endl;
		cout<<"HOUSE ADDRESS = "<<h[i].house_address<<endl;
	}

	for(int i=0; i<1; i++) {
		cout<<"ROOM QUANTITY = "<<r[i].room_quantity<<endl;
		cout<<"MAIN ROOM QUANTITY = "<<r[i].main_room<<endl;
		cout<<"KIDS ROOM QUANTITY = "<<r[i].kids_room<<endl;
		cout<<"GUAST ROOM QUANTITY = "<<r[i].guast_room;
		cout<<"STORE ROOM QUANTITY = "<<r[i].store_room;
	}

	return 0;
}