//#include <iostream>
//#include <vector>
//#include <string>
//#include <Windows.h>
//#include <iomanip>
//using namespace std;
//
//struct Car {
//    string m;
//    string mod;
//    int y;
//    int p;
//    bool istorg;
//    string eng;
//    string col;
//    int num;
//};
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    vector<Car> automobile;
//    bool more = true;
//
//    while (more) {
//        Car car;
//        cout << "Марка автомобіля: ";
//        cin >> car.m;
//
//        cout << "Модель автомобіля: ";
//        cin >> car.mod;
//
//        cout << "Рік випуску: ";
//        cin >> car.y;
//
//        cout << "Ціна: ";
//        cin >> car.p;
//
//        cout << "Є торг? (y/n): ";
//        char torg;
//        cin >> torg;
//        car.istorg = (torg == 'y');
//
//        cout << "Тип двигуна: ";
//        cin >> car.eng;
//
//        cout << "Колір автомобіля: ";
//        cin >> car.col;
//
//        cout << "Кількість власників: ";
//        cin >> car.num;
//
//        automobile.push_back(car);
//        char yorn;
//        cout << "Додати ще один автомобіль? (y/n): ";
//        cin >> yorn;
//        more = (yorn == 'y') ? true : false;
//
//    }
//
//    cout << "\n";
//
//
//    cout << left << setw(12) << "Марка"
//        << setw(12) << "Модель"
//        << setw(6) << "Рік"
//        << setw(8) << "Ціна"
//        << setw(6) << "Торг"
//        << setw(15) << "Двигун"
//        << setw(10) << "Колір"
//        << setw(10) << "Власники" << endl;
//
//
//
//    for (const auto& car : automobile) {
//        cout << left
//            << setw(12) << car.m
//            << setw(12) << car.mod
//            << setw(6) << car.y
//            << setw(8) << car.p
//            << setw(6) << (car.istorg ? "Так" : "Ні")
//            << setw(15) << car.eng
//            << setw(10) << car.col
//            << setw(10) << car.num << endl;
//    }
//
//    return 0;
//}


#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>
#include <iomanip>
using namespace std;

struct Praska {
    string firma;
    string mod;
    string col;
    int min_temp;
    int max_temp;
    bool para;
    int energy;
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vector<Praska> irons;
    bool more = true;

    while (more) {
        Praska iron;
        cout << "Фірма праски: ";
        cin >> iron.firma;

        cout << "Модель праски: ";
        cin >> iron.mod;

        cout << "Колір праски: ";
        cin >> iron.col;

        cout << "Мінімальна температура праски: ";
        cin >> iron.min_temp;

        cout << "Є функція випускання пару? (y/n): ";
        char ispara;
        cin >> ispara;
        iron.para = (ispara == 'y');

        cout << "Максимальна температура праски: ";
        cin >> iron.max_temp;

        cout << "Потужність праски: ";
        cin >> iron.energy;

        irons.push_back(iron);
        char yorn;
        cout << "Додати ще одну праску? (y/n): ";
        cin >> yorn;
        more = (yorn == 'y') ? true : false;

    }

    cout << "\n";


    cout << left << setw(12)
        << "Фірма"
        << setw(12) << "Модель"
        << setw(12) << "Колір"
        << setw(14) << "Мін. темп."
        << setw(8) << "Пар"
        << setw(14) << "Макс. темп."
        << setw(12) << "Потужність" << endl;

   

    for (const auto& iron : irons) {
        cout << left
            << setw(12) << iron.firma
            << setw(12) << iron.mod
            << setw(12) << iron.col
            << setw(14) << iron.min_temp
            << setw(8) << (iron.para ? "Так" : "Ні")
            << setw(14) << iron.max_temp
            << setw(12) << iron.energy << endl;
    }


    return 0;
}

