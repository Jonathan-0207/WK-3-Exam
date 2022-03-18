#include <iostream>
#include <string>
void print_as_binary(std::string decimal_number){
    int num = stoi(decimal_number);
    int a[32];
    int i = 0;
    while (num>0) {
        a[i] = num%2;
        num = num/2;
        i++;
    }
    for (int j=i-1; j>=0; j--){
        std::cout<< a[j];
    }
    std::cout<<std::endl;
}

