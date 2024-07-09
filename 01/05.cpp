// loops


#include <iostream>

int main(){

    int i = 1;
    while(i < 10){
        i++;
    }
    
    std::cout << "i: " << i << std::endl; 


    int y = 3;
    while(y < 7){
        std::cout << "y: " << y << std::endl;
        y++;
    }


    for(int i = 0; i < 4; i++){
        std::cout << "Number: " << i << std::endl;
    }


    // break and continue


    for(int a = 0; a < 11; a++){
        if(a <= 4){
            continue;
        }
        else if (a == 6){
            break;
        }
        std::cout << "Break and Cont: " << a << std::endl;
        
    }


    // indefinite loop

    int sum = 0;
    int num = 0;
    while(num != -1){
        std::cout << "Enter positive integer ( or -1 to quit )" << std::endl;
        std::cin >> num;

        if(num != -1) sum = sum + num; 
    }

    std::cout << "While loop done!" << std::endl;
    std::cout << "The result is: " << sum << std::endl;



    return 0;
}