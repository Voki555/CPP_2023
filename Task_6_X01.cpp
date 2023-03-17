#include <iostream>
#include <map>
using namespace std;

int queen_hit(string f, string p);

int main(){
    setlocale(0,"Russian");
    string f,p;
    bool result;

    cout << "Введите положение ферзя(Начиная с буквы):";
    cin >> f;
    cout <<"Положение ферзя: " << f  << '\n';

    cout << "Введите положение пешки(Начиная с буквы):";
    cin >> p;
    cout <<"Положение пешки: " << p << '\n';
    queen_hit(f,p);

    return 0;
}

int queen_hit(string f, string p){
    bool result;
    int f1 = f[0],p1 = p[0],f2 = f[1], p2 = p[1];
    if(f1<96 || f1>105 || f2<=48 || f2>=57 || p1<96 || p1>105 || p2<=48 || p2>=57 || f1 == p1 & f[1] == p[1]){
        cout << "Error, " << 0;
        result = false;
    }
    else if(f1 == p1 || f[1] == p[1] || f1-p1 == f[1]-p[1] || -(f1-p1) == f[1]-p[1] || f1-p1 == -(f[1]-p[1])){
        cout << 1 << endl;
        result = true;
    }
    else{
        result = false;
        cout << 0 << endl;
    }
return result;
}
