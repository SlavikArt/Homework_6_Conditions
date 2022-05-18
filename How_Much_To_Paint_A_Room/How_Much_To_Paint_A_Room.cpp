#include <iostream>

using namespace std;

double square_calc(double a, double b, double c) {
    double s = 2 * (a * b + b * c + a * c);
    return s;
}

int main()
{
    setlocale(0, "rus");

    double width;  // Ширина
    double height; // Высота
    double length; // Длина

    double N; // Сколько л. краски на 1 кв. м.
    double M; // Сколько % поверхности занимают окна, двери
    double R; // Сколько стоит 1 л. краски (грн)

    double surface_square; // Площадь поверхности комнаты
    double cost; // Общая стоимость покраски
    double to_paint; // Сколько нужно краски что бы покрасить поверхность

    cout << "\tДобро пожаловать в Мастер покраски.\n";
    cout << "Для того что бы узнать общую стоимость покраски,\n";
    cout << "сколько л. краски уйдет на покраску, введите данные: \n";

    cout << "Длина комнаты (м): ";
    cin >> length;

    cout << "Ширину комнаты (м): ";
    cin >> width;

    cout << "Высоту комнаты (м): ";
    cin >> height;

    cout << "Сколько л. краски уходит на кв. м.: ";
    cin >> N;

    cout << "Сколько % поверхности занимают окна, двери: ";
    cin >> M;

    cout << "Сколько стоит 1 л. краски (грн): ";
    cin >> R;

    surface_square = square_calc(length, width, height); // Считаем площадь поверхности

    surface_square -= surface_square * M / 100; // Вычитаем % окон, дверей

    to_paint = ceil(surface_square * N); // Сколько л. краски нужно что бы покрасить поверхность

    cost = to_paint * R; // Сколько общая стоимость покраски

    cout << "Покраска такой комнаты вам обойдется в " << cost << " грн.\n";
    cout << "Вам понадобится " << to_paint << " л. краски.\n";
}
