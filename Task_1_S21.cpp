#include <iostream>
#include <clocale>
#include <fstream>
using namespace std;

int main(){
    setlocale(LC_ALL,"Russian");
    int A,B,c,b;
    ofstream fin("output.txt");
    cout << "������� ����� �:" << '\n';
    cin >> A;
    while(b=true){
        cout << "������� ����� B(��� ������ ���� ������ A!):" << '\n';
        cin >> B;
        if(A>=B){
            cout<< "����� B ������ ���� ������ A!!!\n";
        }
        else if(A<B){
            cout << "��� �������" << '\n';
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

