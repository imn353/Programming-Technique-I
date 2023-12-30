#include <iostream>
using namespace std;

int main() {
	int num;
    cout << "Enter an integer number: ";
    cin >> num;
    
    int product = 1;
    int digit;
    
    do {
        digit = num % 10;
        product *= digit;
        num /= 10;
    } while (num != 0);

    if (product % 2 == 0) {
    	if (product % 3 == 0){
		cout << "The product is even and a multiple of 3";
		}
		else if (product % 5 == 0){
		cout << "The product is even and a multiple of 5";
		}
		else if (product % 3 == 0 && product % 5 == 0 ){
		cout << "The product is even and a multiple of both 3 and 5";
		}
		else{
			cout << "The product is even but not a multiple of both 3 and 5";
		}
	}
	else{
		if (product % 3 == 0) {
    	cout << "The product is odd and a multiple of 3";
		}
		else if (product % 5 == 0){
		cout << "The product is odd and a multiple of 5";
		}
		else if (product % 3 == 0 && product % 5 == 0 ){
		cout << "The product is odd and a multiple of both 3 and 5";
		}
		else{
		cout << "The product is odd but not a multiple of both 3 and 5";
		}
	}
	return 0;
}
