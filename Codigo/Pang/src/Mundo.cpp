#include "Mundo.h"
#include "glut.h"
#include <math.h>
#include "Fichas.h"


void Mundo::RotarOjo()
{
	float dist=sqrt(x_ojo*x_ojo+z_ojo*z_ojo);
	float ang=atan2(z_ojo,x_ojo);
	ang+=0.05f;
	x_ojo=dist*cos(ang);
	z_ojo=dist*sin(ang);
}
void Mundo::Dibuja()
{
	gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
			4.0, 4.0, 0.0,      // hacia que punto mira  (0,0,0) 
			0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)    

	//aqui es donde hay que poner el codigo de dibujo
	//dibujo del suelo
	glDisable(GL_LIGHTING);

	tablero.Dibuja();
	ficha.Dibuja();

	glEnable(GL_LIGHTING);
}

void Mundo::Mueve()
{

}

void Mundo::Inicializa()
{
	x_ojo=4.0;
	y_ojo=4.0;
	z_ojo=14;
}

void Mundo::Tecla(unsigned char key)
{

}
