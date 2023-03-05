#include <iostream>
#include <clocale>
using namespace std;

float squared_sum(float a,float b){
    float c = (a + b)*(a + b);
    cout << " вадрат суммы = " << c <<'\n';
}


int main(){
    setlocale(LC_ALL,"Russian");
    float a,b;
    cout << "¬ведите первое число: ";
    cin >> a;
    cout << "¬ведите второе число: ";
    cin >> b;
    squared_sum(a,b);
}

