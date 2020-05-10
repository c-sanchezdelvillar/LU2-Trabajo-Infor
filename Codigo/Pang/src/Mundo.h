#include "Tablero.h"
#include "Fichas.h"

class Mundo
{
	Tablero tablero;
	Fichas ficha;
public: 
	void Tecla(unsigned char key);
	void Inicializa();
	void RotarOjo();
	void Mueve();
	void Dibuja();

	float x_ojo;
	float y_ojo;
	float z_ojo;
};
