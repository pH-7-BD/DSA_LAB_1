/*And certainly,We shall test you with something of fear, hunger, loss of wealth,
lives and fruits.But give glad tidings to patient. ~[Surah Al-Baqarah - 155]*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swap:" << endl
         << "a is: " << a << endl
         << "b is: " << b;

    return 0;
}
// Created by : PARVEZ HOSSAIN POLASH