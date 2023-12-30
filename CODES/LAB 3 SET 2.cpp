#include <iostream>
#include <string>
using namespace std;

// constants with the associated values
#define WASH 10.0 // the price of WASH service charge
#define VACUUM 7.0 // the price of VACUUM service charge
#define POLISH 15.0 // the price of POLISH service charge

void setType (string &);
void setPackage(int &);
float wash(string);
float vacuum(string);
float polish(string);

// Task 7: (i) Call the functions from Task 1 until Task 5.
int main() 
{
	string carType; // car type variable
	int wsPkg; // car wash service package
	float totalCharge = 0; // total service charge based on different wash service package with different car type
	
	// call setType function with the parameter carType
	setType(carType);
	// call setPackage function with the parameter wsPkg
	setPackage(wsPkg);
	// Task 7: (ii) totalCharge is the variable to hold the total service charge based on different wash service package with different car type (sedan or mpv).
	switch (wsPkg) 
	{
		case 1: 
			totalCharge = wash(carType);
			break;
		case 2: 
			totalCharge = vacuum(carType);
			break;
		case 3:
			totalCharge = polish(carType);
			break;
	}
	cout << endl;
		cout << "Total service charge is " << totalCharge;
	return 0;
}

// Task 1: Function to set car type
void setType(string &type) 
{
	do
	{
		cout << "Enter car type (sedan/mpv): ";
		cin >> type;
	}
	while (type != "sedan" && type != "mpv");
	cout << "\n";
}

// Task 2: Function to set wash service package
void setPackage(int &pkg) 
{
	cout << "1. Basic\n";
	cout << "2. Deluxe\n";
	cout << "3.. Deluxe\n";
	
	do
	{
		cout << "Choose washing service package (1/2/3): ";
		cin >> pkg;
	}
	while (pkg != 1 && pkg != 2 && pkg !=3);
	cout << endl;
}

// Task 3: Function to determine exterior wash service charge based on car type
float wash(string type) 
{
	float wash;
	
	if (type == "mpv")
		wash = WASH * 1.2;
	else 
		wash = WASH;
		
	cout << "Wash service charge is " << wash << endl;
	
	return wash;
}

// Task 4: Function to determine interior vacuum service charge based on car type
float vacuum(string type) 
{
	float vacuum;
	
	if (type == "mpv")
		vacuum = VACUUM * 1.05;
	else
		vacuum = VACUUM;
		
	cout << "Vacuum service charge is " << vacuum << endl;
	
	return vacuum;
}

// Task 5: Function to determine exterior polish service charge based on car type
float polish(string type) 
{
	float polish;
	
	if (type == "mpv")
		polish = POLISH * 1.2;
	else 
		polish = POLISH;
	
	cout << "Polish service charge is " << polish << endl;
	
	return polish;
}
 

