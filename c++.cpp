#include <iostream>
#include <string>
#include <bits/stdc++.h> 
#include <windows.h>
using namespace std;

void myFunc(int times, int layers){
    if(times > 0 && layers > 0){
        int x = 0;
        while(x < times){
            x++;
            for(int i = 1; i <= layers; i++){
                for(int j = 1; j <= i; j++){
                    Sleep(100);
                    cout << "* ";
                }
                Sleep(50);
                cout << endl;
            }
            for(int i = 1; i <= layers - 1; i++){
                for(int j = i; j <= layers - 1; j++){
                    Sleep(100); 
                    cout << "* ";
                }
                Sleep(50);
                cout << endl;
            }
        }
    }
    cout << "DONE!";
}

int main(void){
    int times;
    cout << "How many times sdo you want to do it: ";
    cin >> times; 
    cin.clear();
    cin.ignore(1000, '\n');

    int layers;
    cout << "How many layers do you want it to be: ";
    cin >> layers;
    cin.clear();
    cin.ignore(1000, '\n');
    
    myFunc(times, layers);
}
