#pragma once  //______________________________________ Cuadrado.h  
#include "Resource.h"
class Cuadrado : public Win::Dialog
{
public:
	Cuadrado()
	{
	}
	~Cuadrado()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxX;
	Win::Label lb1;
	Win::Label lb2;
	Win::Textbox tbxCuadrado;
	Win::Button btCalcular;
protected:
	Win::Gdi::Font fontArial010A;
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(312);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(59);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Cuadrado";
		tbxX.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 31, 23, 81, 25, hWnd, 1000);
		lb1.Create(NULL, L"2", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 105, 3, 16, 15, hWnd, 1001);
		lb2.Create(NULL, L"=", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 127, 25, 14, 19, hWnd, 1002);
		tbxCuadrado.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 157, 24, 65, 25, hWnd, 1003);
		btCalcular.Create(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 241, 24, 64, 28, hWnd, 1004);
		fontArial010A.Create(L"Arial", 10, false, false, false, false);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		tbxX.Font = fontArial014A;
		lb1.Font = fontArial010A;
		lb2.Font = fontArial014A;
		tbxCuadrado.Font = fontArial014A;
		btCalcular.Font = fontArial014A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) { btCalcular_Click(e); return true; }
		return false;
	}
};
