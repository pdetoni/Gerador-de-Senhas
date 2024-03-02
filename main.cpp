#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

const char input[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.,:;!?()[]{}<>+-*/=|&^%$#@~_";

int main(){
        int n;
        unsigned seed = time(0);
        srand(seed);

        cout << "Insira a quantidade de caracteres da senha: ";
        cin >> n;

        cout << "Senha: ";
        for(int i = 0; i < n; i++){
            cout << input[rand() % (sizeof(input) - 1)];
        }


        return 0;
    }