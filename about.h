#pragma once



// ОБ АВТОРЕ
void about() {
	system("color 06");
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n";
	string stroka = "________________________________";
	cout << setw(40 + stroka.length() / 2) << stroka << endl;
	string fam = "|      Фамилия: Помельцев      |";
	cout << setw(40 + fam.length() / 2) << fam << endl;
	string name = "|      Имя: Виктор             |";
	cout << setw(40 + name.length() / 2) << name << endl;
	string otch = "|      Отчество: Михайлович    |";
	cout << setw(40 + otch.length() / 2) << otch << endl;
	string univer = "|      Универститет: ОмГТУ     |";
	cout << setw(40 + univer.length() / 2) << univer << endl;
	string fak = "|      Факультет: ФИТиКС       |";
	cout << setw(40 + fak.length() / 2) << fak << endl;
	string group = "|      Группа: ИВТ-193         |";
	cout << setw(40 + group.length() / 2) << group << endl;
	cout << setw(40 + stroka.length() / 2) << stroka << endl;
	_getch();
	system("cls");
	mainMenu();
}
