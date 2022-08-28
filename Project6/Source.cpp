#include <iostream>
#include <conio.h>	


#include <windows.h>
#include "Movement.h"
using namespace std;

void funStart() {
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &structCursorInfo);
	structCursorInfo.bVisible = false;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &structCursorInfo);
	HANDLE hCon;
	COORD cPos;
	char sym, sym2 = '7';
	int X, Y;
	X = Y = 1;
	char array[N][M];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (i == 0 || j == 0 || j == M - 1 || i == N - 1) {
				array[i][j] = '0';
			}
			else {
				array[i][j] = ' ';
			}
		}
	}
	array[X][Y] = sym2; 
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << array[i][j];
		}
		cout << endl;
	}
	while (true) {

		sym = _getch();
		switch (sym)
		{
		case 75:
			if (X - 1 == 0) {
				continue;
			}
			else {
				cPos.X = X;
				cPos.Y = Y;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cPos);
				cout << ' ';
				X -= 1;
				cPos.X = X;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cPos);
				cout << '7';
			}
			break;
		case 72:
			if (Y - 1 == 0) {
				continue;
			}
			else {
				cPos.X = X;
				cPos.Y = Y;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cPos);
				cout << ' ';
				Y -= 1;
				cPos.Y = Y;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cPos);
				cout << '7';
			}
			break;
		case 77:
			if (X + 1 == M - 1) {
				continue;
			}
			else {
				cPos.X = X;
				cPos.Y = Y;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cPos);
				cout << ' ';
				X += 1;
				cPos.X = X;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cPos);
				cout << '7';
			}
			break;
		case 80:
			if (Y + 1 == N - 1) {
				continue;
			}
			else {
				cPos.X = X;
				cPos.Y = Y;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cPos);
				cout << ' ';
				Y += 1;
				cPos.Y = Y;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cPos);
				cout << '7';
			}
			break;
		default:
			break;
		}
	}
	return;
}

int main() {
    Movement Test;
	funStart();

       
    


	return 0;
}