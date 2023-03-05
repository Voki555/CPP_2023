#include <iostream>
#include <clocale>
#include <map>
using namespace std;


int main(){
    int a;
    bool b;
    setlocale(LC_ALL,"Russian");
    map<int, string> Dictionary = {
    { 0,"Ноль"},
    { 1,"Один"    },
    { 2,"Два"     },
    { 3,"Три"     },
    { 4,"Четыре"  },
    { 5,"Пять"    },
    { 6,"Шесть"   },
    { 7,"Семь"    },
    { 8,"Восемь"  },
    { 9,"Девять" }};
    while(b=true){
        cout << "Введите число: " << '\n';
        cin >> a;
        if(a>=0 & a<=9){
            cout << Dictionary[a] << '\n';
        }
        else if(a<0 || a>9){
        cout << "ВВЕДИ ЧИСЛО ОТ 0 ДО 9!!! " << '\n';
        }
    }
    return 0;
}
