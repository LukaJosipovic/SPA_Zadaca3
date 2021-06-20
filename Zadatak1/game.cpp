#include "game.h"
#include<iostream>
#include<windows.h>

using namespace std;

void game::priprema_polja(int A_x, int A_y, int B_x, int B_y)
{	
	set_A_x(A_x);
	set_A_y(A_y);
	set_B_x(B_x);
	set_B_y(B_y);

	for (int i = 0; i < REDAK; i++)
	{
		for (int j = 0; j < STUPAC; j++)
		{
			if (i == A_x && j == A_y)
			{
				polje[i][j] = 'A';
			}
			else if (i == B_x && j == B_y)
			{
				polje[i][j] = 'B';
			}
			else
			{
				polje[i][j] = '-';
			}
		}
		cout << endl;
	}
}

void game::iscrtaj()
{
	for (int i = 0; i < REDAK; i++)
	{
		for (int j = 0; j < STUPAC; j++)
		{
			cout << polje[i][j];
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << endl;
}

void game::pomicanje(int A_x, int A_y, int B_x, int B_y)
{
	int x = A_x - B_x;
	int y = A_y - B_y;
	
	if (y < 0 && x < 0)
	{
		pomak_desno_dolje(A_x, A_y, B_x, B_y);
	}
	else if (y > 0 && x > 0)
	{
		pomak_lijevo_gore(A_x, A_y, B_x, B_y);
	}
	else if (y > 0 && x < 0)
	{
		pomak_lijevo_dolje(A_x, A_y, B_x, B_y);
	}
	else if (y < 0 && x > 0)
	{
		pomak_desno_gore(A_x, A_y, B_x, B_y);
	}
	else if (x == 0 && y < 0)
	{
		desno(A_x, A_y, B_x, B_y);
	}
	else if (x == 0 && y > 0)
	{
		lijevo(A_x, A_y, B_x, B_y);
	}
	else if (x < 0 && y == 0)
	{
		dolje(A_x, A_y, B_x, B_y);
	}
	else if (x > 0 && y == 0)
	{
		gore(A_x, A_y, B_x, B_y);
	}
}

void game::desno(int A_x, int A_y, int B_x, int B_y)
{
	while (true)
	{
		if (A_y == B_y)
		{
			break;
		}
		int pomak_desno = -1;
		A_y -= pomak_desno;
		polje[A_x][A_y] = '*';
		polje[A_x][A_y + pomak_desno] = '-';
		Sleep(300);
		iscrtaj();
	}
}

void game::lijevo(int A_x, int A_y, int B_x, int B_y)
{
	while (true)
	{
		if (A_y == B_y)
		{
			break;
		}
		int pomak_lijevo = -1;
		A_y += pomak_lijevo;
		polje[A_x][A_y] = '*';
		polje[A_x][A_y - pomak_lijevo] = '-';
		Sleep(300);
		iscrtaj();
	}
}

void game::gore(int A_x, int A_y, int B_x, int B_y)
{
	while (true)
	{
		if (A_x == B_x)
		{
			break;
		}
		int pomak_gore = -1;
		A_x += pomak_gore;
		polje[A_x][A_y] = '*';
		polje[A_x - pomak_gore][A_y] = '-';
		Sleep(300);
		iscrtaj();
	}
}

void game::dolje(int A_x, int A_y, int B_x, int B_y)
{
	while (true)
	{
		if (A_x == B_x)
		{
			break;
		}
		int pomak_dolje = -1;
		A_x -= pomak_dolje;
		polje[A_x][A_y] = '*';
		polje[A_x + pomak_dolje][A_y] = '-';
		Sleep(300);
		iscrtaj();
	}
}

void game::pomak_desno_dolje(int A_x, int A_y, int B_x, int B_y)
{
	while (true)
	{
		if (A_y == B_y)
		{
			break;
		}
		int pomak_desno = -1;
		A_y -= pomak_desno;
		polje[A_x][A_y] = '*';
		polje[A_x][A_y + pomak_desno] = '-';
		Sleep(300);
		iscrtaj();
	}
	while (true)
	{
		if (A_x == B_x)
		{
			break;
		}
		int pomak_dolje = -1;
		A_x -= pomak_dolje;
		polje[A_x][A_y] = '*';
		polje[A_x + pomak_dolje][A_y] = '-';
		Sleep(300);
		iscrtaj();
	}
}

void game::pomak_lijevo_gore(int A_x, int A_y, int B_x, int B_y)
{
	while (true)
	{
		if (A_y == B_y)
		{
			break;
		}
		int pomak_lijevo = -1;
		A_y += pomak_lijevo;
		polje[A_x][A_y] = '*';
		polje[A_x][A_y - pomak_lijevo] = '-';
		Sleep(300);
		iscrtaj();
	}
	while (true)
	{
		if (A_x == B_x)
		{
			break;
		}
		int pomak_gore = -1;
		A_x += pomak_gore;
		polje[A_x][A_y] = '*';
		polje[A_x - pomak_gore][A_y] = '-';
		Sleep(300);
		iscrtaj();
	}
}

void game::pomak_lijevo_dolje(int A_x, int A_y, int B_x, int B_y)
{
	while (true)
	{
		if (A_y == B_y)
		{
			break;
		}
		int pomak_lijevo = -1;
		A_y += pomak_lijevo;
		polje[A_x][A_y] = '*';
		polje[A_x][A_y - pomak_lijevo] = '-';
		Sleep(300);
		iscrtaj();
	}
	while (true)
	{
		if (A_x == B_x)
		{
			break;
		}
		int pomak_dolje = -1;
		A_x -= pomak_dolje;
		polje[A_x][A_y] = '*';
		polje[A_x + pomak_dolje][A_y] = '-';
		Sleep(300);
		iscrtaj();
	}
}

void game::pomak_desno_gore(int A_x, int A_y, int B_x, int B_y)
{
	while (true)
	{
		if (A_y == B_y)
		{
			break;
		}
		int pomak_desno = -1;
		A_y -= pomak_desno;
		polje[A_x][A_y] = '*';
		polje[A_x][A_y + pomak_desno] = '-';
		Sleep(300);
		iscrtaj();
	}
	while (true)
	{
		if (A_x == B_x)
		{
			break;
		}
		int pomak_gore = -1;
		A_x += pomak_gore;
		polje[A_x][A_y] = '*';
		polje[A_x - pomak_gore][A_y] = '-';
		Sleep(300);
		iscrtaj();
	}
}

void game::set_A_x(int A_x)
{
	this->A_x = A_x;
}

void game::set_A_y(int A_y)
{
	this->A_y = A_y;
}

void game::set_B_x(int B_x)
{
	this->B_x = B_x;
}

void game::set_B_y(int B_y)
{
	this->B_y = B_y;
}
