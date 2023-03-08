#include <iostream>

using namespace std;

int main (){
    int box[10][10],i,j; // i - строки, j - столбцы
    for (i=2;i<10;i++){
        for(j=2;j<10;j++){
            box[i][j] = i * j;
            cout << "\t" << box[i][j];
        }
        cout << endl;
    }
    return 0;
}
