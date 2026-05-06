#include <iostream>  // для std::cout, std::cin, std::endl
#include <string>     // для std::string

// Главная функция программы
int main() {
    std::string name;  // переменная для имени пользователя
    std::cout << "Enter your name: ";  // запрос имени
    std::cin >> name;  // чтение имени
    std::cout << "Hello world from " << name << std::endl;  // приветствие
    return 0;  // успешное завершение
}
