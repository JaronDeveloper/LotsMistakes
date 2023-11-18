#include <iostream>
#include "Linking.h"

/*
здесь ошибка линковки, в конструкторе с параметром в конце ';'
что означает нет тела,а нужно чтоб были фигурные скобки '{}'
*/
class MyClass
{
public:
    MyClass(int a);
}//cинтаксическая ошибка нет ';'

int main() {
	MyClass(5);

    //семантическая ошибка 
    std::cout << "Enter an integer: ";
    int x{};//а так можна делать фигурные скобки '{}'?
    std::cin >> x;

    if (x >= 5)//operator>= вместо operator>
        std::cout << x << " is greater than 5";
    
    //снова ошибка линковки в директории "Linking.h" лежит переменная которую нужно убрать
    f(5);
    return 0;
}