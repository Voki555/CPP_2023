#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

double Square(float A,float N){
    double f = (A * A * N) / (4 * tan((180 / N) * 3.14159 / 180));
    cout << "������� �����: "<< f << '\n';
    return 0;
}

int main()
{
    setlocale(LC_ALL,"Russian");
    float A,N;
    cout<<"������� �������: " << '\n';
    cin >> A;
    cout<<"������� ����� ������: " << '\n';
    cin >> N;
    Square(A,N);
}
