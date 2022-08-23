#include<iostream>
#include<fstream>
void Game();
void Help();
using namespace std;
int main()
{
	int op = 0;
	do {
		cout << "\t\t\t\t\t+----------------------------------------------------------------------------------------+" << endl;
		cout << "\t\t\t\t\t|                                                                                        |" << endl;
		cout << "\t\t\t\t\t|                                 GAME INSTRUCTIONS                                      |" << endl;
		cout << "\t\t\t\t\t|                                                                                        |" << endl;
		cout << "\t\t\t\t\t+----------------------------------------------------------------------------------------+" << endl;
		cout << "\t\t\t\t\t|                                                                                        |" << endl;
		cout << "\t\t\t\t\t|                                                                                        |" << endl;
		cout << "\t\t\t\t\t|                        +------------------------------------+                          |" << endl;
		cout << "\t\t\t\t\t|                        |                                    |                          |" << endl;
		cout << "\t\t\t\t\t|                        |     PRESS 1 FOR START THE GAME     |                          |" << endl;
		cout << "\t\t\t\t\t|                        |     PRESS 2 FOR THE HELP           |                          |" << endl;
		cout << "\t\t\t\t\t|                        |     PRESS 3 FOR QUIT THE GAME      |                          |" << endl;
		cout << "\t\t\t\t\t|                        +------------------------------------+                          |" << endl;
		cout << "\t\t\t\t\t|                                                                                        |" << endl;
		cout << "\t\t\t\t\t|                                                                                        |" << endl;
		cout << "\t\t\t\t\t+----------------------------------------------------------------------------------------+" << endl;
		cout << "\t\t\t\t\t                                  "; cin >> op;
		switch (op)
		{
		case 1:
			Game();
			break;
		case 2:
			Help();
			break;
		case 3:
			exit(0);
		default:
			cout << "\t\t\t\t\t|                         Invalid Input                 |" << endl;
			break;
		}
	} 
	
	
	while (1);
	if (op == 1)
	{
		Game();
	}

	return 0;
}

void Game()
{
	ofstream fout("Score.txt", ios::app);
	int count = 0;
	char ans = '\0';
	char name[20];
	cout << "\t\t\t\t\t                                    ENETR YOUR USER-NAME:";
	cin >> name;
	system("cls");
	for (int i = 0; i < 6; i++)
	{
		if (i == 0) {
			cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
			cout << "\t\t\t\t\t|                 Which of the following is a Palindrome number?                 |" << endl;
			cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
			cout << "\t\t\t\t\t| A.42042                                                                        |" << endl;
			cout << "\t\t\t\t\t| B.101010                                                                       |" << endl;
			cout << "\t\t\t\t\t| C.23232                                                                        |" << endl;
			cout << "\t\t\t\t\t| D.01234                                                                        |" << endl;
			cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
			cout << "\t\t\t\t\t                                  "; cin >> ans;
			if (ans == 'C') {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|                             CORRECT ANSWER!!!!                                 |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				count++;
			}
			else {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|                  WRONGE ANSWER!!!!The correct answer is C.23232                |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				count--;
			}

		}

		if (i == 1) {
			cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
			cout << "\t\t\t\t\t|         The country with the highest environmental performance index   ?       |" << endl;
			cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
			cout << "\t\t\t\t\t| A.France                                                                       |" << endl;
			cout << "\t\t\t\t\t| B.Denmark                                                                      |" << endl;
			cout << "\t\t\t\t\t| C.Switzerland                                                                  |" << endl;
			cout << "\t\t\t\t\t| D.Finland                                                                      |" << endl;
			cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
			cout << "\t\t\t\t\t                                  "; cin >> ans;

			if (ans == 'C') {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|                             CORRECT ANSWER!!!!                                 |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				count++;
			}
			else {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|          WRONGE ANSWER!!!! The correct answer is C.Switzerland                 |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				count--;
			}


		}
		if (i == 2) {
			cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
			cout << "\t\t\t\t\t|          Which of the following data type is supported in C++ but not in C?    |" << endl;
			cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
			cout << "\t\t\t\t\t| A.bool                                                                         |" << endl;
			cout << "\t\t\t\t\t| B.int                                                                          |" << endl;
			cout << "\t\t\t\t\t| C.float                                                                        |" << endl;
			cout << "\t\t\t\t\t| D.double                                                                       |" << endl;
			cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
			cout << "\t\t\t\t\t                                  "; cin >> ans;

			if (ans == 'A') {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|                             CORRECT ANSWER!!!!                                 |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				count++;
			}
			else {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|               WRONGE ANSWER!!!! The correct answer is A.boll                   |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				count--;
			}


		}
		if (i == 3) {
			cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
			cout << "\t\t\t\t\t|        Who was awarded the youngest player award in Fifa World Cup 2006?       |" << endl;
			cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
			cout << "\t\t\t\t\t| A.Rooney                                                                       |" << endl;
			cout << "\t\t\t\t\t| B.Lucas Podolski                                                               |" << endl;
			cout << "\t\t\t\t\t| C.Lionel Messi                                                                 |" << endl;
			cout << "\t\t\t\t\t| D.Christiano Ronaldo                                                           |" << endl;
			cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
			cout << "\t\t\t\t\t                                  "; cin >> ans;

			if (ans == 'B') {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|                             CORRECT ANSWER!!!!                                 |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				count++;
			}
			else {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|          WRONGE ANSWER!!!! The correct answer is B.Lucas Podolski              |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				count--;
			}


		}
		if (i == 4) {
			cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
			cout << "\t\t\t\t\t|                 Which is the third highest mountain in the world?              |" << endl;
			cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
			cout << "\t\t\t\t\t| A.Mt.Kilimanjaro                                                               |" << endl;
			cout << "\t\t\t\t\t| B.Mt.K2                                                                        |" << endl;
			cout << "\t\t\t\t\t| C.Mt.Makalu                                                                    |" << endl;
			cout << "\t\t\t\t\t| D.Mt.Kanchanjungha                                                             |" << endl;
			cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
			cout << "\t\t\t\t\t                                  "; cin >> ans;

			if (ans == 'D') {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|                             CORRECT ANSWER!!!!                                 |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				count++;
			}
			else {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|          WRONGE ANSWER!!!! The correct answer is D.Mt.Kanchanjungha            |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				count--;
			}


		}
		if (i == 5) {
			cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
			cout << "\t\t\t\t\t|       Identify the correct extension of the user-defined header file in C++?   |" << endl;
			cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
			cout << "\t\t\t\t\t| A.h                                                                            |" << endl;
			cout << "\t\t\t\t\t| B.cpp                                                                          |" << endl;
			cout << "\t\t\t\t\t| C.hg                                                                           |" << endl;
			cout << "\t\t\t\t\t| D.ff                                                                           |" << endl;
			cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
			cout << "\t\t\t\t\t                                  "; cin >> ans;

			if (ans == 'A') {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|                             CORRECT ANSWER!!!!                                 |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				count++;
			}
			else {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|          WRONGE ANSWER!!!! The correct answer is A.h                           |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				count--;
			}

		}
		if (i == 6)
			break;
	}
	if (count < 0)
		count = 0;
	system("cls");
	cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
	cout << "\t\t\t\t\t         PLAYER NAME:" << name << "     PLAYER SCORE:" << count << "   " << endl;

	bool next = false;
	if (count >= 4)
	{

		cout << "\t\t\t\t\t         YOU ARE QUALIFY FOR NEXT ROUND                                              " << endl;
		cout << "\t\t\t\t\t         BEST OF LUCK!!!                                                             " << endl;
		cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
		next = true;
	}
	else
	{

		cout << "\t\t\t\t\t         BETTER LUCK FOR NEXT TIME                                                " << endl;
		cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
	}

	if (true)
	{
		char opt = '\0';
		cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
		cout << "\t\t\t\t\t|                                CHALLANGE ROUND                                 |" << endl;
		cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
		for (int j = 0; j < 10; j++)
		{
			if (j == 0) {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|                     Identify the incorrect constructor type?                   |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t| A.Friend Constructor                                                           |" << endl;
				cout << "\t\t\t\t\t| B.Default Constructor                                                          |" << endl;
				cout << "\t\t\t\t\t| C.Parameterize Constructor                                                     |" << endl;
				cout << "\t\t\t\t\t| D.Copy Constructor                                                             |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t                                  "; cin >> opt;

				if (opt == 'A') {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|                             CORRECT ANSWER!!!!                                 |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count++;
				}
				else {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|          WRONGE ANSWER!!!! The correct answer is A.Friend Constructor          |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count--;
				}
			}



			if (j == 1) {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|                             C++ uses which approach ?                          |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t| A.Right-Left                                                                   |" << endl;
				cout << "\t\t\t\t\t| B.Left-Right                                                                   |" << endl;
				cout << "\t\t\t\t\t| C.Bottom-Up                                                                    |" << endl;
				cout << "\t\t\t\t\t| D.Up-Bottom                                                                    |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t                                  "; cin >> opt;

				if (opt == 'C') {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|                             CORRECT ANSWER!!!!                                 |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count++;
				}
				else {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|          WRONGE ANSWER!!!! The correct answer is C.Bottom-Up                   |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count--;
				}
			}

			if (j == 2) {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|                       When can an inline function be expanded?                 |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t| A.Run Time                                                                     |" << endl;
				cout << "\t\t\t\t\t| B.Compile Time                                                                 |" << endl;
				cout << "\t\t\t\t\t| C.Never get expand                                                             |" << endl;
				cout << "\t\t\t\t\t| D.All of the above                                                             |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t                                  "; cin >> opt;

				if (opt == 'B') {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|                             CORRECT ANSWER!!!!                                 |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count++;
				}
				else {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|          WRONGE ANSWER!!!! The correct answer is B.Compile Time                |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count--;
				}
			}

			if (j == 3) {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|  Identify the correct function from which the execution of C++ program starts? |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t| A.main()                                                                       |" << endl;
				cout << "\t\t\t\t\t| B.new()                                                                        |" << endl;
				cout << "\t\t\t\t\t| C.pow()                                                                        |" << endl;
				cout << "\t\t\t\t\t| D.start()                                                                      |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t                                  "; cin >> opt;

				if (opt == 'A') {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|                             CORRECT ANSWER!!!!                                 |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count++;
				}
				else {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|          WRONGE ANSWER!!!! The correct answer is A.nain()                      |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count--;
				}
			}

			if (j == 4) {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|                      The constants in C++ are also known as?                   |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t| A.Pre-Processor                                                                |" << endl;
				cout << "\t\t\t\t\t| B.Const                                                                        |" << endl;
				cout << "\t\t\t\t\t| C.Literals                                                                     |" << endl;
				cout << "\t\t\t\t\t| D.None                                                                         |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t                                  "; cin >> opt;

				if (opt == 'C') {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|                             CORRECT ANSWER!!!!                                 |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count++;
				}
				else {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|          WRONGE ANSWER!!!! The correct answer is C.literals                    |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count--;
				}
			}


			if (j == 5) {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|      Using which of the following keywords can an exception be generated?      |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t| A.Thew                                                                         |" << endl;
				cout << "\t\t\t\t\t| B.Throws                                                                       |" << endl;
				cout << "\t\t\t\t\t| C.Catch                                                                        |" << endl;
				cout << "\t\t\t\t\t| D.Throw                                                                        |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t                                  "; cin >> opt;

				if (opt == 'D') {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|                             CORRECT ANSWER!!!!                                 |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count++;
				}
				else {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|          WRONGE ANSWER!!!! The correct answer is D.Throw                       |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count--;
				}
			}

			if (j == 6) {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|               Which of the following types is the language C++?                |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t| A.Procedual                                                                    |" << endl;
				cout << "\t\t\t\t\t| B.Dynamically typed language                                                   |" << endl;
				cout << "\t\t\t\t\t| C.Statically typed language                                                    |" << endl;
				cout << "\t\t\t\t\t| D.All of the above                                                             |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t                                  "; cin >> opt;

				if (opt == 'C') {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|                             CORRECT ANSWER!!!!                                 |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count++;
				}
				else {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|          WRONGE ANSWER!!!! The correct answer is C.Statically typed language   |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count--;
				}
			}
			if (j ==7) {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|            Identify the storage classes that have global visibility?           |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t| A.Extern                                                                       |" << endl;
				cout << "\t\t\t\t\t| B.Dynamic                                                                      |" << endl;
				cout << "\t\t\t\t\t| C.Static                                                                       |" << endl;
				cout << "\t\t\t\t\t| D.Auto                                                                         |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t                                  "; cin >> opt;

				if (opt == 'A') {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|                             CORRECT ANSWER!!!!                                 |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count++;
				}
				else {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|          WRONGE ANSWER!!!! The correct answer is A.Extern                      |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count--;
				}
			}

			if (j == 8) {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|                             What does a C++ class hold?                        |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t| A.Function                                                                     |" << endl;
				cout << "\t\t\t\t\t| B.Array                                                                        |" << endl;
				cout << "\t\t\t\t\t| C.Data                                                                         |" << endl;
				cout << "\t\t\t\t\t| D.Both A and B                                                                 |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t                                  "; cin >> opt;

				if (opt == 'D') {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|                             CORRECT ANSWER!!!!                                 |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count++;
				}
				else {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|          WRONGE ANSWER!!!! The correct answer is D.Both A and B                |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count--;
				}
			}

			if (j == 9) {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t| Under which pillar of OOPS does base class and derived class relationship come |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t| A.Polymorphism                                                                 |" << endl;
				cout << "\t\t\t\t\t| B.Inheritance                                                                  |" << endl;
				cout << "\t\t\t\t\t| C.Encapulation                                                                 |" << endl;
				cout << "\t\t\t\t\t| D.Abstraction                                                                  |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t                                  "; cin >> opt;

				if (opt == 'B') {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|                             CORRECT ANSWER!!!!                                 |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count++;
				}
				else {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|          WRONGE ANSWER!!!! The correct answer is B.Inheritance                 |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count--;
				}
			}
			if (j ==10) {
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t|               Which of the following is not a type of inheritance?             |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t| A.Mutiple                                                                      |" << endl;
				cout << "\t\t\t\t\t| B.Muptilevel                                                                   |" << endl;
				cout << "\t\t\t\t\t| C.Distributed                                                                  |" << endl;
				cout << "\t\t\t\t\t| D.Heirarchial                                                                  |" << endl;
				cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
				cout << "\t\t\t\t\t                                  "; cin >> opt;

				if (opt == 'B') {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|                             CORRECT ANSWER!!!!                                 |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count++;
				}
				else {
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					cout << "\t\t\t\t\t|          WRONGE ANSWER!!!! The correct answer is C.Distributed                 |" << endl;
					cout << "\t\t\t\t\t+--------------------------------------------------------------------------------+" << endl;
					count--;
				}
			}
		}

		system("cls");
		cout << "\t\t\t\t\t+----------------------------------------------------------------------------------------+" << endl;
		cout << "\t\t\t\t\t         PLAYER NAME:" << name << "     FINALL SCORE:" << count << "   " << endl;
		cout << "\t\t\t\t\t+----------------------------------------------------------------------------------------+" << endl;

		if (fout.is_open())
			fout << "Player name:" << name << "         " << "Player Score:" << count << endl;
		else
			cout << "Fout file is not found" << endl;

	}
}
void Help()
{
	system("cls");
	cout << "\t\t\t\t\t+----------------------------------------------------------------------------------------+" << endl;
	cout << "\t\t\t\t\t|                                                                                        |" << endl;
	cout << "\t\t\t\t\t|                                 GAME INSTRUCTIONS                                      |" << endl;
	cout << "\t\t\t\t\t|                                                                                        |" << endl;
	cout << "\t\t\t\t\t+----------------------------------------------------------------------------------------+" << endl;
	cout << "\t\t\t\t\t|        +--------------------------------------------------------------------+          |" << endl;
	cout << "\t\t\t\t\t|        |>> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND |          |" << endl;
	cout << "\t\t\t\t\t|        |                                                                    |          |" << endl;
	cout << "\t\t\t\t\t|        |>> In warmup round you will be asked a total of 6 questions to test |          |" << endl;
	cout << "\t\t\t\t\t|        |your general knowledge each right answer will be awarded 1 Marks You|          |" << endl;
	cout << "\t\t\t\t\t|        |will be eligible to play CHALLANGE ROUND if you can give at least 4 |          |" << endl;
	cout << "\t\t\t\t\t|        |right answers otherwise you can't continue the game                 |          |" << endl;
	cout << "\t\t\t\t\t|        |                                                                    |          |" << endl;
	cout << "\t\t\t\t\t|        |>> In the CHALLANGE ROUND you will be asked 10 questions each right |          |" << endl;
	cout << "\t\t\t\t\t|        |answer will be awarded 1 Marks                                      |          |" << endl;
	cout << "\t\t\t\t\t|        |                                                                    |          |" << endl;
	cout << "\t\t\t\t\t|        |>> You will be given 4 options and you have to press A, B ,C or D   |          |" << endl;
	cout << "\t\t\t\t\t|        |for the right option                                                |          |" << endl;
	cout << "\t\t\t\t\t|        |                                                                    |          |" << endl;
	cout << "\t\t\t\t\t|        |>> 1 Marks is deduct on wrong answer                                |          |" << endl;
	cout << "\t\t\t\t\t|        |                                                                    |          |" << endl;
	cout << "\t\t\t\t\t|        |                            BEST OF LUCK                            |          |" << endl;
	cout << "\t\t\t\t\t|        +--------------------------------------------------------------------+          |" << endl;
	cout << "\t\t\t\t\t|                                                                                        |" << endl;
	cout << "\t\t\t\t\t+----------------------------------------------------------------------------------------+" << endl;
}