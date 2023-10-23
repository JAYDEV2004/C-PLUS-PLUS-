#include<string>
#include<iostream>

using namespace std;

class Highschool_students {
	private :
		int id1;
		string name1;
		int rollno1;
		int std1;
		int age1;
		long	long	int contact1;
		string address1;
		static string highschoolname;

	public :

		void school() {
			cout<<"\n.......JAYDEV PRIVATE INTERNATIONAL SCHOOL STUDANTS DETAILS.........\n\n";

			cout<<"ENTER THE STUDANT ID          = ";
			cin>>id1;

			cout<<"ENTER THE STUDANT NAME        = ";
			cin.ignore();
			getline(cin, name1);

			cout<<"ENTER THE STUDANT ROLL NO     = ";
			cin>>rollno1;

			cout<<"ENTER THE STUDANT STANDARD    = ";
			cin>>std1;

			cout<<"ENTER THE STUDANT AGE         = ";
			cin>>age1;

			cout<<"ENTER THE STUDANT CONTACT     = ";
			cin>>contact1;

			cout<<"ENTER THE STUDANT ADDRESS     = ";
			cin.ignore();
			getline(cin, address1);

		}

		void school1() {
			cout<<"ID              = "<<id1<<endl;

			cout<<"NAME            = "<<name1<<endl;

			cout<<"ROLL NO         = "<<rollno1<<endl;

			cout<<"STANDARD        = "<<std1<<endl;

			cout<<"AGE             = "<<age1<<endl;

			cout<<"CONTACT         = "<<contact1<<endl;

			cout<<"ADDRESS         = "<<address1<<endl;

			cout<<"HIG SCHOOL NAME = "<<highschoolname<<endl;
		}
};
string Highschool_students::highschoolname = "JAYDEV PRIVATE INTERNATIONAL SCHOOL";

class Collage_studants {
	private :
		int id2;
		string name2;
		string coursename2;
		int rollno2;
		string year2;
		int age2;
		long	long	int contact2;
		string address2;
		static string collagename;

	public :

		void collage() {
			cout<<"\n..........JAYDEV PRIVATE INTERNATIONAL COLLAGE STUDANTS DETAILS.........\n\n";

			cout<<"ENTER THE STUDANT ID                                                            = ";
			cin>>id2;

			cout<<"ENTER THE STUDANT NAME                                                          = ";
			cin.ignore();
			getline(cin, name2);

			cout<<"ENTER THE STUDANT COURSE NAME                                                   = ";
			cin.ignore();
			getline(cin, coursename2);

			cout<<"ENTER THE STUDANT ROLL NO                                                       = ";
			cin>>rollno2;

			cout<<"ENTER THE STUDANT IN WHICH YEAR OF COLLAGE (1ST, 2ND, 3RD, 4TH, 5TH, 6TH, ETC.) = ";
			cin.ignore();
			getline(cin, year2);

			cout<<"ENTER THE STUDANT AGE                                                           = ";
			cin>>age2;

			cout<<"ENTER THE STUDANT CONTACT                                                       = ";
			cin>>contact2;

			cout<<"ENTER THE STUDANT ADDRESS                                                       = ";
			cin.ignore();
			getline(cin, address2);
		}

		void collage1() {
			cout<<"ID = "<<id2<<endl;

			cout<<"NAME = "<<name2<<endl;

			cout<<"COURSE NAME = "<<coursename2<<endl;

			cout<<"ROLL NO = "<<rollno2<<endl;

			cout<<"YEAR OF COLLAGE (1ST, 2ND, 3RD, 4TH, 5TH, 6TH, ETC.) = "<<year2<<endl;

			cout<<"AGE = "<<age2<<endl;

			cout<<"CONTACT = "<<contact2<<endl;

			cout<<"ADDRESS = "<<address2<<endl;

			cout<<"COLLAGE NAME = "<<collagename<<endl;
		}
};

string Collage_studants::collagename = "JAYDEV PRIVATE INTERNATIONAL COLLAGE";

int main() {
	Highschool_students hs[5];

	for(int i=0; i<1; i++) {
		cout<<"\n............ ENTER THE "<< i + 1 <<" HIGH SCHOOL STUDANT DETAILS DETAILS ...........\n"<<endl;
		hs[i].school();
	}
	for(int i=0; i<1; i++) {
		cout<<"\n............ THE "<< i + 1 <<" HIGH SCHOOL STUDANT DETAILS DETAILS ...........\n"<<endl;
		hs[i].school1();
	}

	Collage_studants cs[5];

	for(int i=0; i<1; i++) {
		cout<<"\n............ ENTER THE "<< i + 1 <<" COLLAGE STUDANT DETAILS DETAILS ...........\n"<<endl;
		cs[i].collage();
	}
	for(int i=0; i<1; i++) {
		cout<<"\n............ THE "<< i + 1 <<" COLLAGE STUDANT DETAILS DETAILS ...........\n"<<endl;
		cs[i].collage1();
	}
}