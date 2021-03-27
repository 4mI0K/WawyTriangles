#include <iostream>
#include <string>
#include <bits/stdc++.h> 
#include <windows.h>
using namespace std;

void gisaFunc(int times, int work){
    if(times > 0 && work > 0){
        int x = 0;
        while(x < times){
            x++;
            for(int i = 1; i <= work; i++){
                for(int j = 1; j <= i; j++){
                    Sleep(100);
                    cout << "* ";
                }
                Sleep(50);
                cout << endl;
            }
            for(int i = 1; i <= work - 1; i++){
                for(int j = i; j <= work - 1; j++){
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

    int work;
    cout << "How many layers do you want it to be: ";
    cin >> work;
    cin.clear();
    cin.ignore(1000, '\n');
    
    gisaFunc(times, work);
}
