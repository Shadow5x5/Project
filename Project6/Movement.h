#pragma once
#include <iostream>
#include <conio.h>	
using namespace std;
class Movement
{
private:
#define N 25
#define M 55
public:
	void funStart() {
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
		while (true) {
			std::system("cls");
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					cout << array[i][j];
				}
				cout << endl;
			}

			sym = _getch();
			switch (sym)
			{
			case 72:
				if (X - 1 == 0) {
					continue;
				}
				else {
					array[X][Y] = ' ';
					X -= 1;
				}
				break;
			case 75:
				if (Y - 1 == 0) {
					continue;
				}
				else {
					array[X][Y] = ' ';
					Y -= 1;
				}
				break;
			case 80:
				if (X + 1 == N - 1) {
					continue;
				}
				else {
					array[X][Y] = ' ';
					X += 1;
				}
				break;
			case 77:
				if (Y + 1 == M - 1) {
					continue;
				}
				else {
					array[X][Y] = ' ';
					Y += 1;
				}
				break;
			default:
				break;
			}
			array[X][Y] = sym2;
		}
		return;
	}
	void up(char c) {

	}
	void down(char c) {

	}
	void right(char c) {

	}
	void left(char c) {

	}
};

