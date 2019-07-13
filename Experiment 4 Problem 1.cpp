#include<iostream>
#include<conio.h>

using namespace std;

int addition(int x, int y)
{
	int z = x + y;
	return z;
}

int subtraction(int x, int y)
{
	int z = x - y;
	return z;
}

int multiplication(int x, int y)
{
	int z = x * y;
	return z;
}

int division(int x, int y)
{
	int z = x / y;
	return z;
}

int modulus(int x, int y)
{
	int z = x % y;
	return z;
}




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
				cout << "\nENTER YOUR TWO NUMBERS: \n";
				cin >> x;
				cin >> y;
				int a; 
				a = addition(x,y);
				cout << "\nRESULT: " << a;
				break;
			case 2: //SUBTRACTION
				cout << "\nENTER YOUR TWO NUMBERS: \n";
				cin >> x;
				cin >> y;
				int s; 
				s = subtraction(x,y);
				cout << "\nRESULT: " << s;
				break;
			case 3: //MULTIPLICATION
				cout << "\nENTER YOUR TWO NUMBERS: \n";
				cin >> x;
				cin >> y;
				int m; 
				m = multiplication(x,y);
				cout << "\nRESULT: " << m;
				break;
			case 4: //DIVISION
				cout << "\nENTER YOUR TWO NUMBERS: \n";
				cin >> x;
				cin >> y;
				int d; 
				d = division(x,y);
				cout << "\nRESULT: " << d;
				break;
			case 5: //MODULUS
				cout << "\nENTER YOUR TWO NUMBERS: \n";
				cin >> x;
				cin >> y;
				int mod;
				/*mod = modulus(x,y);*/ // WON'T WORK FOR SOME REASON
				mod = x % y;
				cout << "\nRESULT: " << mod;
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
		cout << "YOU MUST CHOOSE BETWEEN Y OR N ONLY" << endl;
		
					
	}


	getch();
	return 0;
}
