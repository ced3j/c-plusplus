#include <iostream>

using namespace std;

int main() {
    cout << "Hello World" << endl; // std::cout << "Hello World";
    // Buradaki endl --> endline anlamına gelir, satırı sonlandırıp yeni satıra geçmemizi sağlar

    char letter;
    cout << "Enter a letter: ";
    cin >> letter;

    switch(letter) {
        case 'a':
        case 'e':
        case 'u':
        case 'o':
        case 'i': 
            cout << letter << " is a vowel\n"; 
            break;
        default: 
            if (letter >= '0' && letter <= '9') {
                cout << letter << " is a number, not a letter\n";
            } else {
                cout << letter << " is a consonant\n";
            }
            break;
    }

    return 0;
}
