#include <iostream>
#include <clocale>
#include <map>
using namespace std;


int main(){
    int a;
    bool b;
    setlocale(LC_ALL,"Russian");
    map<int, string> Dictionary = {
    { 0,"����"},
    { 1,"����"    },
    { 2,"���"     },
    { 3,"���"     },
    { 4,"������"  },
    { 5,"����"    },
    { 6,"�����"   },
    { 7,"����"    },
    { 8,"������"  },
    { 9,"������" }};
    while(b=true){
        cout << "������� �����: " << '\n';
        cin >> a;
        if(a>=0 & a<=9){
            cout << Dictionary[a] << '\n';
        }
        else if(a<0 || a>9){
        cout << "����� ����� �� 0 �� 9!!! " << '\n';
        }
    }
    return 0;
}
