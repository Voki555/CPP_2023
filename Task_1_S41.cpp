#include <iostream>
#include <clocale>
using namespace std;

float squared_sum(float a,float b){
    float c = (a + b)*(a + b);
    cout << "������� ����� = " << c <<'\n';
}


int main(){
    setlocale(LC_ALL,"Russian");
    float a,b;
    cout << "������� ������ �����: ";
    cin >> a;
    cout << "������� ������ �����: ";
    cin >> b;
    squared_sum(a,b);
}

