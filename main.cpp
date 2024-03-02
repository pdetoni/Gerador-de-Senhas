#include <stdio.h>
#include <cstdlib>
#include <iostream>

using namespace std;

const char input[] = "abcdefghijklmnopqrstuvwxyz"
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                     "0123456789"
                     ".,:;!?()[]{}<>+-*/=|&^%$#@~_";

int main(){
        int n;

        cout << "Insira a quantidade de caracteres da senha: ";
        cin >> n;
        
        cout << "Senha: ";
        for(int i = 0; i < n; i++){
            cout << input[rand() % (sizeof(input) - 1)];
        }


        cout<<RAND_MAX<<endl;

        return 0;
    }