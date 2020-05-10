#include "Fichas.h"
#include "glut.h"

Fichas::Fichas() {

}

Fichas::~Fichas() {

}

void Fichas::Dibuja() {
	//FICHAS NEGRAS
	int k=0;
	int j = 0;
		for (int i = 0; i < 8; i++)
		{
			glTranslated(i + k, j, 0);
			glColor3ub(0, 0, 0);
			glutSolidSphere(0.3, 15, 15);
			glTranslated(-i - k, -j, 0);
			i++;
		}

	k = 1;
	j = 1;
		for (int i = 0; i < 8; i++)
		{
			glTranslated(i + k, j, 0);
			glColor3ub(0, 0, 0);
			glutSolidSphere(0.3, 15, 15);
			glTranslated(-i - k, -j, 0);
			i++;
		}

	k = 0;
	j = 2;
		for (int i = 0; i < 8; i++)
		{
			glTranslated(i + k, j, 0);
			glColor3ub(0, 0, 0);
			glutSolidSphere(0.3, 15, 15);
			glTranslated(-i - k, -j, 0);
			i++;
		}	

		//FICHAS BLANCAS
		k = 0;
		j = 5;
		for (int i = 0; i < 8; i++)
		{
			glTranslated(i + k, j, 0);
			glColor3ub(255,255,255);
			glutSolidSphere(0.3, 15, 15);
			glTranslated(-i - k, -j, 0);
			i++;
		}

		k = 1;
		j = 6;
		for (int i = 0; i < 8; i++)
		{
			glTranslated(i + k, j, 0);
			glColor3ub(255, 255, 255);
			glutSolidSphere(0.3, 15, 15);
			glTranslated(-i - k, -j, 0);
			i++;
		}

		k = 0;
		j = 7;
		for (int i = 0; i < 8; i++)
		{
			glTranslated(i + k, j, 0);
			glColor3ub(255, 255, 255);
			glutSolidSphere(0.3, 15, 15);
			glTranslated(-i - k, -j, 0);
			i++;
		}
}