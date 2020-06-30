#ifndef PREP_HPP
#define PREP_HPP
#include <string>
using namespace std;
/*!
	\brief  Класс, выполняющей роль базы препаратов
*/
class prep{
    public:
        string name;///< Название препарата
        int kolvo; ///< Количество препарата
        int tsena; ///< Цена препарата
	int kod; ///< Код препарата

        /*!
            \brief Функция присвоения кода
            \param n Код
        */
        void setKod(int n);
        /*!
            \brief Функция получения Кода
            \return Код
        */
        int getKod();
        /*!
            \brief Функция получения количества
            \return Количество
        */
        int getKolvo();
        /*!
            \brief Функция получения цены
            \return Цена
        */
        int getTsena();
        /*!
            \brief Функция получения имени
            \return Имя
        */
        string getName();
        /*!
            \brief Конструктор по умолчанию класса prep
        */
        prep();
        /*!
            \brief Деструктор по умолчанию класса prep
        */
        ~prep();

        /*!
            \brief Оператор перегрузки вывода
            \param stream Поток данных
            \param ms Препараты
         */
        friend ostream& operator<< (ostream& stream, prep &ms);

        /*!
            \brief Оператор перегрузки ввода
            \param stream Поток данных
            \param ms Препараты
         */
        friend istream& operator>> (istream& stream, prep &ms);
        

};

#endif
