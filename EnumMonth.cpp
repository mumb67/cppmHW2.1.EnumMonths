// EnumMonth.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>



int main()
{
    setlocale(LC_ALL, "Russian");

    enum Months {January = 1, February, March, April, May , June, July, August, September, October, November, December};
    int MonthNum = 1;

    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> MonthNum;
        Months OutMonth = static_cast<Months>(MonthNum);
        switch (OutMonth) {
        case January: 
            std::cout << "Январь\n\n"; 
            break;
        case February:
            std::cout << "Февраль\n\n";
            break;
        case March:
            std::cout << "Март\n\n";
            break;
        case April:
            std::cout << "Апрель\n\n";
            break;
        case May:
            std::cout << "Май\n\n";
            break;
        case June:
            std::cout << "Июнь\n\n";
            break;
        case July:
            std::cout << "Июль\n\n";
            break;
        case August:
            std::cout << "Август\n\n";
            break;
        case September:
            std::cout << "Сентябрь\n\n";
            break;
        case October:
            std::cout << "Октябрь\n\n";
            break;
        case November:
            std::cout << "Ноябрь\n\n";
            break;
        case December:
            std::cout << "Декабрь\n\n";
            break;
        default: 
            std::cout << "Месяца с таким номером не существует! Попробуйте еще раз \n\n";
            break;
        }
    } while (MonthNum != 0);

    std::cout << "До свидания";


}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
