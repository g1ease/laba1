#include "prep.hpp"
#include "menu.hpp"
#include <iostream>
#include <fstream>
#include <set>
using namespace std;

prep::prep(){
    
}

prep::~prep(){

}

ostream& operator<< (ostream& stream, prep& ms){  
    stream <<ms.kod << " " <<ms.name<<" "<<ms.kolvo<<" "<<ms.tsena<<endl;
    return stream;
}

istream& operator>> (istream& stream,  prep& ms){
    stream >>ms.kod>>ms.name>>ms.kolvo>>ms.tsena;
    return stream;
}

void prep::setKod(int n){
    kod=n;
}
string prep::getName(){
    return name;
}
int prep::getKod(){
    return kod;
}
int prep::getKolvo(){
    return kolvo;
}
int prep::getTsena(){
    return tsena;
}

string ui:: get_name(string name1, int kod){
    ifstream f(name1);
    int n;
    prep a;
    f>>n;
    for(int i=0;i<n;i++){
        f>>a;
        if (a.getKod()==kod){
            break;
            
        }
    }
    f.close();
    return a.name;
}

int ui:: get_kod(string name1,string name2){
    ifstream f(name1);
    int n,t=-1;
    prep a;
    f>>n;
    for(int i=0;i<n;i++){
        f>>a;
        if (a.name==name2){
            t=a.getKod();
            break;
            
        }
    }
    f.close();
    return t;
    
}

int ui:: get_kolvo(string name1,int kod){
  prep a;
  ifstream f(name1);
  int n,c=0;
  f>>n;
  for (int i=0; i<n;i++){
    f>>a;
    if (a.getKod()==kod){
      c+=a.kolvo;
    }
  }
  f.close();
  return c;
  
}

int ui:: get_tsena(string name1,int kod){
  prep a;
  ifstream f(name1);
  int n,c=0;
  f>>n;
  for (int i=0; i<n;i++){
    f>>a;
    if (a.getKod()==kod){
      c+=a.tsena;
    }
  }
  f.close();
  return c;
  
}

void ui:: del_prep(string name1,string name2){
    ifstream f(name1); 
    int n,g,m,z;
    f>>n;
    prep *r=new prep[n];
    for( int i=0;i<n;i++){
        f>>r[i];
    }
    string s;
    cout<<"Введите название препарата"<<endl;
    cin>>s;
    int j=get_kod(name1,s);
    while (j==-1){
      cout<<"Такого препарата нет, введите заново"<<endl;
      cin>>s;
      j=get_kod(name1,s);
    }

    for( int i=0;i<n;i++){
        f>>r[i];  
        if (r[i].name==s){
            r[i].kolvo-=1;
            z=r[i].tsena;
            break;
        }
    }
    f.close();

    ifstream f2(name2);
    int l;
    f2>>l;
    z+=l;
    f2.close();

    ofstream f3(name2, ios_base::trunc);
    f3<<z;
    f3.close();

    ofstream f1(name1, ios_base::trunc); 
    f1<<n<<endl;
    for( int i=0;i<n;i++){
        f1<<r[i];   
    }
    cout << "Препарат продан."<<endl; 
    f1.close();
    delete [] r;
}

void ui:: add_prep(string name1){

    ifstream f(name1);
    int n,g,m,k,t;
    int h=0; // счетчик добавления нового препарата
    f>>n;
    prep *r=new prep[n+1];
    for( int i=0;i<n;i++){
        f>>r[i];
    }
    string s;
    cout<<"Введите название препарата"<<endl;
    cin>>s;
    int j=get_kod(name1,s);
    while (j==-1){
	cout<<"Введите количество препарата"<<endl;
	cin>>k;
	r[n].kolvo=k;
	cout<<"Введите цену препарата"<<endl;
	cin>>t;
	r[n].tsena=t;
        	
	r[n].kod=n+1;	
	r[n].name=s;
	h=1;
            break;
    }

    for( int i=0;i<n;i++){
        f>>r[i];  
        if (r[i].name==s){
            r[i].kolvo+=1;
            break;
        }
    }
    f.close();
    ofstream f1(name1, ios_base::trunc); 
    if(h==1){
    f1<<n+1<<endl;
    }
    if(h==0){
    f1<<n<<endl;
    }
    for( int i=0;i<n;i++){
        f1<<r[i];   
    }
    if(h==1){
    f1<<r[n];
    }
    cout << "Препарат добавлен."<<endl; 
    f1.close();
    delete [] r;
} 

void ui:: print(string name1){
    ifstream f(name1);
    int n;
    prep a;
    cout<<"Препараты:"<<endl;
    f>>n;
    for (int i=0;i<n;i++){
        f>>a;
        cout<<" Код: "<<a.kod<<" Название: "<<a.name<<" Количество: "<<a.kolvo<<" Цена: "<<a.tsena<<endl;
    }
    f.close();
}

void ui:: print1(string name2, int summa) {
    ifstream f(name2);
    int s;
    f>>s;
    cout << "В кассе: " << s << " ₽."<<endl;
    f.close();

}

void ui:: del1(string name2) {  
    ofstream f(name2, ios_base::trunc);
    int n=0;
    f<<n;
    f.close();
    cout << "Касса пуста."<<endl;
}
