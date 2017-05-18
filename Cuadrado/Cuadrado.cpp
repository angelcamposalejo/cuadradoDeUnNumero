#include "stdafx.h"  //________________________________________ Cuadrado.cpp
#include "Cuadrado.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Cuadrado app;
	return app.BeginDialog(IDI_Cuadrado, hInstance);
}

void Cuadrado::Window_Open(Win::Event& e)
{
}

void Cuadrado::btCalcular_Click(Win::Event& e)
{
	const double numero = tbxX.DoubleValue;
	const double resultado = numero*numero;
	tbxCuadrado.DoubleValue = resultado;
}

