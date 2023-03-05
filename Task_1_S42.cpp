#include <iostream>
#include <clocale>
using namespace std;

int sorti(int number[],int n){
    int b;
    for(int i=1;i<n;i++)
    {
        int j = i-1;
        while(j>=0 && number[j]<number[j+1])
        {
            swap(number[j],number[j+1]);
            j--;
        }
    }
}


int main(){
    setlocale(LC_ALL,"Russian");
    int i=0,n,num;
    cout << "¬ведите длину массива:" << '\n';
    cin >> n ;
    int number[n];
    while(i<=n-1){
        for(i;i<=n-1;i++){
        cout << "¬ведите " << i+1 << " число:" <<'\n';
        cin >> num;
        number[i] = num;
        }
    }
    sorti(number,n);

    cout << "ќтсортирован:" << endl;
	for(int i = 0; i < n; i++)
		cout << number[i] << '\t';
    return 0;
}
