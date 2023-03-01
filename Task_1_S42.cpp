#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int i, number[] = { 1, 8, 3, 6, 5, 4, 9, 2, 8, 12 };
    sort(number, number + 10); // 12 9 8 7 6 5 4 3 2 1

    for(int i = 9;i >=0;i--){
        cout << number[i] << " ";
    }
   return 0;
}
