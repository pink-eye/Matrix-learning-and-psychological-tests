#include <iostream>
#include <fstream>
#include <Windows.h>
#include <iomanip>
#include <conio.h>
#include <string>
#include "setpos.h"
#include "matrix.h"
#include "mainMenu.h"
#include "menuMtx.h"
#include "mainController.h"
#include "controllerMtx.h"
#include "NumberAddiction.h"
#include "NumberSubtraction.h"
#include "MatrixAddiction.h"
#include "MatrixSubtraction.h"
#include "MatrixMultiplication.h"
#include "MatrixTranspose.h"
#include "menuTests.h"
#include "controllerTests.h"
#include "firsttest.h"
#include "secondtest.h"
#include "thirdtest.h"
#include "about.h"

using namespace std;

int main() {
	//	Настройка окна...
	const char* const titleWindow = "project\0";
	SetConsoleTitle(titleWindow);
	Sleep(1.5);
	MoveWindow(FindWindow(NULL, titleWindow), 300, 100, 700, 500, false);
	
	
	//  Отключение курсора...
	CONSOLE_CURSOR_INFO curs = {0};											
    curs.dwSize = sizeof(curs);												
    curs.bVisible = FALSE;											
    ::SetConsoleCursorInfo(::GetStdHandle(STD_OUTPUT_HANDLE), &curs);
	///////////////////////////////////////////////////////////////////////////

	setlocale(0,"");
	mainMenu();
	mainController();
	return 0;
}
