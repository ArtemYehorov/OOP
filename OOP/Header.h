#include<iostream>
#include<Windows.h>
#include<string>
#pragma once



using namespace std;

void Story1()
{
    cout << "Ты заходишь в магазин" << endl;
    cout << "Ты можешь купить 4 вида напитков.\nЭнергетики\nСладкую воду\nВоду без газа\nВоду с газом" << endl << endl;
    cout << "И ты можешь купить 4 вида еды.\nПиццы\nБутерброды\nОгурцы\nПомидорки" << endl << endl;
}

void Story2()
{
    cout << "После магазина ты идёшь в свой отель..." << endl;
    cout << "Твой отель видно издалека... " << endl << endl;
}

void Story3()
{
    system("cls");
    cout << "Ты заходишь в отель." << endl;
    cout << "Поднимаешься на лифте домой." << endl;
    cout << "Смотришь в зеркало..." << endl;
    Sleep(500);
    cout << "Дай инофрмацию о себе - " << endl;
}

class Person
{
public:
    string name;
    int growth;
    int age;
private:
    bool hungry = true;
    bool thirst = true;
public:
    void information_about_you()
    {
        cout << "Имя " << name << endl;
        cout << "Возраст " << age << endl;
        cout << "Рост " << growth << endl;

        if (hungry == true)  cout << "Голодный" << endl;
        else {
            cout << "Сытый" << endl;
        }
        if (thirst == true)  cout << "Жажда" << endl;
        else {
            cout << "Не хочешь пить" << endl;
        }
    }

    bool eat()
    {
        hungry = false;
        return hungry;
    }

    bool drink()
    {
        thirst = false;
        return thirst;
    }

};

class Pet
{
public:

    string kind;
    string name;
    int age;
    int weight;
    string colorthepet;

    string hungrypet()
    {
        if (hungry == "да") hungry = "нет";
        *&happiness += 50;
        return hungry;
    }

    string change_pet_name()
    {
        cin >> name;
        return name;
    }

    void look_at_the_pet()
    {
        cout << name << endl;
        cout << kind << endl;
        cout << age << endl;
        cout << weight << endl;
        cout << colorthepet << endl;
        cout << hungry << endl;
    }

    void praise_the_pet()
    {
        cout << "Вы погладили питомца" << endl << "Теперь питомец доволен !" << endl;
        *&happiness += 25;
    }

    void coutHappinessPet()
    {
        cout << "Счастье питомца - " << happiness << " %" << endl;
    }

private:
    int happiness = 25;
    string hungry = "да";

};

class Food
{
public:
    int food = 0;
    int sandwiches = 0;
    int pizza = 0;
    int tomatoes = 0;
    int cucumbers = 0;

    int allFood()
    {
        food = sandwiches + pizza + tomatoes + cucumbers;
        return food;
    }

    void empty_the_refrigerator_of_food()
    {
        *&sandwiches = 0;
        *&pizza = 0;
        *&tomatoes = 0;
        *&cucumbers = 0;
        allFood();
    }

    int eat_sandwich()
    {
        if (sandwiches == 0)
        {
            cout << "У вас нет бутербродов!" << endl;
        }
        else
        {
            sandwiches--;
        }
        return sandwiches;
    }

    int eat_pizza()
    {
        if (pizza == 0)
        {
            cout << "У вас нет пицц!" << endl;
        }
        else
        {
            pizza--;
        }
        return pizza;
    }

    int eat_cucumber()
    {
        if (cucumbers == 0)
        {
            cout << "У вас нет огурцов!" << endl;
        }
        else
        {
            cucumbers--;
        }
        return cucumbers;
    }

    int eat_tomatoes()
    {
        if (tomatoes == 0)
        {
            cout << "У вас нет помидоров!" << endl;
        }
        else
        {
            tomatoes--;
        }
        return tomatoes;
    }
};

class Beverage // питьё
{
public:

    int sweet_water = 0;
    int energetic_drinks = 0;
    int water_without_gas = 0;
    int water_gas = 0;
    int beverage = 0;

    int allbeverage()
    {
        beverage = sweet_water + energetic_drinks + water_without_gas + water_gas;
        return beverage;
    }

    void empty_the_refrigerator_of_water()
    {
        *&sweet_water = 0;
        *&energetic_drinks = 0;
        *&water_gas = 0;
        *&water_without_gas = 0;
        allbeverage();
    }

    int drink_water_without_gas()
    {
        if (water_without_gas == 0)
        {
            cout << "У вас нет воды без газа!" << endl;
        }
        else
        {
            water_without_gas--;
        }

        return  water_without_gas;
    }

    int drink_water_gas()
    {
        if (water_gas == 0)
        {
            cout << "У вас нет воды с газом!" << endl;
        }
        else
        {
            water_gas--;
        }
        return water_gas;
    }

    int drink_sweet_water()
    {
        if (sweet_water == 0)
        {
            cout << "У вас нет воды без газа!" << endl;
        }
        else
        {
            sweet_water--;
        }
        return sweet_water;
    }

    int drink_energetic_drink()
    {
        if (energetic_drinks == 0)
        {
            cout << "У вас нет Энергетиков!" << endl;
        }
        else
        {
            energetic_drinks--;
        }
        return energetic_drinks;
    }
};

class Fridge // холодос
{
public:
    Beverage Abeverage;
    Food Bfood;
private:
    int size = 20;
    int capacity;

public:
    int Temperature = 10;
    int height;
    int width;
    bool OffOn;

    void SeeanFridge()
    {
        cout <<"Высота " << height << " cm" << endl;
        cout <<"Ширина " << width << " cm" << endl;
        cout <<"Температура " << Temperature << "°" << endl;
        cout << "Всего вмешается еды в холодильник - " << size << endl;
        if (OffOn == true)
        {
            cout << "Холодильник включен!" << endl;
        }
        else
        {
            cout << "холодильник выключен!" << endl;
        }
    }

    bool OffOnfridge()
    {
        if (OffOn == true)
        {
            OffOn = false;
        }
        else
        {
            OffOn = true;
        }
    }

    int TemperatureSettings()
    {
        cout << "Введите температуру: ";
        cin >> Temperature;
        return Temperature;
    }

    void OpenFridge()
    {
        capacity = Bfood.allFood() + Abeverage.allbeverage();
        cout << "Всего еды в холодильнике - " << capacity << endl;
    }

    void sizeFridge()
    {
        cout << "Всего вмешается еды в холодильник - " << size << endl;
    }
};

class Room
{
public:

    int NumberRoom;
    string color; // цвет стен
    int furniture;
    bool conditioner;
    string conditioner_work;
    bool light;
    string light_work;
    bool curtains; // шторы
    string Cleanliness; // уборка
    Fridge fridge;
    Pet Pet;
    Person Human;

private:
    double square;

    string conditionerOffOn()
    {
        if (conditioner_work == "On") conditioner_work = "Off";
        else {
            conditioner_work = "On";
        }

        return conditioner_work;
    }

    string LightOffOn()
    {
        if (light_work == "On") light_work = "Off";
        else {
            light_work = "On";
        }

        return light_work;
    }

    bool Curtains()
    {
        if (curtains == true) curtains = false;
        else {
            curtains = true;
        }

        return curtains;
    }

    string Clean()
    {
        if (Cleanliness == "Грязно") Cleanliness = "Чисто";
        return Cleanliness;
    }

    void SeeAnRoom()
    {
        cout << NumberRoom << endl;
        cout << square << endl;
        cout << color << endl;
        cout << furniture << endl;
        cout << "Есть холодильник " << endl;
        cout << light_work << endl;
        if (curtains == true) cout << "Шторы задвинуты " << endl;
        else cout << "Шторы раздвинуты " << endl;
        cout << "В комнате " << Cleanliness << endl;
        cout << "Кондитионер - " << conditioner_work << endl;
        cout << "Свет - " << light_work << endl;
    }
    
};

class Hotel
{
private:
    // 1) что ты такое - какие сделать поля (аттрибуты, свойства, характеристики) - список переменных/констант, которые описывают сущность
    // какие размеры у этого типа объектов (ширина высота глубина)
    // какого оно цвета
    // какой вес и тд

    int storeys = 6; // этажность
    bool parking = true; // есть ли паркинг
    string cozy = "уютно"; // уютно ли там
    int balcony_count = 24; // количество балконов
    string address = "Будапешт. Улица Павлика 24";
    int count_of_rooms = 300; // количество комнат

    /////////////////////////////////////////////////////////////////////
    // 2) что можно делать с помощью объектов таког типа? что умеют делаь сами объекты? что можно сделать с объектами?
public:
    void Print() // посмотреть на дом
    {
        cout << "Этажность дома: " << storeys << "\n";
        cout << "Cколько балконов: " << balcony_count << "\n";
        cout << "Адрес дома: " << address << "\n";
        cout << "Там " << cozy << endl;
        if (parking == true) cout << "Паркинг есть" << endl;
        else cout << "Паркинга нет " << endl;
        cout << "Количество номеров в отеле - " << count_of_rooms << endl;
    }

    void move_out()
    {
        cout << "Вы выселились из отеля " << endl;
    }
   

};