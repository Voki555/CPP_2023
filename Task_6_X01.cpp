#include <iostream>
using namespace std;

bool queen_hit(string f, string p){
    int f1 = f[0],p1 = p[0],f2 = f[1], p2 = p[1];
    if(f1<96 || f1>105 || f2<=48 || f2>=57 || p1<96 || p1>105 || p2<=48 || p2>=57 || f1 == p1 & f[1] == p[1]){
        cout << "Error, " << 0;
        return false;
    }
    else if(f1 == p1 || f[1] == p[1] || abs(f1-p1) == abs(f[1]-p[1])){
        cout << 1 << endl;
        return true;
    }
    else{
        cout << 0 << endl;
        return false;
    }
}


int main(){
    setlocale(0,"Russian");
    string f,p;

    cout << "Введите положение ферзя(Начиная с буквы):";
    cin >> f;
    cout <<"Положение ферзя: " << f  << '\n';

    cout << "Введите положение пешки(Начиная с буквы):";
    cin >> p;
    cout <<"Положение пешки: " << p << '\n';
    queen_hit(f,p);

    return 0;
}


