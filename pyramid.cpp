/*And certainly,We shall test you with something of fear, hunger, loss of wealth,
lives and fruits.But give glad tidings to patient. ~[Surah Al-Baqarah - 155]*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        for (int j = i; j <2* n;j++){
            cout << " ";
        }
        for (int k = 0; k <= 2 * i;k++){
            cout << "*";
        }
        cout << endl;
    }

        return 0;
}
// Created by : PARVEZ HOSSAIN POLASH