// Анна Стасюк П13121
#include <iostream>
using namespace std;
int main(){
//4 задача 
    /*float c;
    cout << "Cost:";
    cin >> c;

    for (int i = 1; i <= 10; ++i)*/

// 7 задача 
/*int a, b;
cout << "A:";
cin >> a;
cout << "B:";
cin >> b;
int sum = 0;
for (int i = a; i <= b; ++i)
sum += i;
cout << "Sum = " << sum;*/

//8
    /*setlocale(LC_ALL, "Russian");
    int a, b, c = 1;
    cout << "A:";
    cin >> a;
    cout << "b:";
    cin >> b;

    for (int i = a; i <= b; i++) {
        c *= i;
    }
    cout << c;*/

    //9
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;

    int i, rez = 0;
    for (i = a; i <= b; ++i)
        rez += i * i;
    cout << "Rez: " << rez;
    return 0;
}