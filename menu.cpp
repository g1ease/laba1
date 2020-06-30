#include <iostream>
#include "prep.hpp"
#include "menu.hpp"
#include <fstream>
#include <set>
using namespace std;



ui::ui(string filename1, string filename2){
	this->filename1 = filename1;
	this->filename2 = filename2;
}
ui::~ui(){

}

void ui::mainLoop(){
	int symbol = -100;
	unsigned int summa = 0;
	uiMenu();

	while(symbol != 9){
		cout << "Введите команду: ";
		cin >> symbol;
		switch(symbol){
			case 0:
				uiMenu(); break;
			case 1:
				del(); break;
			case 2:
				add(); break;
			case 3:
				//system("clear");
				break;
			case 4:
				system("clear");
				print(filename1);
				break;
			case 5:
				system("clear");
				print1(filename2, summa); 
				break;
			case 6:
				del1();
				break;

			default:
				break;
		}
	}
}

void ui::uiMenu(){
	system("clear");
	cout << "   МЕНЮ:"  << endl;
	cout << "0 : Вызов главного меню"  << endl;
	cout << "1 : Продать препарат"  << endl;
	cout << "2 : Принять новый препарат"  << endl;
//	cout << "3 : Упорядочить по названию"  << endl;
	cout << "4 : Вывести данные"  << endl;
	cout << "5 : Вывести данные о сумме в кассе"  << endl;
	cout << "6 : Очистить кассу"  << endl;
	cout << "7 : Выход из программы"  << endl;
	cout << ">";
}

void ui::uiDel(){
	system("clear");
	cout << "1. prodat' preparat. " << endl;
	cout << "0. Выход."  << endl;
}

void ui::uiAdd(){
	system("clear");
	cout << "1. prinyat' preparat. " << endl;
	cout << "0. Выход."  << endl;
}

void ui::uiDel1(){
	system("clear");
	cout << "1. ochist kassu. " << endl;
	cout << "0. Выход."  << endl;
}


void ui::del(){
	int symbol = -100;
	uiDel();
	while(symbol != 0){
		cout << "Введите команду : " ;
		cin >> symbol;
		switch(symbol){
		case 0:
			symbol = 0;
			uiMenu();
			break;
		case 1:
			del_prep(filename1,filename2);
			break;
		default:
			break;
		}
	}

}

void ui::add(){
	int symbol = -100;
	uiAdd();
	while(symbol != 0){
		cout << "Введите команду : " ;
		cin >> symbol;
		switch(symbol){
		case 0:
			symbol = 0;
			uiMenu();
			break;
		case 1:
			add_prep(filename1);
			break;
		default:
			break;
		}
	}

}

void ui::del1(){
	int symbol = -100;
	uiDel1();
	while(symbol != 0){
		cout << "Введите команду : " ;
		cin >> symbol;
		switch(symbol){
		case 0:
			symbol = 0;
			uiMenu();
			break;
		case 1:
			del1(filename2);
			break;
		default:
			break;
		}
	}

}

