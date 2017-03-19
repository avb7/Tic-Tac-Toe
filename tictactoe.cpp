// TIC TAC TOE CONSOLE.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct points{
	string board[3][3];
}coordinate;
struct information{
	string name;
	string symbol;
}player1, player2;

int game();

int main()
{
	system("color F0");
	int board[3][3];
	string symbol[3][3], user_choice, p1_name, p2_name;

main_menu:
	cout << "   _________________________________________________________________________"<< endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |   ____________          ____________           ____________             |" << endl;
	cout << "  |        |                     |                      |                   |" << endl;
	cout << "  |        |    o    ____        |    ____   ____       |   ____   ____     |" << endl;
	cout << "  |        |    |   |            |   |    | |           |  |    | |         |" << endl;
	cout << "  |        |    |   |            |   |----| |           |  |    | |----     |" << endl;
	cout << "  |        |    |   |____        |   |    | |____       |  |____| |____     |" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |_________________________________________________________________________|" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |   GAME MENU :-                                                          |"<<endl;
	cout << "  |   1) Start the Game                                                     |" << endl;
	cout << "  |   2) View Instructions                                                  |" << endl;
	cout << "  |   3) Credits                                                            |" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |_________________________________________________________________________|" << endl;

	cout <<endl<< "   ENTER OPTION NUMBER [EX 1-3] : ";
	cin >> user_choice;

	if (user_choice == "1"){
		game();
	}
	else if (user_choice == "2"){
		system("cls");
		cout << "   _________________________________________________________________________" << endl;
		cout << "  |                                                                         |" << endl;
		cout << "  |  GAME INSTRUCTIONS                                                      |" << endl;
		cout << "  |_________________________________________________________________________|" << endl;
		cout << "  |                                                                         |" << endl;
		cout << "  |    ____________________                                                 |" << endl;
		cout << "  |   |      |      |      |    1) Enter the box number to insert X or O.   |" << endl;
		cout << "  |   |   1  |   2  |   3  |       when asked.                              |" << endl;
		cout << "  |   |______|______|______|    2) The players take turns putting their     |" << endl;
		cout << "  |   |      |      |      |       symbol on the table                      |" << endl;
		cout << "  |   |   4  |   5  |   6  |    3) The first player to have 3 symbols in    |" << endl;
		cout << "  |   |______|______|______|       a row, whether it is horizontally,       |" << endl;
		cout << "  |   |      |      |      |       vertically, or diagnonally, is the       |" << endl;
		cout << "  |   |   7  |   8  |   9  |       winner.                                  |" << endl;
		cout << "  |   |______|______|______|                                                |" << endl;
		cout << "  |                                                                         |" << endl;
		cout << "  |_________________________________________________________________________|" << endl;
		cout << endl << "   ";
		system("pause");
		system("cls");
		goto main_menu;
		
	}
	else if (user_choice == "3"){
		system("cls");
		cout << "   _________________________________________________________________________" << endl;
		cout << "  |                                                                         |" << endl;
		cout << "  |  CREDITS/PROJECT INFORMATION                                            |" << endl;
		cout << "  |_________________________________________________________________________|" << endl;
		cout << "  |                                                                         |" << endl;
		cout << "  |    ____________________                                                 |" << endl;
		cout << "  |   |      |      |      |       This game is developed by :-             |" << endl;
		cout << "  |   |   T  |   I  |   C  |       ADITYA BHATNAGAR                         |" << endl;
		cout << "  |   |______|______|______|                                                |" << endl;
		cout << "  |   |      |      |      |       TITLE: Tic Tac Toe [Console]             |" << endl;
		cout << "  |   |   T  |   A  |   C  |       CS PROJECT 2013                          |" << endl;
		cout << "  |   |______|______|______|       CLASS 11                                 |" << endl;
		cout << "  |   |      |      |      |                                                |" << endl;
		cout << "  |   |   T  |   O  |   E  |                                                |" << endl;
		cout << "  |   |______|______|______|                                                |" << endl;
		cout << "  |                                                                         |" << endl;
		cout << "  |_________________________________________________________________________|" << endl;
		cout << endl << "   ";
		system("pause");
		system("cls");
		goto main_menu;
	
	}
	else{
		system("cls");
		cout << endl << "   ERROR. PLEASE TRY AGAIN." << endl;
		goto main_menu;
	}

	return 0;
}
int game(){
	string board_coordinate;

	//MAKING ALL COORDINATES STRINGLESS
	for (int i = 0; i <= 2; i++){
		for (int j = 0; j <= 2; j++){
			coordinate.board[i][j] = " ";
		}
	}
	//PLAYER 1 INFORMATION 
	system("cls");
player1_info:
	cout << "   _________________________________________________________________________" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |  PLAYER 1				                                    |" << endl;
	cout << "  |_________________________________________________________________________|" << endl;
	cout << endl << "    ENTER YOUR NAME: ";
	cin >> player1.name;
	cout << "    CHOOSE YOUR SYMBOL [X or O only]: ";
	cin >> player1.symbol;
	if (player1.symbol == "X" || player1.symbol == "x"){
		player1.symbol = "X";   //Making sure that the symbol is capitalized
		player2.symbol = "O";
		system("cls");
	}
	else if (player1.symbol == "O" || player1.symbol == "o"){
		player1.symbol = "O";
		player2.symbol = "X";
		system("cls");
	}
	else {
		system("cls");
		cout << endl << "   ERROR. PLEASE TRY AGAIN." << endl;
		goto player1_info;
		
	}
 //PLAYER 2 INFORMATION
	cout << "   _________________________________________________________________________" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |  PLAYER 2				                                    |" << endl;
	cout << "  |_________________________________________________________________________|" << endl;
	cout << endl << "    ENTER YOUR NAME: ";
	cin >> player2.name;
	cout << "    YOUR SYMBOL : ";
	cout << player2.symbol << endl;
	cout << endl << "   ";
	system("pause");
	system("cls");

	//PLAYER INFO OVER
	//PLAYER 1 TURN 1
	cout << "   _________________________________________________________________________" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |  PLAYER 1's TURN                                                        |" << endl;
	cout << "  |_________________________________________________________________________|" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |    GAME BOARD                                 BOARD MAP                 |" << endl;
	cout << "  |    ____________________                       ____________________      |" << endl;
	cout << "  |   |      |      |      |                     |      |      |      |     |" << endl;
	cout << "  |   |  " << coordinate.board[0][0] << "   |  " << coordinate.board[0][1] << "   |  " << coordinate.board[0][2] << "   |                     |   1  |   2  |   3  |     |" << endl;
	cout << "  |   |______|______|______|                     |______|______|______|     |" << endl;
	cout << "  |   |      |      |      |                     |      |      |      |     |" << endl;
	cout << "  |   |  " << coordinate.board[1][0] << "   |  " << coordinate.board[1][1] << "   |  " << coordinate.board[1][2] << "   |                     |   4  |   5  |   6  |     |" << endl;
	cout << "  |   |______|______|______|                     |______|______|______|     |" << endl;
	cout << "  |   |      |      |      |                     |      |      |      |     |" << endl;
	cout << "  |   |  " << coordinate.board[2][0] << "   |  " << coordinate.board[2][1] << "   |  " << coordinate.board[2][2] << "   |                     |   7  |   8  |   9  |     |" << endl;
	cout << "  |   |______|______|______|                     |______|______|______|     |" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |_________________________________________________________________________|" << endl;
	cout << endl << "   IN WHICH BOX DO YOU WANT TO PUT IN YOUR SYMBOL? [EX 1-9] : ";
	cin >> board_coordinate;
	if (board_coordinate == "1"){
		coordinate.board[0][0] = "X";	 
	}
	else if (board_coordinate == "2"){
		coordinate.board[0][1] = "X";
    }
	else if (board_coordinate == "3"){
		coordinate.board[0][2] = "X";
	}
	else if (board_coordinate == "4"){
		coordinate.board[1][0] = "X";
	}
	else if (board_coordinate == "5"){
		coordinate.board[1][1] = "X";
	}
	else if (board_coordinate == "6"){
		coordinate.board[1][2] = "X";
	}
	else if (board_coordinate == "7"){
		coordinate.board[2][0] = "X";	
	}
	else if (board_coordinate == "8"){
		coordinate.board[2][1] = "X";	
	}
	else if (board_coordinate == "9"){
		coordinate.board[2][2] = "X";	
	}
	else{}

	system("cls");
	//PLAYER 2 TURN 1
	cout << "   _________________________________________________________________________" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |  PLAYER 2's TURN                                                        |" << endl;
	cout << "  |_________________________________________________________________________|" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |    GAME BOARD                                 BOARD MAP                 |" << endl;
	cout << "  |    ____________________                       ____________________      |" << endl;
	cout << "  |   |      |      |      |                     |      |      |      |     |" << endl;
	cout << "  |   |  " << coordinate.board[0][0] << "   |  " << coordinate.board[0][1] << "   |  " << coordinate.board[0][2] << "   |                     |   1  |   2  |   3  |     |" << endl;
	cout << "  |   |______|______|______|                     |______|______|______|     |" << endl;
	cout << "  |   |      |      |      |                     |      |      |      |     |" << endl;
	cout << "  |   |  " << coordinate.board[1][0] << "   |  " << coordinate.board[1][1] << "   |  " << coordinate.board[1][2] << "   |                     |   4  |   5  |   6  |     |" << endl;
	cout << "  |   |______|______|______|                     |______|______|______|     |" << endl;
	cout << "  |   |      |      |      |                     |      |      |      |     |" << endl;
	cout << "  |   |  " << coordinate.board[2][0] << "   |  " << coordinate.board[2][1] << "   |  " << coordinate.board[2][2] << "   |                     |   7  |   8  |   9  |     |" << endl;
	cout << "  |   |______|______|______|                     |______|______|______|     |" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |_________________________________________________________________________|" << endl;
	cout << endl << "   IN WHICH BOX DO YOU WANT TO PUT IN YOUR SYMBOL? [EX 1-9] : ";
	cin >> board_coordinate;
	if (board_coordinate == "1"){
		coordinate.board[0][0] = "O";
	}
	else if (board_coordinate == "2"){
		coordinate.board[0][1] = "O";
	}
	else if (board_coordinate == "3"){
		coordinate.board[0][2] = "O";
	}
	else if (board_coordinate == "4"){
		coordinate.board[1][0] = "O";
	}
	else if (board_coordinate == "5"){
		coordinate.board[1][1] = "O";
	}
	else if (board_coordinate == "6"){
		coordinate.board[1][2] = "O";
	}
	else if (board_coordinate == "7"){
		coordinate.board[2][0] = "O";
	}
	else if (board_coordinate == "8"){
		coordinate.board[2][1] = "O";
	}
	else if (board_coordinate == "9"){
		coordinate.board[2][2] = "O";
	}
	else{}
	system("cls");
	//PLAYER 1 TURN 2
	cout << "   _________________________________________________________________________" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |  PLAYER 1's TURN                                                        |" << endl;
	cout << "  |_________________________________________________________________________|" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |    GAME BOARD                                 BOARD MAP                 |" << endl;
	cout << "  |    ____________________                       ____________________      |" << endl;
	cout << "  |   |      |      |      |                     |      |      |      |     |" << endl;
	cout << "  |   |  " << coordinate.board[0][0] << "   |  " << coordinate.board[0][1] << "   |  " << coordinate.board[0][2] << "   |                     |   1  |   2  |   3  |     |" << endl;
	cout << "  |   |______|______|______|                     |______|______|______|     |" << endl;
	cout << "  |   |      |      |      |                     |      |      |      |     |" << endl;
	cout << "  |   |  " << coordinate.board[1][0] << "   |  " << coordinate.board[1][1] << "   |  " << coordinate.board[1][2] << "   |                     |   4  |   5  |   6  |     |" << endl;
	cout << "  |   |______|______|______|                     |______|______|______|     |" << endl;
	cout << "  |   |      |      |      |                     |      |      |      |     |" << endl;
	cout << "  |   |  " << coordinate.board[2][0] << "   |  " << coordinate.board[2][1] << "   |  " << coordinate.board[2][2] << "   |                     |   7  |   8  |   9  |     |" << endl;
	cout << "  |   |______|______|______|                     |______|______|______|     |" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |_________________________________________________________________________|" << endl;
	cout << endl << "   IN WHICH BOX DO YOU WANT TO PUT IN YOUR SYMBOL? [EX 1-9] : ";
	cin >> board_coordinate;
	if (board_coordinate == "1"){
		coordinate.board[0][0] = "X";
	}
	else if (board_coordinate == "2"){
		coordinate.board[0][1] = "X";
	}
	else if (board_coordinate == "3"){
		coordinate.board[0][2] = "X";
	}
	else if (board_coordinate == "4"){
		coordinate.board[1][0] = "X";
	}
	else if (board_coordinate == "5"){
		coordinate.board[1][1] = "X";
	}
	else if (board_coordinate == "6"){
		coordinate.board[1][2] = "X";
	}
	else if (board_coordinate == "7"){
		coordinate.board[2][0] = "X";
	}
	else if (board_coordinate == "8"){
		coordinate.board[2][1] = "X";
	}
	else if (board_coordinate == "9"){
		coordinate.board[2][2] = "X";
	}
	else{}
	system("cls");

	//PLAYER 2 TURN 2
	cout << "   _________________________________________________________________________" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |  PLAYER 1's TURN                                                        |" << endl;
	cout << "  |_________________________________________________________________________|" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |    GAME BOARD                                 BOARD MAP                 |" << endl;
	cout << "  |    ____________________                       ____________________      |" << endl;
	cout << "  |   |      |      |      |                     |      |      |      |     |" << endl;
	cout << "  |   |  " << coordinate.board[0][0] << "   |  " << coordinate.board[0][1] << "   |  " << coordinate.board[0][2] << "   |                     |   1  |   2  |   3  |     |" << endl;
	cout << "  |   |______|______|______|                     |______|______|______|     |" << endl;
	cout << "  |   |      |      |      |                     |      |      |      |     |" << endl;
	cout << "  |   |  " << coordinate.board[1][0] << "   |  " << coordinate.board[1][1] << "   |  " << coordinate.board[1][2] << "   |                     |   4  |   5  |   6  |     |" << endl;
	cout << "  |   |______|______|______|                     |______|______|______|     |" << endl;
	cout << "  |   |      |      |      |                     |      |      |      |     |" << endl;
	cout << "  |   |  " << coordinate.board[2][0] << "   |  " << coordinate.board[2][1] << "   |  " << coordinate.board[2][2] << "   |                     |   7  |   8  |   9  |     |" << endl;
	cout << "  |   |______|______|______|                     |______|______|______|     |" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |_________________________________________________________________________|" << endl;
	cout << endl << "   IN WHICH BOX DO YOU WANT TO PUT IN YOUR SYMBOL? [EX 1-9] : ";
	cin >> board_coordinate;
	if (board_coordinate == "1"){
		coordinate.board[0][0] = "O";
	}
	else if (board_coordinate == "2"){
		coordinate.board[0][1] = "O";
	}
	else if (board_coordinate == "3"){
		coordinate.board[0][2] = "O";
	}
	else if (board_coordinate == "4"){
		coordinate.board[1][0] = "O";
	}
	else if (board_coordinate == "5"){
		coordinate.board[1][1] = "O";
	}
	else if (board_coordinate == "6"){
		coordinate.board[1][2] = "O";
	}
	else if (board_coordinate == "7"){
		coordinate.board[2][0] = "O";
	}
	else if (board_coordinate == "8"){
		coordinate.board[2][1] = "O";
	}
	else if (board_coordinate == "9"){
		coordinate.board[2][2] = "O";
	}
	else{}
	system("cls");

	//PLAYER 1 TURN 3
	cout << "   _________________________________________________________________________" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |  PLAYER 1's TURN                                                        |" << endl;
	cout << "  |_________________________________________________________________________|" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |    GAME BOARD                                 BOARD MAP                 |" << endl;
	cout << "  |    ____________________                       ____________________      |" << endl;
	cout << "  |   |      |      |      |                     |      |      |      |     |" << endl;
	cout << "  |   |  " << coordinate.board[0][0] << "   |  " << coordinate.board[0][1] << "   |  " << coordinate.board[0][2] << "   |                     |   1  |   2  |   3  |     |" << endl;
	cout << "  |   |______|______|______|                     |______|______|______|     |" << endl;
	cout << "  |   |      |      |      |                     |      |      |      |     |" << endl;
	cout << "  |   |  " << coordinate.board[1][0] << "   |  " << coordinate.board[1][1] << "   |  " << coordinate.board[1][2] << "   |                     |   4  |   5  |   6  |     |" << endl;
	cout << "  |   |______|______|______|                     |______|______|______|     |" << endl;
	cout << "  |   |      |      |      |                     |      |      |      |     |" << endl;
	cout << "  |   |  " << coordinate.board[2][0] << "   |  " << coordinate.board[2][1] << "   |  " << coordinate.board[2][2] << "   |                     |   7  |   8  |   9  |     |" << endl;
	cout << "  |   |______|______|______|                     |______|______|______|     |" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |_________________________________________________________________________|" << endl;
	cout << endl << "   IN WHICH BOX DO YOU WANT TO PUT IN YOUR SYMBOL? [EX 1-9] : ";
	cin >> board_coordinate;
	if (board_coordinate == "1"){
		coordinate.board[0][0] = "X";
	}
	else if (board_coordinate == "2"){
		coordinate.board[0][1] = "X";
	}
	else if (board_coordinate == "3"){
		coordinate.board[0][2] = "X";
	}
	else if (board_coordinate == "4"){
		coordinate.board[1][0] = "X";
	}
	else if (board_coordinate == "5"){
		coordinate.board[1][1] = "X";
	}
	else if (board_coordinate == "6"){
		coordinate.board[1][2] = "X";
	}
	else if (board_coordinate == "7"){
		coordinate.board[2][0] = "X";
	}
	else if (board_coordinate == "8"){
		coordinate.board[2][1] = "X";
	}
	else if (board_coordinate == "9"){
		coordinate.board[2][2] = "X";
	}
	else{}
	system("cls");

	//PLAYER 2 TURN 3
	cout << "   _________________________________________________________________________" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |  PLAYER 1's TURN                                                        |" << endl;
	cout << "  |_________________________________________________________________________|" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |    GAME BOARD                                 BOARD MAP                 |" << endl;
	cout << "  |    ____________________                       ____________________      |" << endl;
	cout << "  |   |      |      |      |                     |      |      |      |     |" << endl;
	cout << "  |   |  " << coordinate.board[0][0] << "   |  " << coordinate.board[0][1] << "   |  " << coordinate.board[0][2] << "   |                     |   1  |   2  |   3  |     |" << endl;
	cout << "  |   |______|______|______|                     |______|______|______|     |" << endl;
	cout << "  |   |      |      |      |                     |      |      |      |     |" << endl;
	cout << "  |   |  " << coordinate.board[1][0] << "   |  " << coordinate.board[1][1] << "   |  " << coordinate.board[1][2] << "   |                     |   4  |   5  |   6  |     |" << endl;
	cout << "  |   |______|______|______|                     |______|______|______|     |" << endl;
	cout << "  |   |      |      |      |                     |      |      |      |     |" << endl;
	cout << "  |   |  " << coordinate.board[2][0] << "   |  " << coordinate.board[2][1] << "   |  " << coordinate.board[2][2] << "   |                     |   7  |   8  |   9  |     |" << endl;
	cout << "  |   |______|______|______|                     |______|______|______|     |" << endl;
	cout << "  |                                                                         |" << endl;
	cout << "  |_________________________________________________________________________|" << endl;
	cout << endl << "   IN WHICH BOX DO YOU WANT TO PUT IN YOUR SYMBOL? [EX 1-9] : ";
	cin >> board_coordinate;
	if (board_coordinate == "1"){
		coordinate.board[0][0] = "O";
	}
	else if (board_coordinate == "2"){
		coordinate.board[0][1] = "O";
	}
	else if (board_coordinate == "3"){
		coordinate.board[0][2] = "O";
	}
	else if (board_coordinate == "4"){
		coordinate.board[1][0] = "O";
	}
	else if (board_coordinate == "5"){
		coordinate.board[1][1] = "O";
	}
	else if (board_coordinate == "6"){
		coordinate.board[1][2] = "O";
	}
	else if (board_coordinate == "7"){
		coordinate.board[2][0] = "O";
	}
	else if (board_coordinate == "8"){
		coordinate.board[2][1] = "O";
	}
	else if (board_coordinate == "9"){
		coordinate.board[2][2] = "O";
	}
	else{}
	system("cls");
	return 1;

}

