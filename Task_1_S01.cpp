#include <iostream>
using namespace std;

int main(){
    int number,number2;
    float pi,pi2;
    double a,a2;
    bool b;
    char znak;
    string N;
    cout << "������� ������ �����:" << '\n'; //������ �����
    cin >> number;
    cout << "������� ������ �����:" << '\n';
    cin >> number2;
    cout << "��� ����� ������?(+,-,*,/):" << '\n';
    cin >> znak; //������ �����

    if (znak=='+'){
        int result = number + number2;
        cout << result << '\n';
    } else if (znak=='-') {
        int result = number - number2;
        cout << result << '\n';
    } else if (znak=='*') {
        int result = number * number2;
        cout << result << '\n';
    } else (znak=='/');{
        int result = number / number2;
        cout << result << '\n';
    }
    cout << "������� ��� ����� � ��������� �������:" << '\n';
    cin >> pi >> pi2;
    float fl = pi + pi2;
    cout << fl << '\n';
    cout << "������� ��������:" << '\n';
    cin >> a >> a2;
    double DD = a * a2;
    cout << DD << '\n';
    cout << "� ��� ��� ����������?(Yes/No):" << '\n';
    cin >> N;
    if (N=="Yes"){
         b = true;
        cout << b << '\n';
    } else(N=="No");{
         b = false;
        cout << b << '\n';
    }
    return 0;
}
