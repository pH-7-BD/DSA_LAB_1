/*And certainly,We shall test you with something of fear, hunger, loss of wealth,
lives and fruits.But give glad tidings to patient. ~[Surah Al-Baqarah - 155]*/
#include<bits/stdc++.h>
using namespace std;
int maximum(int a,int b,int c){
    if(a>b && a>c)
        return a;
    else if(b>a && b>c)
        return b;
        else
            return c;
}
int main(){
    int a, b, c;
    cout << "Enter three number:";
    cin >> a >> b >> c;
    cout <<"Maximum is:"<< maximum(a, b, c) << endl;

    return 0;
}
// Created by : PARVEZ HOSSAIN POLASH