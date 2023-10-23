#include<iostream>
#include<string>

using namespace std;

class Indian_states {
	private :

		string name;
		string capital;
		string famous_dance;
		string goverment_party_name;
		string famous_food;
		string longest_state_river;
		string region_of_country;
		string largest_city_of_state;
		string formation_of_state;
		long districts;
		long population;
		static string country_name;

	public :

		Indian_states(const string& name, const string& capital, const string& famous_dance, const string& goverment_party_name, const string& famous_food, const string& longest_state_river,const string& region_of_country,const string& largest_city_of_state,const string& formation_of_state, long districts, long population) {
			this->name=name;
			this->capital=capital;
			this->famous_dance=famous_dance;
			this->goverment_party_name=goverment_party_name;
			this->famous_food=famous_food;
			this->longest_state_river=longest_state_river;
			this->region_of_country=region_of_country;
			this->largest_city_of_state=largest_city_of_state;
			this->formation_of_state=formation_of_state;
			this->population=population;
			this->districts=districts;
		}

		void stateDetails() {
			cout<<"ENTER THE STATE NAME OF BHARAT COUNTRY = ";
			cin.ignore();
			getline(cin,name);
			cout<<"ENTER THE STATE CAPITAL = ";
			getline(cin,capital);
			cout<<"ENTER THE STATE FAMOUS DANCE = ";
			getline(cin,famous_dance);
			cout<<"ENTER THE RULING PARTY NAME OF YOUR STATE = ";
			getline(cin,goverment_party_name);
			cout<<"ENTER THE STATE FAMOUS FOOD = ";
			getline(cin,famous_food);
			cout<<"ENTER THE STATE LONGEST RIVER = ";
			getline(cin,longest_state_river);
			cout<<"ENTER THE STATE REGION(TELL THE LOCATION OF YOUR STATE IN YOUR COUNTRY) = ";
			getline(cin,region_of_country);
			cout<<"ENTER THE LARGEST CITY OF STATE = ";
			getline(cin,largest_city_of_state);
			cout<<"ENTER THE STATE FORMATION DATE = ";
			getline(cin,formation_of_state);
			cout<<"ENTER THE TOTAL NUMBER OF STATE DISTRICTS = ";
			cin>>districts;
			cout<<"ENTER THE POPULATION =";
			cin>>population;
		}

		void displayStateDetails() {

			cout<<"STATE NAME = "<<name<<endl;
			cout<<"STATE CAPITAL = "<<capital<<endl;
			cout<<"STATE FAMOUS DANCE = "<<famous_dance<<endl;
			cout<<"STATE ROULING PARTY NAME ="<<goverment_party_name<<endl;
			cout<<"STATE FAMOUS FOOD ="<<famous_food<<endl;
			cout<<"STATE LONGEST RIVER = "<<longest_state_river<<endl;
			cout<<"STATE REGION = "<<region_of_country<<endl;
			cout<<"STATE LARGEST CITY = "<<largest_city_of_state<<endl;
			cout<<"STATE FORMATION DATE = "<<formation_of_state<<endl;
			cout<<"STATE DISTRICTS = "<<districts<<endl;
			cout<<"STATE POPULATION = "<<population<<endl;
		}

		static void displayCountryName() {
			cout << "COUNTRY NAME OF STATE= " << country_name <<endl;
		}

};

string Indian_states::country_name = "BHARAT";

int main() {
    // Create an object of the Indian_states class
    Indian_states state("StateName", "Capital", "Dance", "Party", "Food", "River", "Region", "City", "Formation", 10, 1000000);

    // Call the stateDetails function to input data
    state.stateDetails();

    // Call the displayStateDetails function to display the state details
    state.displayStateDetails();

    // Call the static function to display the country name
    Indian_states::displayCountryName();
    
    return 0;
}