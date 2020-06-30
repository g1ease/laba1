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
	string filename1; ///< Имя файла базы prep
	string filename2; ///< Имя файла kassi

	/*!
		\brief Функция prisv имени prep
		\param name1 Название файла с базой prep
		\param kod kod prep
		\return ustanovka koda
	*/
	void set_kod( int kod);

	/*!
		\brief Функция получения имени prep
		\param name1 Название файла с базой prep
		\param kod kod prep
		\return Имя
	*/
	string get_name(string name1, int kod);

	/*!
		\brief Функция получения koda prep
		\param name1 Название файла с базой prep
		\param name2 Название prep
		\return kod
	*/
	int get_kod(string name1,string name2);

	/*!
		\brief Функция получения количества prep
		\param name1 Название файла с базой prep
		\param name2 Название prep
		\return Количество prepa
	*/
	int get_kolvo(string name1, int kod);

	/*!
		\brief Функция получения tseni prep
		\param name1 Название файла с базой prep
		\param kod kod фирмы
		\return tsena
	*/
	int get_tsena(string name1,int kod);
  
	/*!
		\brief Функция prodazhi prep
		\param name1 Название файла с базой prep
		\param name2 Название файла с kassoi
	*/
	void del_prep(string name1,string name2);

	/*!
		\brief Функция dobavl prep
		\param name1 Название файла с базой prep
	*/
	void add_prep(string name1);

	/*!
		\brief Функция pokaza vsego
		\param name1 Название файла с базой prep
	*/
	void print(string name1);

	/*!
		\brief Функция pokaza summi v kasse
		\param name2 Название файла с kassoi
		\param summa summa v kasse
	*/
	void print1(string name2, int summa);

	/*!
		\brief Функция ochistki kassi
		\param name2 Название файла с kassoi
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
		\brief Функция prodazhi
	*/
	void uiDel();
	/*!
		\brief Функция prodazhi
	*/
	void del();

	/*!
		\brief Функция prinyatiya prep
	*/
	void uiAdd();
	/*!
		\brief Функция prinyatiya prep
	*/
	void add();

	/*!
		\brief Функция ochist kassi
	*/
	void uiDel1();
	/*!
		\brief Функция ochist kassi
	*/
	void del1();

	/*!
		\brief Функция pokaza vseh preparatov
	*/
	void print();

	/*!
		\brief Функция pokaza summi v kasse
	*/
	void print1();
	
};

#endif
