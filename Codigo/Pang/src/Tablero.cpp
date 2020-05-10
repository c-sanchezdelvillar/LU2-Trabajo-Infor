#include "Tablero.h"
#include "glut.h"

//El trablero está hecho para que las casillas midan 1x1 en el eje X e Y. El centro de cada casilla es (0,0,0),(1,0,0)...etc
Tablero::Tablero() {
	limite1.x = -1;
	limite1.y = 8.0;
	limite2.x = 8.0;
	limite2.y = -1;
	limite_c1.x = -0.5;
	limite_c1.y = -0.5;
	limite_c2.x = 0.5;
	limite_c2.y = 0.5;
}

Tablero::~Tablero() {

}

void Tablero::Dibuja() {
	/*glColor3ub(255, 255, 255);
	glTranslated(4, 4, 0);
	glutSolidCube(1);
	glTranslated(-4, -4, 0);*/

	//Tablero Base: cuadrado a z=-0.1 para el fondo del tablero y bordes
	glBegin(GL_POLYGON);
	glColor3ub(218, 165, 32);
	glVertex3f(limite1.x, limite1.y, -0.1f);
	glVertex3f(limite1.x, limite2.y, -0.1f);
	glVertex3f(limite2.x, limite2.y, -0.1f);
	glVertex3f(limite2.x, limite1.y, -0.1f);
	glEnd();
	
	//Casillas filas pares, empieza en (0,0)
	for (int i=0; i < 8; i++)
	{
		for (int j=0; j < 8; j++)
		{
			glBegin(GL_POLYGON);
			glColor3ub(210, 105, 30);
			glVertex3f(limite_c1.x + j , limite_c1.y+i, 0.0f);
			glVertex3f(limite_c1.x + j , limite_c2.y+i, 0.0f);
			glVertex3f(limite_c2.x + j , limite_c2.y+i, 0.0f);
			glVertex3f(limite_c2.x + j , limite_c1.y+i, 0.0f);
			glEnd();
			j++;
		}
		i++;
	}
	
	for (int i = 1; i < 8; i++)
	{
		for (int j = 1; j < 8; j++)
		{
			glBegin(GL_POLYGON);
			glColor3ub(210, 105, 30); 
			glVertex3f(limite_c1.x + j, limite_c1.y + i, 0.0f);
			glVertex3f(limite_c1.x + j, limite_c2.y + i, 0.0f);
			glVertex3f(limite_c2.x + j, limite_c2.y + i, 0.0f);
			glVertex3f(limite_c2.x + j, limite_c1.y + i, 0.0f);
			glEnd();
			j++;
			
		}
		i++;
	}

	for (int i = 1; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			glBegin(GL_POLYGON);
			glColor3ub(205, 133, 63);
			glVertex3f(limite_c1.x + j, limite_c1.y + i, 0.0f);
			glVertex3f(limite_c1.x + j, limite_c2.y + i, 0.0f);
			glVertex3f(limite_c2.x + j, limite_c2.y + i, 0.0f);
			glVertex3f(limite_c2.x + j, limite_c1.y + i, 0.0f);
			glEnd();
			j++;

		}
		i++;
	}
	for (int i = 0; i < 8; i++)
	{
		for (int j = 1; j < 8; j++)
		{
			glBegin(GL_POLYGON);
			glColor3ub(205, 133, 63);
			glVertex3f(limite_c1.x + j, limite_c1.y + i, 0.0f);
			glVertex3f(limite_c1.x + j, limite_c2.y + i, 0.0f);
			glVertex3f(limite_c2.x + j, limite_c2.y + i, 0.0f);
			glVertex3f(limite_c2.x + j, limite_c1.y + i, 0.0f);
			glEnd();
			j++;

		}
		i++;
	}
}