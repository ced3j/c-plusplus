#include <iostream>

using namespace std;

int main(){
    int i, row, gap, j, number;
    cout << "Enter the number of row ";
    cin >> row;
    for(i = 0; i < row; i++){
        for(gap = 1; gap <= row-i; gap++){
            cout << "  ";
        }
        for(j = 0; j <= i; j++){
            if(j == 0){
                number = 1;
            }else{
                number = number * (i - j + 1 )/j;
            }
            cout << number << "   ";
        }
        cout << "\n";
    }
    cout << "\n\n";

    return 0;
}