#pragma once



// ОБ АВТОРЕ
void about() {
	system("color 06");
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n";
	string border = "________________________________";
	cout << setw(40 + border.length() / 2) << border << endl;
	string surname = "|      Фамилия: Помельцев      |";
	cout << setw(40 + surname.length() / 2) << surname << endl;
	string name = "|      Имя: Виктор             |";
	cout << setw(40 + name.length() / 2) << name << endl;
	string middleName = "|      Отчество: Михайлович    |";
	cout << setw(40 + middleName.length() / 2) << middleName << endl;
	string university = "|      Универститет: ОмГТУ     |";
	cout << setw(40 + university.length() / 2) << university << endl;
	string faculty = "|      Факультет: ФИТиКС       |";
	cout << setw(40 + faculty.length() / 2) << faculty << endl;
	string group = "|      Группа: ИВТ-193         |";
	cout << setw(40 + group.length() / 2) << group << endl;
	cout << setw(40 + border.length() / 2) << border << endl;
	_getch();
	system("cls");
	mainMenu();
}
