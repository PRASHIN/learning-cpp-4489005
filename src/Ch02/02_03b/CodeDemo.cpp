// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#define MY_STUDENT 50

int main(){
    uint32_t num;
    std::cout << "Hi There! please enter a number" << std::endl;
    std::cin >> num;
    // if (num > MY_STUDENT){
    //     std::cout << "more than 100 perople";
    // }
    std::cout << sizeof(num);
    std::cout << std::endl << std::endl;
    return (0);
}
