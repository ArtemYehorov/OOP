#include<iostream>
#include<Windows.h>
#include<string>
#pragma once



using namespace std;

void Story1()
{
    cout << "�� �������� � �������" << endl;
    cout << "�� ������ ������ 4 ���� ��������.\n����������\n������� ����\n���� ��� ����\n���� � �����" << endl << endl;
    cout << "� �� ������ ������ 4 ���� ���.\n�����\n����������\n������\n���������" << endl << endl;
}

void Story2()
{
    cout << "����� �������� �� ���� � ���� �����..." << endl;
    cout << "���� ����� ����� ��������... " << endl << endl;
}

void Story3()
{
    system("cls");
    cout << "�� �������� � �����." << endl;
    cout << "������������ �� ����� �����." << endl;
    cout << "�������� � �������..." << endl;
    Sleep(500);
    cout << "��� ���������� � ���� - " << endl;
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
        cout << "��� " << name << endl;
        cout << "������� " << age << endl;
        cout << "���� " << growth << endl;

        if (hungry == true)  cout << "��������" << endl;
        else {
            cout << "�����" << endl;
        }
        if (thirst == true)  cout << "�����" << endl;
        else {
            cout << "�� ������ ����" << endl;
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
        if (hungry == "��") hungry = "���";
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
        cout << "�� ��������� �������" << endl << "������ ������� ������� !" << endl;
        *&happiness += 25;
    }

    void coutHappinessPet()
    {
        cout << "������� ������� - " << happiness << " %" << endl;
    }

private:
    int happiness = 25;
    string hungry = "��";

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
            cout << "� ��� ��� �����������!" << endl;
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
            cout << "� ��� ��� ����!" << endl;
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
            cout << "� ��� ��� �������!" << endl;
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
            cout << "� ��� ��� ���������!" << endl;
        }
        else
        {
            tomatoes--;
        }
        return tomatoes;
    }
};

class Beverage // �����
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
            cout << "� ��� ��� ���� ��� ����!" << endl;
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
            cout << "� ��� ��� ���� � �����!" << endl;
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
            cout << "� ��� ��� ���� ��� ����!" << endl;
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
            cout << "� ��� ��� �����������!" << endl;
        }
        else
        {
            energetic_drinks--;
        }
        return energetic_drinks;
    }
};

class Fridge // �������
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
        cout <<"������ " << height << " cm" << endl;
        cout <<"������ " << width << " cm" << endl;
        cout <<"����������� " << Temperature << "�" << endl;
        cout << "����� ��������� ��� � ����������� - " << size << endl;
        if (OffOn == true)
        {
            cout << "����������� �������!" << endl;
        }
        else
        {
            cout << "����������� ��������!" << endl;
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
        cout << "������� �����������: ";
        cin >> Temperature;
        return Temperature;
    }

    void OpenFridge()
    {
        capacity = Bfood.allFood() + Abeverage.allbeverage();
        cout << "����� ��� � ������������ - " << capacity << endl;
    }

    void sizeFridge()
    {
        cout << "����� ��������� ��� � ����������� - " << size << endl;
    }
};

class Room
{
public:

    int NumberRoom;
    string color; // ���� ����
    int furniture;
    bool conditioner;
    string conditioner_work;
    bool light;
    string light_work;
    bool curtains; // �����
    string Cleanliness; // ������
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
        if (Cleanliness == "������") Cleanliness = "�����";
        return Cleanliness;
    }

    void SeeAnRoom()
    {
        cout << NumberRoom << endl;
        cout << square << endl;
        cout << color << endl;
        cout << furniture << endl;
        cout << "���� ����������� " << endl;
        cout << light_work << endl;
        if (curtains == true) cout << "����� ��������� " << endl;
        else cout << "����� ���������� " << endl;
        cout << "� ������� " << Cleanliness << endl;
        cout << "����������� - " << conditioner_work << endl;
        cout << "���� - " << light_work << endl;
    }
    
};

class Hotel
{
private:
    // 1) ��� �� ����� - ����� ������� ���� (���������, ��������, ��������������) - ������ ����������/��������, ������� ��������� ��������
    // ����� ������� � ����� ���� �������� (������ ������ �������)
    // ������ ��� �����
    // ����� ��� � ��

    int storeys = 6; // ���������
    bool parking = true; // ���� �� �������
    string cozy = "�����"; // ����� �� ���
    int balcony_count = 24; // ���������� ��������
    string address = "��������. ����� ������� 24";
    int count_of_rooms = 300; // ���������� ������

    /////////////////////////////////////////////////////////////////////
    // 2) ��� ����� ������ � ������� �������� ����� ����? ��� ����� ����� ���� �������? ��� ����� ������� � ���������?
public:
    void Print() // ���������� �� ���
    {
        cout << "��������� ����: " << storeys << "\n";
        cout << "C������ ��������: " << balcony_count << "\n";
        cout << "����� ����: " << address << "\n";
        cout << "��� " << cozy << endl;
        if (parking == true) cout << "������� ����" << endl;
        else cout << "�������� ��� " << endl;
        cout << "���������� ������� � ����� - " << count_of_rooms << endl;
    }

    void move_out()
    {
        cout << "�� ���������� �� ����� " << endl;
    }
   

};