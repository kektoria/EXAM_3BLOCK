#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

//Разработать класс Часы(модель, марка, вариант циферблата, цена).
//Информация должна быть записана в файл.
//Пользователь может выбрать структурирование информации по возрастанию
//или убыванию.
//Пользователь может добавлять данные в файл через консоль.

//Создание класса
class Watch
{
    //Объявление переменных
    public:
    string model, mark, face;
    int price;

    //Создание конструктора класса
    Watch(string model, string mark, string face, int price) 
    {
        this->model = model;
        this->mark = mark;
        this->face = face;
        this->price = price;
    }
};

int main()
{
    //Установка русского языка в консоли
    setlocale(LC_ALL, "RUSSIAN");

    //Объявление переменных
    string model, mark, face;
    int price;

    //Вывод ошибки о пустом вводе
    cout << "Введите модель часов: " << endl;
    cin >> model;
    if (model == "") {
        cout << "Значение не должно быть пустым!" << endl;
        return 0;
    }

    //Вывод ошибки о пустом вводе
    cout << "Введите марку часов: " << endl;
    cin >> mark;
    if (mark == "") {
        cout << "Значение не должно быть пустым!" << endl;
        return 0;
    }

    //Вывод ошибки о пустом вводе
    cout << "Введите вид циферблата часов: " << endl;
    cin >> face;
    if (face == "") {
        cout << "Значение не должно быть пустым!" << endl;
        return 0;
    }

    //Вывод ошибки о неправильной цене
    cout << "Введите цену часов: " << endl;
    cin >> price;
    if (price == NULL || price <= 0 ) {
        cout << "Значение не может быть пустым или отрицательным!" << endl;
        return 0;
    }

    //Добавление данных в файл через консоль

    //Объявление класса
    Watch watch(model, mark, face, price);

    //Создание файла в папке проекта
    ofstream file("Watches.txt", ios::app);

    if (file.is_open()) 
    {
        file << "Модель часов: " << watch.model << endl;
        file << "Марка часов: " << watch.mark << endl;
        file << "Вид циферблата часов: " << watch.face << endl;
        file << "Цена часов: " << watch.price << endl;
        file << endl;
    }
    file.close();
}

