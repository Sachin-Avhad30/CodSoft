//Task 3: TIC-TAC-TOE GAME

#include<iostream>

using namespace std;
class TicTacToe {

	public:

	//data member
		char Board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
		string n1 = "X";
		string n2 = "O";
		int row;
		int column;
		char token = 'x';
		bool tie = false;

	//Member function

	// Display Function Display the game board
	void Display() {
		cout << "** Game Board **" << endl;
		cout << "   |   |   \n";
		cout << " " << Board[0][0] << " | " << Board[0][1] << " | " << Board[0][2] << " \n";
		cout << "___|___|___\n";
		cout << "   |   |   \n";
		cout << " " << Board[1][0] << " | " << Board[1][1] << " | " << Board[1][2] << " \n";
		cout << "___|___|___\n";
		cout << "   |   |   \n";
		cout << " " << Board[2][0] << " | " << Board[2][1] << " | " << Board[2][2] << " \n";
		cout << "   |   |   \n";
	}

	// Game Body 
	// Taking input and map into the Game board
	void Input() {
		int digit;
		row = 0;
		column = 0;
	
	
		if(token == 'x') {
			cout << "\n" << n1 << " please enter your between 1 To 9 choice:";
			cin >> digit;
			cout << "________________________________________________________" << endl;
			
		}
		if(token == '0') {
			cout << "\n" << n2 << " please enter your between 1 To choice:";
			cin >> digit;
			cout << "________________________________________________________" << endl;
		}

		

		if(digit >= 1 && digit <= 9) {

			if(digit == 1) {
				row = 0;
				column = 0;
			}
			if(digit == 2) {
				row = 0;
				column = 1;
			}
			if(digit == 3) {
				row = 0;
				column = 2;
			}
			if(digit == 4) {
				row = 1;
				column = 0;
			}
			if(digit == 5) {
				row = 1;
				column = 1;
			}
			if(digit == 6) {
				row = 1;
				column = 2;
			}
			if(digit == 7) {
				row = 2;
				column = 0;
			}
			if(digit == 8) {
				row = 2;
				column = 1;
			}
			if(digit == 9) {
				row = 2;
				column = 2;
			}


			if(Board[row][column] != 'x' && Board[row][column] != '0'){
				if(token == 'x') {
					Board[row][column] = 'x';
					token = '0';
				}
				else if(token == '0') {
					Board[row][column] = '0';
					token = 'x';
				}
			}
			else {
				cout << "These place is already occupied!! Choose another choice:" << endl;
				Input();
			}
		}

		else{
			cout << "Inavalid Choice Please enter the number between 1 to 9" << endl;
			Input();
		}
	
	}

	//This function is for getting result of the game 
	bool Result() {
		for(int i = 0; i < 3; i++) {
			//checking the horizontal and vertical matching of the input
			//If it is horizontally or vertically match the return result true
			if(Board[i][0] == Board[i][1] && Board[i][0] == Board[i][2] || Board[0][i] == Board[1][i] && Board[0][i] == Board[2][i]) {
				return true;
			}

			// Checking for digonal of board is matching
			if(Board[0][0] == Board[1][1] && Board[1][1] ==Board[2][2] || Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0]){
				return true;
			}
		}

		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				if(Board[i][j] != 'x' && Board[i][j] != '0') {
					return false;
				}
			}
		}
		tie = true;
		return false;
	}
};


int main(){

	TicTacToe t1;

	int ch,ch1;
	do{
		cout << "****Main Menu*****" << endl;
		cout << "  1) PLAY"<< endl;
		cout << "******************" << endl;
		cout << "Enter 1 for play:"; 
		cin >> ch;
		t1.Display();
		t1.token ='x';
		cout << "________________________________________________________" << endl;
		cout << "\n" << t1.n1 << " is player 1 player so he/she play first \n";
		cout << t1.n2 << " is player 2 player so he/she play second \n";
		cout << "________________________________________________________" << endl;
		for(int i = 1; i <= 9;i++) {
			t1.Display();
			cout << "________________________________________________________" << endl;
			t1.Input();
			if(t1.Result() == true){
				t1.Display();
				break;
			}
		}
		if(t1.token == 'x' && t1.tie == false) {
			cout << "________________________" << endl;
			cout << "\n******* " << t1.n2 << " Wins!!" << " *******" << endl;
			cout << "________________________" << endl;
		}
		else if(t1.token == '0' && t1.tie == false){
			cout << "________________________" << endl;
			cout << "\n******* " << t1.n1 << " Wins!!" << " *******" << endl;
			cout << "________________________" << endl;
		}
		else{
			cout << "________________________" << endl;
			cout << "\n********* Draw *********" << endl;
			cout << "________________________" << endl;
		}
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				t1.Board[i][j] = (char)('0'+ i * 3 + j + 1);
			}
		}
		cout << "  1) Play Again \n  2) Stop" << endl;
		cout << "Enter Choice:";
		cin >> ch1;
		cout << "**Exit**";

	}while(ch1 != 2);
	return 0;
}