#ifndef PREP_HPP
#define PREP_HPP
#include <string>
using namespace std;
/*!
	\brief  Класс, выполняющей роль bazi preparatov
*/
class prep{
    protected:
        int kod; ///< kod prepa 
    public:
        string name;///< Название prepa
        int kolvo; ///< Количество prepa
        int tsena; ///< tsena prepa
	//int kod; ///< kod prepa

        /*!
            \brief Функция присвоения koda
            \param n kod
        */
        void setKod(int n);
        /*!
            \brief Функция получения koda
            \return kod
        */
        int getKod();
        /*!
            \brief Функция получения kolva
            \return kolvo
        */
        int getKolvo();
        /*!
            \brief Функция получения tseni
            \return tsena
        */
        int getTsena();
        /*!
            \brief Функция получения imeni
            \return name
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
            \param ms prep
         */
        friend ostream& operator<< (ostream& stream, prep &ms);

        /*!
            \brief Оператор перегрузки ввода
            \param stream Поток данных
            \param ms prep
         */
        friend istream& operator>> (istream& stream, prep &ms);
        

};

#endif
