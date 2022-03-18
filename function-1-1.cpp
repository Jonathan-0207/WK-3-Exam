#include <iostream>
void printer(int array[10][10]){
    for(int j=0; j<10; j++){
        for(int i=0; i<10; i++){
            std::cout<< array[i][j];
            if(i != 9){
                std::cout<<' ';
            }
            else{
                std::cout<< std::endl;
            }
        }
    }
}
