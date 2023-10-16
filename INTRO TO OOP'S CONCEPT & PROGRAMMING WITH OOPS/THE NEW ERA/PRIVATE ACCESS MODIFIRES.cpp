#include<string.h>
#include<iostream>
using namespace std;
class Laptop_information {

	private :
		char laptop_name[40];
		char laptop_processer[50];
		char laptop_ram[50];
		char laptop_color[20];
		char laptop_device_id[60];
		char laptop_product_id[60];
		char laptop_system_type[40];
		int laptop_price;
};
class Windows_information {

	private :
		char windows_edition[40];
		char windows_version[50];
		int windows_instalation_date;
		float windows_os_build;
		char windows_experience[70];
};

int main() {
	cout<<"\n......ENTER BELOW LAPTOP AND THEIR WINDOWS DETAILS.......\n";
	Laptop_information l[2];
	Windows_information w[2];

	for(int i=0; i<1; i++) {cout<<endl;
		cout<<"ENTER THE LAPTOP NAME = ";
		cin>>l[i].laptop_name;

		cout<<"ENTER THE LAPTOP PROCESSER = ";
		cin>>l[i].laptop_processer;

		cout<<"ENTER THE LAPTOP RAM = ";
		cin>>l[i].laptop_ram;

		cout<<"ENTER THE LAPTOP COLOR = ";
		cin>>l[i].laptop_color;

		cout<<"ENTER THE LAPTOP DEVICE ID = ";
		cin>>l[i].laptop_device_id;

		cout<<"ENTER THE LAPTOP PRODUCT ID = ";
		cin>>l[i].laptop_product_id;

		cout<<"ENTER THE LAPTOP SYSTEM TYPE = ";
		cin>>l[i].laptop_system_type;

		cout<<"ENTER THE LAPTOP PRICE = ";
		cin>>l[i].laptop_price;

	}

	for(int i=0; i<1; i++) {cout<<endl;
		cout<<"ENTER THE WINDOWS EDITION = ";
		cin>>w[i].windows_edition;
		
		cout<<"ENTER THE WINDOWS VERSION = ";
		cin>>w[i].windows_version;
		
		cout<<"ENTER THE WINDOWS INSTALATION DATE = ";
		cin>>w[i].windows_instalation_date;
		
		cout<<"ENTER THE WINDOWS OPERATING SYSTEM BUILD = " ;
		cin>>w[i].windows_os_build;
		
		cout<<"ENTER THE WINDOWS EXPERIENCE = " ;
		cin>>w[i].windows_experience;
		
	}
	
	cout<<"\n........LAPTOP DETAILS........\n";
	
	for(int i=0; i<1; i++) {cout<<endl;
		cout<<"THE LAPTOP NAME = "<<l[i].laptop_name<<endl;
		cout<<"THE LAPTOP PROCESSER = "<<l[i].laptop_processer<<endl;
		cout<<"THE LAPTOP RAM = "<<l[i].laptop_ram<<endl;
		cout<<"THE LAPTOP COLOR = "<<l[i].laptop_color<<endl;
		cout<<"THE LAPTOP DEVICE ID = "<<l[i].laptop_device_id<<endl;
		cout<<"THE LAPTOP PRODUCT ID = "<<l[i].laptop_product_id<<endl;
		cout<<"THE LAPTOP SYSTEM TYPE = "<<l[i].laptop_system_type<<endl;
		cout<<"THE LAPTOP PRICE = "<<l[i].laptop_price<<endl;
	}
	
	cout<<"\n........WINDOWS DETAILS........\n";
	
	for(int i=0; i<1; i++) {cout<<endl;
		cout<<"THE WINDOWS EDITION = "<<w[i].windows_edition<<endl;
		cout<<"THE WINDOWS EDITION = "<<w[i].windows_version<<endl;
		cout<<"THE WINDOWS EDITION = "<<w[i].windows_instalation_date<<endl;
		cout<<"THE WINDOWS EDITION = "<<w[i].windows_os_build<<endl;
		cout<<"THE WINDOWS EDITION = "<<w[i].windows_experience<<endl;
	}
	
	return 0;
}