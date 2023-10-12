#include<iostream>
int main() {
	int n=5;
	double n1[n];
	double cubes[n];

	int i;

    // Input phase
	for(i=0; i<n; i++) {
		std::cout<<"ENTER " <<i + 1 << " NUMBER TO CREATE A CUBE "/*<<i + 1 */<< ":";
		std::cin >> n1[i];
	}
	// Calculation phase
	for(i=0; i<n; i++) {
		cubes[i] = n1[i] * n1[i] * n1[i] ;
	}
	std::cout << std::endl;
	
	std::cout<<"..........RESULTS OF CUBE...........\n";
 //Output phase
    for (int i = 0; i <n; i++) {
        std::cout << i+1 << " Numbers of " << "Cubes of the  " << n1[i] << "= ";
		std::cout << cubes[i] << "\n";
	std::cout << std::endl;
}
	
	return 0;
}

//#include <iostream>
//
//int main() {
//    const int numCount = 5;
//    double numbers[numCount];
//    double cubes[numCount];
//
//    // Input phase
//    for (int i = 0; i < numCount; i++) {
//        std::cout << "Enter number " << i + 1 << ": ";
//        std::cin >> numbers[i];
//    }
//
//    // Calculation phase
//    for (int i = 0; i < numCount; i++) {
//        cubes[i] = numbers[i] * numbers[i] * numbers[i];
//    }
//
//    // Output phase
//   // std::cout << "Cubes of the numbers are: ";
//    for (int i = 0; i < numCount; i++) {
//        std::cout << i+1 << " Numbers of " << "Cubes of the  " << numbers[i] << "= ";
//		std::cout << cubes[i] << "\n";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}
