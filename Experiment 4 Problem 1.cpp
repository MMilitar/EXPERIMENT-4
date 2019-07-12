#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int choice;
	int x, y;
	
	char response;
	
	bool goagain = true;
	while(goagain == true)
	{
		cout << "MENU:\n";
		cout << "\t1. ADD\n";
		cout << "\t2. SUBTRACT\n";
		cout << "\t3. MULTIPLY\n";
		cout << "\t4. DIVIDE\n";
		cout << "\t5. MODULUS\n";
		
		cout << "\nENTER YOUR CHOICE(1-5): ";
		cin >> choice;
		
		switch(choice)
		{
			case 1: //ADDITION
				cout << "\nENTER YOU TWO NUMBERS: \n";
				cin >> x;
				cin >> y;
				cout << "\nRESULT: " << x + y;
				break;
			case 2: //SUBTRACTION
				cout << "\nENTER YOU TWO NUMBERS: \n";
				cin >> x;
				cin >> y;
				cout << "\nRESULT: " << x - y;
				break;
			case 3: //MULTIPLICATION
				cout << "\nENTER YOU TWO NUMBERS: \n";
				cin >> x;
				cin >> y;
				cout << "\nRESULT: " << x * y;
				break;
			case 4: //DIVISION
				cout << "\nENTER YOU TWO NUMBERS: \n";
				cin >> x;
				cin >> y;
				cout << "\nRESULT: " << x / y;
				break;
			case 5: //MODULUS
				cout << "\nENTER YOU TWO NUMBERS: \n";
				cin >> x;
				cin >> y;
				cout << "\nRESULT: " << x % y;
				break;
			default:
				cout << "\nYOU MUST ENTER A NUMBER BETWEEN 1-5";
		}
	cout << "\n\nCONTINUE?(Y/N) : ";
	cin >> response;
		
	if(response == 'n' || response == 'N')
		goagain = false;
	else if(response == 'y' || response == 'Y')
		cout << endl;
	else
		cout <<"YOU MUST CHOOSE BETWEEN Y OR N ONLY" << endl;
		return 0;
		
					
	}


	getch();
	return 0;
}
