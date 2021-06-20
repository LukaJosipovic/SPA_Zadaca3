#include<iostream>
#include"game.h"

using namespace std;

int main() {

	game g;

	int A_x;
	int A_y;
	int B_x;
	int B_y;

	cout << "A redak: ";
	cin >> A_x;
	cout << "A stupac: ";
	cin >> A_y;
	cout << "B redak: ";
	cin >> B_x;
	cout << "B stupac: ";
	cin >> B_y;

	g.priprema_polja(A_x, A_y, B_x, B_y);

	g.iscrtaj();

	g.pomicanje(A_x, A_y, B_x, B_y);

	return 0;
}