#include<iostream>
#include<string>
using namespace std;
class Message{
	
	private :
		string message;
		
	public :
	    
		Message(const string& message = "Deafault massage"){
			this->message=message;
			
		}	
		void print(){
			
			cout<<" MESSAGE = "<<message<<endl;
		}
		void print(const string& additionalMsg){
			
			cout<<" MESSAGE = "<<message<<" | Additional Message = "<<additionalMsg<<endl;
		}
};
int main()
{
	Message msg1;
	Message msg2("kemm......,chhooooo");
	
	msg1.print();
	msg2.print();
	msg2.print("hu; majaama chu, tame kem chooooo...");
	
	return 0;
}