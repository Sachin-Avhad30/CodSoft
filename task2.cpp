//Task 2

//Simple Calculator

#include<iostream>

using namespace std;

class Calculator{
	private:
	int iValue1;
	int iValue2;
	public:
	void getData() {
		cout << "Enter the first number:";
		cin >> iValue1;
		cout << "Enter the second number:";
		cin >> iValue2;
	}
	void addition() {
		Calculator : getData();
		int iSum;
		iSum = iValue1 + iValue2;

		cout << "Addition of " << iValue1 << " and " << iValue2 << " is: " << iSum << endl;
		cout << "__________________________________" << endl;
	}

	void substraction() {
		Calculator : getData();
		int iSub;
		iSub = iValue1 - iValue2;

		cout << "Substraction of " << iValue1 << " and " << iValue2 << " is :" << iSub << endl;
		cout << "__________________________________" << endl;
	}

	void multiplication() {
		Calculator : getData();
		int iMul;
		iMul = iValue1 * iValue2;

		cout << "Multiplication of " << iValue1 << " and " << iValue2 << " is :" << iMul << endl;
		cout << "__________________________________" << endl;
	}

	void divison() {
		Calculator : getData();
		float fDiv;
		fDiv = (float)iValue1 / iValue2;
		cout << "Division of " << iValue1 << " and " << iValue2 << " is :" << fDiv << endl;
		cout << "__________________________________" << endl;
	}
};

int main() {
	Calculator c1;

	int iChoice,iNo1,iNo2;
	do {
		
		cout << "\n_____**Calculator**_____" << endl << "  1)Addition \n  2)Substraction \n  3)Multiplication \n  4)Division \n  5)Exit" << endl;
		cout << "__________________________________" << endl;

		cout << "Enter the choice:";
		cin >> iChoice;

		switch(iChoice) {
			case 1:
				c1.addition();
				break;

			case 2:
				c1.substraction();
				break;

			case 3:
				c1.multiplication();
				break;

			case 4:
				c1.divison();
				break;

			case 5:
				cout << "Exit......." << endl;
				break;
		}
	}while(iChoice != 5);

	return 0;
}