/*#include "mean.hpp"
#include "measure.hpp"*/
#include "prep.hpp"
#include "menu.hpp"
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]){
    setlocale( LC_ALL,"Russian" );
    if (argc<=1){
        cout<<"Не заданы имена файлов"<<endl;
        return 0;
    }
    ui b(argv[1],argv[2]
);
    b.mainLoop();
}
