//Name: Hannah Gladish
//Auburn UserID: heg0006
//filename: hw2.cpp
//Development Environment: vim, g++, Linux
//Compile: g++ -o hw2 hw2.cpp
//Sample usage: ./hw2


//Compiler pre-directives
#include <iostream>
using namespace std; 

int main()
{

//Initiate variables
double numSweetToKillMouse, numMouseWeight, numPersonWeight, numSodas = 0.0;
const double DIET_SODA_SWEETNER = 0.001;

//Prompting user for how much sweetner needed to kill a mouse, mouse weight, and person weight

cout << "What is the amount of artificial sweetner needed to kill a mouse?" << endl;
cin >> numSweetToKillMouse;
cout << endl;
cout << "What is the weight of the mouse?" << endl;
cin >> numMouseWeight;
cout << endl;
cout << "What is the (final) weight of the dieter?" << endl;
cin >> numPersonWeight;
cout << endl;

//Calculate number of sodas that will kill person

numSodas = (numSweetToKillMouse * numPersonWeight) / (numMouseWeight * DIET_SODA_SWEETNER);

//Output the number of sodas needed to kill person

cout << "You can drink " << numSodas << " diet soda without dying as a result." << endl;

return 0;
}
