#ifndef UI_HPP
#define UI_HPP
#include <iostream>
#include "prep.hpp"
#include <string>
using namespace std;
/*!
	\brief  Класс, выполняющей роль меню
*/
class ui{
private:
	string filename1; ///< Имя файла базы препаратов
	string filename2; ///< Имя файла кассы

	/*!
		\brief Функция присвоения кода препарату
		\param name1 Название файла с базой препаратов
		\param kod Код препарата
		\return Код
	*/
	void set_kod( int kod);

	/*!
		\brief Функция получения имени препарата
		\param name1 Название файла с базой препаратов
		\param kod Код препарата
		\return Имя
	*/
	string get_name(string name1, int kod);

	/*!
		\brief Функция получения кода препарата
		\param name1 Название файла с базой препаратов
		\param name2 Название препарата
		\return Код
	*/
	int get_kod(string name1,string name2);

	/*!
		\brief Функция получения количества препарата
		\param name1 Название файла с базой препаратов
		\param name2 Название препарата
		\return Количество 
	*/
	int get_kolvo(string name1, int kod);

	/*!
		\brief Функция получения цены препарата
		\param name1 Название файла с базой препаратов
		\param kod Код препарата
		\return Цена
	*/
	int get_tsena(string name1,int kod);
  
	/*!
		\brief Функция продажи препарата
		\param name1 Название файла с базой препаратов
		\param name2 Название файла с кассой
	*/
	void del_prep(string name1,string name2);

	/*!
		\brief Функция добавления препарата
		\param name1 Название файла с базой препаратов
	*/
	void add_prep(string name1);

	/*!
		\brief Функция демонстрации информации о препаратах
		\param name1 Название файла с базой препаратов
	*/
	void print(string name1);

	/*!
		\brief Функция демонстрации суммы в кассе
		\param name2 Название файла с кассой
		\param summa Сумма в кассе
	*/
	void print1(string name2, int summa);

	/*!
		\brief Функция очистки кассы
		\param name2 Название файла с кассой
	*/
	void del1(string name2);

	
public:
	/*!
		\brief Конструктор по умолчанию класса ui
	*/
	ui(string filename1,string filename2);
	/*!
		\brief Деструктор по умолчанию класса ui
	*/
	~ui();
	/*!
		\brief Функция связывающая функции меню
	*/
	void mainLoop();
	/*!
		\brief Функция вывода меню
	*/
	void uiMenu();

	/*!
		\brief Функция меню продажи
	*/
	void uiDel();
	/*!
		\brief Функция продажи
	*/
	void del();

	/*!
		\brief Функция меню добавления препарата
	*/
	void uiAdd();
	/*!
		\brief Функция добавления препарата
	*/
	void add();

	/*!
		\brief Функция меню очистки кассы
	*/
	void uiDel1();
	/*!
		\brief Функция очистки кассы
	*/
	void del1();

	/*!
		\brief Функция демонстрации информации о препаратах
	*/
	void print();

	/*!
		\brief Функция демонстрации суммы в кассе
	*/
	void print1();
	
};

#endif
