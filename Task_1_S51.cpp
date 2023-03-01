#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string text;
    cout << "Enter the text" << '\n';
    cin >> text;
    reverse(text.begin(), text.end());
    cout << text <<"\n";
}
