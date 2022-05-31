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

    cout << "Сколько ты хочешь купить бутербродов ? - " << endl;
    MyRoom.fridge.sizeFridge();
    cout << "В твоей корзине - еды - " << allfood << " воды - " << allbeverage << endl;
    cin >> MyRoom.fridge.Bfood.sandwiches;
    system("cls");

    allfood += MyRoom.fridge.Bfood.sandwiches;

    if (allfood < 10)
    {
        cout << "Сколько ты хочешь купить пицц ? - ";
        MyRoom.fridge.sizeFridge();
        cout << "В твоей корзине - еды - " << allfood << " воды - " << allbeverage << endl;
        cin >> MyRoom.fridge.Bfood.pizza;
        system("cls");

        allfood += MyRoom.fridge.Bfood.pizza;
    }
    else cout << "В твоём холодильнике больше нет места для еды!" << endl;

    if (allfood < 10)
    {
        cout << "Сколько ты хочешь купить огурчиков ? - ";
        MyRoom.fridge.sizeFridge();
        cout << "В твоей корзине - еды - " << allfood << " воды - " << allbeverage << endl;
        cin >> MyRoom.fridge.Bfood.cucumbers;
        system("cls");

        allfood += MyRoom.fridge.Bfood.cucumbers;
    }
    
    if (allfood < 10)
    {
        cout << "Сколько ты хочешь купить помидорок ? - ";
        MyRoom.fridge.sizeFridge();
        cout << "В твоей корзине - еды - " << allfood << " воды - " << allbeverage << endl;
        cin >> MyRoom.fridge.Bfood.tomatoes;
        system("cls");

        allfood += MyRoom.fridge.Bfood.tomatoes;
    }
    


    cout << "Сколько ты хочешь купить Энергетиков ? - ";
    MyRoom.fridge.sizeFridge();
    cout << "В твоей корзине - еды - " << allfood << " воды - " << allbeverage << endl;
    cin >> MyRoom.fridge.Abeverage.energetic_drinks;
    system("cls");
    
    allbeverage += MyRoom.fridge.Abeverage.energetic_drinks;

    if (allbeverage < 10)
    {
        cout << "Сколько ты хочешь купить Сладкой воды ? - ";
        MyRoom.fridge.sizeFridge();
        cout << "В твоей корзине - еды - " << allfood << " воды - " << allbeverage << endl;
        cin >> MyRoom.fridge.Abeverage.sweet_water;
        system("cls");

        allbeverage += MyRoom.fridge.Abeverage.sweet_water;
    }
    else cout << "В твоём холодильнике больше нет место для воды!" << endl;
  
    if (allbeverage < 10)
    {
        cout << "Сколько ты хочешь купить Воды без газа ? - "; 
        MyRoom.fridge.sizeFridge();
        cout << "В твоей корзине - еды - " << allfood << " воды - " << allbeverage << endl;
        cin >> MyRoom.fridge.Abeverage.water_without_gas;
        system("cls");

        allbeverage += MyRoom.fridge.Abeverage.water_without_gas;
    }

    if (allbeverage < 10)
    {
        cout << "Сколько ты хочешь купить Воды с газом ? - ";
        MyRoom.fridge.sizeFridge();
        cout << "В твоей корзине - еды - " << allfood << " воды - " << allbeverage << endl;
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
    cout << "Твоё имя ";
    cin >> MyRoom.Human.name;
    system("cls");

    cout << "Твой возвраст ";
    cin >> MyRoom.Human.age;
    system("cls");

    cout << "Твой рост ";
    cin >> MyRoom.Human.growth;
    system("cls");

    MyRoom.Human.information_about_you();
    cout << endl;

    Sleep(1000);

    cout << "Вы смотрите на холодильник." << endl;
    MyRoom.fridge.SeeanFridge();
    cout << "Вы открываетет холодильник." << endl;
    MyRoom.fridge.OpenFridge();
    cout << "Хотите по кушать?" << endl;
    int eat;
    cin >> eat;
    if (eat == 1)
    {
        int variableeat = 6;
        while (variableeat >= 5)
        {
            cout << "Что вы хотите скушать?\nПиццу?\nБутерброд?\nОгурец?\nПомидорку?" << endl;
            cin >> variableeat;
            if (variableeat == 1 && MyRoom.fridge.Bfood.pizza > 0)
            {
                MyRoom.fridge.Bfood.eat_pizza();
                MyRoom.Human.eat();
                cout << "Вы скушали пиццу!" << endl;
            }
            else if (variableeat == 2 && MyRoom.fridge.Bfood.sandwiches > 0)
            {
                MyRoom.fridge.Bfood.eat_sandwich();
                MyRoom.Human.eat();
                cout << "Вы скушали бутерброд!" << endl;
            }
            else if (variableeat == 3 && MyRoom.fridge.Bfood.cucumbers > 0)
            {
                MyRoom.fridge.Bfood.eat_cucumber();
                MyRoom.Human.eat();
                cout << "Вы скушали огурец!" << endl;
            }
            else if (variableeat == 4 && MyRoom.fridge.Bfood.tomatoes > 0)
            {
                MyRoom.fridge.Bfood.eat_tomatoes();
                MyRoom.Human.eat();
                cout << "Вы скушали помидорку!" << endl;
            }
            else
            {
                cout << "Такого нет!" << endl;
                system("cls");
            }
        }
    }
    else
    {
        cout << "Ладно";
    }

    cout << "Хотите попить?" << endl;
    int drink;
    cin >> drink;
    if (drink == 1)
    {
        int variabledrink = 6;
        while (variabledrink >= 5)
        {
            cout << "Что вы хотите попить?\nЭнергетик?\nВоду без газа?\nВоду с газом?\nСладкую воду?" << endl;
            cin >> variabledrink;
            if (variabledrink == 1 && MyRoom.fridge.Abeverage.energetic_drinks > 0)
            {
                MyRoom.fridge.Abeverage.drink_energetic_drink();
                MyRoom.Human.drink();
                cout << "Вы выпили Энергетик!" << endl;
            }
            else if (variabledrink == 2 && MyRoom.fridge.Abeverage.water_without_gas > 0)
            {
                MyRoom.fridge.Abeverage.drink_water_without_gas();
                MyRoom.Human.drink();
                cout << "Вы выпили воду без газа!" << endl;
            }
            else if (variabledrink == 3 && MyRoom.fridge.Abeverage.water_gas > 0)
            {
                MyRoom.fridge.Abeverage.drink_water_gas();
                MyRoom.Human.drink();
                cout << "Вы выпили воду с газом!" << endl;
            }
            else if (variabledrink == 4 && MyRoom.fridge.Abeverage.sweet_water > 0)
            {
                MyRoom.fridge.Abeverage.drink_sweet_water();
                MyRoom.Human.drink();
                cout << "Вы выпили сладкую воду!" << endl;
            }
            else
            {
                cout << "Такого нет!" << endl;
                system("cls");
            }
        }
    }
    else
    {
        cout << "Ладно";
    }

    system("cls");

    MyRoom.Human.information_about_you();

    //I would like to finish this story to the end, but the essence of the task is not in this)))
    //I would like to finish this story to the end, but the essence of the task is not in this)))
    //I would like to finish this story to the end, but the essence of the task is not in this)))
}
