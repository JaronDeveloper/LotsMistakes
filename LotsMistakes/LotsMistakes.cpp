#include <iostream>
#include "Linking.h"

/*
����� ������ ��������, � ������������ � ���������� � ����� ';'
��� �������� ��� ����,� ����� ���� ���� �������� ������ '{}'
*/
class MyClass
{
public:
    MyClass(int a);
}//c������������� ������ ��� ';'

int main() {
	MyClass(5);

    //������������� ������ 
    std::cout << "Enter an integer: ";
    int x{};//� ��� ����� ������ �������� ������ '{}'?
    std::cin >> x;

    if (x >= 5)//operator>= ������ operator>
        std::cout << x << " is greater than 5";
    
    //����� ������ �������� � ���������� "Linking.h" ����� ���������� ������� ����� ������
    f(5);
    return 0;
}