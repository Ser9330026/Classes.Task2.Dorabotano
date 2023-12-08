#include <iostream>
#include <string>


class Counter {
private:
    int count;

public:
    Counter() : count(1) {};
    Counter(int c) : count(c) {};

    void increment() {
        count++;
    }

    void decrement() {
        count--;
    }

    int valFunc() {
        return count;
    }
};

int main() {
    setlocale(LC_ALL, "rus");

    std::cout << "Здание №2" << std::endl;
    std::string str;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
    std::cin >> str;
    int number;
    
    if (str == "no") {
        std::cout << "До свидания!!!" << std::endl;
        exit(1);
    }
    else {
    std::cout << "Введите начальное значение счетчика: ";
    std::cin >> number;
    Counter count(number);
    char ch;
        while (str == "yes") {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> ch;
    if (ch == '+') {
        count.increment();
    }
        if (ch == '-') {
        count.decrement();
        }
        if (ch == '=') {
        std::cout << "Текущее значение счетчика: " << count.valFunc() << std::endl;
        }
        if (ch == 'x') {
        break;
            }
        }
    }
   

    return 0;
}