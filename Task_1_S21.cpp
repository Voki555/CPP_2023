#include <iostream>
#include <clocale>
#include <fstream>
using namespace std;

int main(){
    setlocale(LC_ALL,"Russian");
    int A,B,c,b;
    ofstream fin("output.txt");
    cout << "Введите число А:" << '\n';
    cin >> A;
    while(b=true){
        cout << "Введите число B(Оно должно быть больше A!):" << '\n';
        cin >> B;
        if(A>=B){
            cout<< "Число B должно быть больше A!!!\n";
        }
        else if(A<B){
            cout << "Все отлично" << '\n';
            break;
    }
    }
        for(A;A<=B;A++){
            c=A*3;
            fin << c << '\n';
            cout << c << '\n';
    }
    fin.close();
    return 0;
}

