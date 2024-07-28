#include <iostream>

using namespace std;

int main(){
    int n1, n2, n3, min = 0, max = 0;
    cout << "Enter three numbers: " << endl;
    cin >> n1 >> n2 >> n3;

    if(n1 > n2 && n1 > n3){
        max = n1;
        min = (n2 < n3) ? n2 : n3;
    }else if(n2 > n1 && n2 > n3){
        max = n2;
        min = (n3 < n1) ? n3 : n1;
    }else{
        max = n3;
        min = (n2 < n1) ? n2 : n1;
    }


    cout << "Max: " << max << " Min: " << min << endl;

    return 0;
}