//
//  main.cpp
//  ellenek2_hw4_2
//
//  Created by Ellen Kirsh on 9/27/21.
//

#include <iostream>
using namespace std;

int reverse(int n){
    int digit;
    do{
        digit = n%10;
        n = n/10;
        if(digit == 0){
            cout <<"";
        }
        else{
            cout << digit;
        }
    }
    while(n>0);
    cout << endl;
    return 0;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    reverse(num);
    return 0;
}
