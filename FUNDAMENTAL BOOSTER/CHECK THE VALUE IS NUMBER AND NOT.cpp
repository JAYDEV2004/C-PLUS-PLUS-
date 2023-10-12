#include<iostream>
int main() {
	int n;

	std::cout<<"enter the number =";
	std::cin>>n;

	if(n>=0 || n<=9) {
		std::cout<<"THIS IS THE NUMBER ="<<n<<std::endl;
	} else {
		std::cout <<"THIS IS NOT THE NUMBER = "<<n<<std::endl;
	}

	return 0;
}
