#include <iostream>
using namespace std;

int main()
{
	int num;
	do{
		cout << "Enter and integer: ";
	    cin >> num;
	}while(num==0);
	
	if (num%2==0)
	{
		cout << num << " is an even number"<< endl;
	}
	else
	{
		cout << num << " is odd and odd number"<< endl;
	} 

	cout << "Enter and integer: ";
	cin >> num;
	if (num%2==0)
	{
		cout << num << " is an even number"<< endl;
	}
	else
	{
		cout << num << " is odd and odd number"<<endl;
	} 
}
	return 0;
}
