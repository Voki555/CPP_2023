#include <iostream>
#include <clocale>

using namespace std;

//������� ����� �� 0 �� 100

int main(){
    setlocale(LC_ALL,"Russian");
    int a = 0;
    while(a<=100){
    if (a % 3 == 0){
        cout << a << '\n';
        a++;
    } else ;{
        a++;
    }
    }
 return 0;
}

