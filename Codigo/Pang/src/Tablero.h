#pragma once
#include "Vector2D.h"

class Tablero {
private:
	Vector2D limite1, limite2;
	Vector2D limite_c1, limite_c2;
public:
	Tablero();
	~Tablero();
	void Dibuja();
	
};