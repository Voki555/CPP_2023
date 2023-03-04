#include <iostream>
using namespace std;

int main(){
    int i,Sum1=0,Sum2=0;
    for(i=1;i<=1000;i=i+4){
        if(i%7==0){
            Sum1=Sum1+i;
        }
    }
     for(i=0;i<=1000;i=i+4){
        if(i%7==0){
            Sum2=Sum2+i;
        }
    }
    cout << "Sum: " << Sum2 <<  "  "  << "// (0 - 1000)" << '\n' << "Sum: " << Sum1 << "  " << "// (1 - 1000)" << '\n';
    return 0;
}
