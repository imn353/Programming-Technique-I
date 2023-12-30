/* 
Iman Abadi Bin Mohd Nizwan (A23CS0084) 
Ahmad Adib Bin A.Mazlam (A23CS0205)
Section 03
Dr Nies Hui Wen
*/
#include <iostream>
#include <limits>
using namespace std;

void displayMainMenu();
void addBook(int &);
void displayLibrary(int);
void searchByTitle();

const int MAX_BOOKS = 5;

string title[MAX_BOOKS];
string author[MAX_BOOKS];
string publicationYear[MAX_BOOKS];

int main()
{
	int choice;
	int bookCount = 0;
	do
	{
		displayMainMenu();
		cout << "Enter your choice: ";
		while (true)
		{
			cin >> choice ;
		    if (!cin)
		    {
		      cout << "Please the the number according to the function displayed in the menu. Enter again " << endl;
		      cin.clear();
		      cin.ignore(numeric_limits<streamsize>::max(), '\n');
		      continue;
		    }
		    else break;
		}	

		
		switch (choice)
		{
			case 1:
				addBook(bookCount);
				break;
			case 2:
				displayLibrary(bookCount);
				break;
			case 3:
				searchByTitle();
				break;
			case 4:
				cout << "\nGoodbye!\n";
				break;	
		}
	}
	while(choice != 4);
	
	return 0;
}

void displayMainMenu()
{
	cout << "<<<<<Library Management System>>>>>\n";
	cout << "========================================\n";
	cout << "1. Add a Book\n";
	cout << "2. Display Library\n";
	cout << "3. Search by Title\n";
	cout << "4. Quit\n";
}

void addBook(int &bookCount)
{
	bookCount = 0 ;
	int static count = 0;
	if (count < MAX_BOOKS)
	{
		cin.ignore();
		cout << "\n";
		cout << "Enter book title: ";
		getline(cin, title[count]);
		cout << "\n";
		cout << "Enter author name: ";
		getline(cin, author[count]);
		cout << "\n";
		cout << "Enter publication year: ";
		getline(cin, publicationYear[count]);
		cout << "\n\n";
		cout << "Book added succesfully!";
		cout << "\n\n";
	}
	else if (count >= MAX_BOOKS)
		cout << endl << "The number of books that can be added has reached the maximum number." << endl << endl;
	
	bookCount = count;
	count++;
}

void displayLibrary(int bookCount)
{
	cout << "\n";
	cout << "Library Contents:\n";
	cout << "====================\n";
	if (bookCount > 0)
	{
		for (int i = 0; i <= bookCount; i++)
		{
			cout << "Title: " << title[i] << "\n";
			cout << "Author: " << author[i] << "\n";
			cout << "Year: " << publicationYear[i] << "\n\n";
		}
	}
	else
	cout << "No books are currently in the Library System.\n";
	cout << endl;
}

void searchByTitle()
{
	string search;
	cin.ignore();
	cout << "\nEnter the title to search: ";
	getline(cin, search);
	cout << endl;
	
	for (int i = 0; i <= MAX_BOOKS; i++)
	{
		if (search != title[i])
		{
			continue;		
		}
		
		else if  (search == title[i])
		{
			cout << "Book found :\n";
			cout << "====================\n";
			cout << "Title: " << title[i] << "\n";
			cout << "Author: " << author[i] << "\n";
			cout << "Year: " << publicationYear[i] << "\n\n";
			return;
		}
	}
	cout << "The book titled " << search << " is not in the Library System\n\n";	
}
