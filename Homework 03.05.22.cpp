#include <iostream>
using namespace std;

int main()
{
    /*setlocale(0, "UKR");
    double m;
    cout << "Укажите массу в тоннах: ";
    cin >> m;
    int t = (int)m;
    double kg = (m - t) * 1000;
    int g = (kg - (int)kg) * 1000 + 0.5;
    cout << "\nТонны: " << t << "\nКилограммы: " << int(kg) << "\nГраммы: " << g << "\n" << endl;
    system("pause");*/

    /*setlocale(0, "UKR");
    double time;
    cout << "Укажите время в секундах: ";
    cin >> time;
    int days = time / 86400;
    int hours = time / 3600 - days * 24;
    int minutes = time / 60 - hours * 60;
    int seconds = time - minutes * 60 - hours * 3600;
    cout << "\nСутки:" << days << "\nЧасы: " << hours << "\nМинуты: " << minutes << "\nСекунды: " << seconds << "\n";*/

    setlocale(0, "UKR");
    double cost = 0.15;
    int hours1;
    int minutes1;
    int seconds1;
    cout << "Укажите время начала разговора (часы): ";
    cin >> hours1;
    cout << "Укажите время начала разговора (минуты): ";
    cin >> minutes1;
    cout << "Укажите время начала разговора (секунды): ";
    cin >> seconds1;
    int hours2;
    int minutes2;
    int seconds2;
    cout << "\nУкажите время конца разговора (часы): ";
    cin >> hours2;
    cout << "Укажите время конца разговора (минуты): ";
    cin >> minutes2;
    cout << "Укажите время конца разговора (секунды): ";
    cin >> seconds2;
    double start = hours1 * 60 + minutes1 + seconds1 / 60 + 0.5;
    double end = hours2 * 60 + minutes2 + seconds2 / 60 + 0.5;
    double total = end - start;
    cout << "\nСтоимость звонка: " << total * cost << " UAH" << "\n";
}
