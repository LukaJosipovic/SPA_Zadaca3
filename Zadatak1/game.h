#pragma once
class game
{
private:
	static const int STUPAC = 40;
	static const int REDAK = 20;
	char polje[REDAK][STUPAC];
	int A_x;
	int A_y;
	int B_x;
	int B_y;
public:
	void priprema_polja(int A_x, int A_y, int B_x, int B_y);
	void iscrtaj();
	void pomicanje(int A_x, int A_y, int B_x, int B_y);
	void desno(int A_x, int A_y, int B_x, int B_y);
	void lijevo(int A_x, int A_y, int B_x, int B_y);
	void gore(int A_x, int A_y, int B_x, int B_y);
	void dolje(int A_x, int A_y, int B_x, int B_y);
	void pomak_desno_dolje(int A_x, int A_y, int B_x, int B_y);
	void pomak_lijevo_gore(int A_x, int A_y, int B_x, int B_y);
	void pomak_lijevo_dolje(int A_x, int A_y, int B_x, int B_y);
	void pomak_desno_gore(int A_x, int A_y, int B_x, int B_y);
	void set_A_x(int A_x);
	void set_A_y(int A_y);
	void set_B_x(int B_x);
	void set_B_y(int B_y);
};

