#include "Header.h"

using namespace std;

int main()
{
    int allfood = 0;
    int allbeverage = 0;
    Room MyRoom;
    MyRoom.fridge.height = 100;
    MyRoom.fridge.width = 80;
    setlocale(0, "ru");

    Story1();

    cout << "������� �� ������ ������ ����������� ? - " << endl;
    MyRoom.fridge.sizeFridge();
    cout << "� ����� ������� - ��� - " << allfood << " ���� - " << allbeverage << endl;
    cin >> MyRoom.fridge.Bfood.sandwiches;
    system("cls");

    allfood += MyRoom.fridge.Bfood.sandwiches;

    if (allfood < 10)
    {
        cout << "������� �� ������ ������ ���� ? - ";
        MyRoom.fridge.sizeFridge();
        cout << "� ����� ������� - ��� - " << allfood << " ���� - " << allbeverage << endl;
        cin >> MyRoom.fridge.Bfood.pizza;
        system("cls");

        allfood += MyRoom.fridge.Bfood.pizza;
    }
    else cout << "� ���� ������������ ������ ��� ����� ��� ���!" << endl;

    if (allfood < 10)
    {
        cout << "������� �� ������ ������ ��������� ? - ";
        MyRoom.fridge.sizeFridge();
        cout << "� ����� ������� - ��� - " << allfood << " ���� - " << allbeverage << endl;
        cin >> MyRoom.fridge.Bfood.cucumbers;
        system("cls");

        allfood += MyRoom.fridge.Bfood.cucumbers;
    }
    
    if (allfood < 10)
    {
        cout << "������� �� ������ ������ ��������� ? - ";
        MyRoom.fridge.sizeFridge();
        cout << "� ����� ������� - ��� - " << allfood << " ���� - " << allbeverage << endl;
        cin >> MyRoom.fridge.Bfood.tomatoes;
        system("cls");

        allfood += MyRoom.fridge.Bfood.tomatoes;
    }
    


    cout << "������� �� ������ ������ ����������� ? - ";
    MyRoom.fridge.sizeFridge();
    cout << "� ����� ������� - ��� - " << allfood << " ���� - " << allbeverage << endl;
    cin >> MyRoom.fridge.Abeverage.energetic_drinks;
    system("cls");
    
    allbeverage += MyRoom.fridge.Abeverage.energetic_drinks;

    if (allbeverage < 10)
    {
        cout << "������� �� ������ ������ ������� ���� ? - ";
        MyRoom.fridge.sizeFridge();
        cout << "� ����� ������� - ��� - " << allfood << " ���� - " << allbeverage << endl;
        cin >> MyRoom.fridge.Abeverage.sweet_water;
        system("cls");

        allbeverage += MyRoom.fridge.Abeverage.sweet_water;
    }
    else cout << "� ���� ������������ ������ ��� ����� ��� ����!" << endl;
  
    if (allbeverage < 10)
    {
        cout << "������� �� ������ ������ ���� ��� ���� ? - "; 
        MyRoom.fridge.sizeFridge();
        cout << "� ����� ������� - ��� - " << allfood << " ���� - " << allbeverage << endl;
        cin >> MyRoom.fridge.Abeverage.water_without_gas;
        system("cls");

        allbeverage += MyRoom.fridge.Abeverage.water_without_gas;
    }

    if (allbeverage < 10)
    {
        cout << "������� �� ������ ������ ���� � ����� ? - ";
        MyRoom.fridge.sizeFridge();
        cout << "� ����� ������� - ��� - " << allfood << " ���� - " << allbeverage << endl;
        cin >> MyRoom.fridge.Abeverage.water_gas;
        system("cls");

        allbeverage += MyRoom.fridge.Abeverage.water_gas;
    }

    Story2();
    Sleep(2000);
    Hotel myHotel;
    myHotel.Print();
    Sleep(2000);

    Story3();
    cout << "��� ��� ";
    cin >> MyRoom.Human.name;
    system("cls");

    cout << "���� �������� ";
    cin >> MyRoom.Human.age;
    system("cls");

    cout << "���� ���� ";
    cin >> MyRoom.Human.growth;
    system("cls");

    MyRoom.Human.information_about_you();
    cout << endl;

    Sleep(1000);

    cout << "�� �������� �� �����������." << endl;
    MyRoom.fridge.SeeanFridge();
    cout << "�� ����������� �����������." << endl;
    MyRoom.fridge.OpenFridge();
    cout << "������ �� ������?" << endl;
    int eat;
    cin >> eat;
    if (eat == 1)
    {
        int variableeat = 6;
        while (variableeat >= 5)
        {
            cout << "��� �� ������ �������?\n�����?\n���������?\n������?\n���������?" << endl;
            cin >> variableeat;
            if (variableeat == 1 && MyRoom.fridge.Bfood.pizza > 0)
            {
                MyRoom.fridge.Bfood.eat_pizza();
                MyRoom.Human.eat();
                cout << "�� ������� �����!" << endl;
            }
            else if (variableeat == 2 && MyRoom.fridge.Bfood.sandwiches > 0)
            {
                MyRoom.fridge.Bfood.eat_sandwich();
                MyRoom.Human.eat();
                cout << "�� ������� ���������!" << endl;
            }
            else if (variableeat == 3 && MyRoom.fridge.Bfood.cucumbers > 0)
            {
                MyRoom.fridge.Bfood.eat_cucumber();
                MyRoom.Human.eat();
                cout << "�� ������� ������!" << endl;
            }
            else if (variableeat == 4 && MyRoom.fridge.Bfood.tomatoes > 0)
            {
                MyRoom.fridge.Bfood.eat_tomatoes();
                MyRoom.Human.eat();
                cout << "�� ������� ���������!" << endl;
            }
            else
            {
                cout << "������ ���!" << endl;
                system("cls");
            }
        }
    }
    else
    {
        cout << "�����";
    }

    cout << "������ ������?" << endl;
    int drink;
    cin >> drink;
    if (drink == 1)
    {
        int variabledrink = 6;
        while (variabledrink >= 5)
        {
            cout << "��� �� ������ ������?\n���������?\n���� ��� ����?\n���� � �����?\n������� ����?" << endl;
            cin >> variabledrink;
            if (variabledrink == 1 && MyRoom.fridge.Abeverage.energetic_drinks > 0)
            {
                MyRoom.fridge.Abeverage.drink_energetic_drink();
                MyRoom.Human.drink();
                cout << "�� ������ ���������!" << endl;
            }
            else if (variabledrink == 2 && MyRoom.fridge.Abeverage.water_without_gas > 0)
            {
                MyRoom.fridge.Abeverage.drink_water_without_gas();
                MyRoom.Human.drink();
                cout << "�� ������ ���� ��� ����!" << endl;
            }
            else if (variabledrink == 3 && MyRoom.fridge.Abeverage.water_gas > 0)
            {
                MyRoom.fridge.Abeverage.drink_water_gas();
                MyRoom.Human.drink();
                cout << "�� ������ ���� � �����!" << endl;
            }
            else if (variabledrink == 4 && MyRoom.fridge.Abeverage.sweet_water > 0)
            {
                MyRoom.fridge.Abeverage.drink_sweet_water();
                MyRoom.Human.drink();
                cout << "�� ������ ������� ����!" << endl;
            }
            else
            {
                cout << "������ ���!" << endl;
                system("cls");
            }
        }
    }
    else
    {
        cout << "�����";
    }

    system("cls");

    MyRoom.Human.information_about_you();

    //I would like to finish this story to the end, but the essence of the task is not in this)))
    //I would like to finish this story to the end, but the essence of the task is not in this)))
    //I would like to finish this story to the end, but the essence of the task is not in this)))
}
