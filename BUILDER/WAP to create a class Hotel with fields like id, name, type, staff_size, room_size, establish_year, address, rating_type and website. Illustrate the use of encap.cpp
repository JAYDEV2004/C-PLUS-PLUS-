#include<iostream>
#include<string>
using namespace std;

class Hotel_details {

	private :
		int id;
		string name;
		string address;
		string type;
		int staff_size;
		int room_size;
		int established_year;
		int rating;
		string website;
	public :

		void setter(int id,const string& name,const string& address,const string& type,int staff_size,int room_size,int established_year,int rating,const string& website) {
			this->id = id;
			this->name = name;
			this->address = address;
			this->type = type;
			this->staff_size = staff_size;
			this->room_size = room_size;
			this->established_year = established_year;
			this->rating = rating;
			this->website = website;
		}

		void getter() {

			cout<<"HOTEL ID                      = "<<id<<endl;
			cout<<"HOTEL NAME                    ="<<name<<endl;
			cout<<"HOTEL ADDRESS                 ="<<address<<endl;
			cout<<"HOTEL IS EITHER VEG OR NONVEG = "<<type<<endl;
			cout<<"HOTEL STAFF SIZE              = "<<staff_size<<endl;
			cout<<"HOTEL ROOM SIZE               = "<<room_size<<endl;
			cout<<"HOTEL ESTABLISHED YEAR        = "<<established_year<<endl;
			cout<<"HOTEL RATTING                 = "<<rating<<endl;
			cout<<"HOTEL WEBSITE                 = "<<website<<endl;
		}

};
int main() {
	Hotel_details hotel;

//	cout<<"\n..............enter the hotel details below................\n";
//	hotel.setter(28,"JAYDEV LAXUARY 7STAR HOTEL & A.C. ROOMS","NEAR BY D-MART MALL, SARTHANA JAKATNAKA, SURAT-395006",300,5000,2004,7,"www.JAYDEVHOTELLAXUARY7STARHOTEL&A.C.ROOMS.com");
	hotel.setter(28, "JAYDEV LUXURY 7STAR HOTEL & A.C. ROOMS", "NEAR BY D-MART MALL, SARTHANA JAKATNAKA, SURAT-395006", "VEG", 300, 5000, 2004, 7, "www.JAYDEVHOTELLUXURY7STARHOTEL.com");
	cout<<"\n.............. THE HOTEL DETAILS BELOW ................\n\n";
	hotel.getter();

	return 0;
}
