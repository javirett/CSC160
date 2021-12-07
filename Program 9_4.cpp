/*
Food Menu Program
Programmer: Avirett, Jack.
Course: CSC 160
Submission Date: 11/17/21
This program allows the user to order items from a menu, and then calculates their bill.
*/



#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 8;

struct menuItemType
{
    string menuItem;
    double menuPrice;
    int itemAmount;
    double itemTotal;
} menuList[SIZE];

void getData(menuItemType menuList[]);
void showMenu(menuItemType menuList[], int SIZE);
void printBill(menuItemType menuList[], int SIZE);

int main()
{
    getData(menuList);
    showMenu(menuList, SIZE);
    printBill(menuList, SIZE);

}

void getData(menuItemType menuList[])
{
    menuList[0].menuItem = "Plain Egg";
    menuList[0].menuPrice = 1.45;
    menuList[1].menuItem = "Bacon & Egg";
    menuList[1].menuPrice = 2.45;
    menuList[2].menuItem = "Muffin";
    menuList[2].menuPrice = 0.99;
    menuList[3].menuItem = "French Toast";
    menuList[3].menuPrice = 1.99;
    menuList[4].menuItem = "Fruit Basket";
    menuList[4].menuPrice = 2.49;
    menuList[5].menuItem = "Cereal";
    menuList[5].menuPrice = 0.69;
    menuList[6].menuItem = "Coffee";
    menuList[6].menuPrice = 0.50;
    menuList[7].menuItem = "Tea";
    menuList[7].menuPrice = 0.75;
}
void showMenu(menuItemType menuList[], int SIZE)
{
    for (int i = 0; i<SIZE; i++)
    {
        cout << menuList[i].menuItem << setw(20) << showpoint << fixed << setprecision(2) << menuList[i].menuPrice << endl;
    }
    cout << endl;
    cout << "Enter your order: " << endl;
    cout << "Enter a number for each item." << endl;


    for (int x = 0; x<SIZE; x++)
    {
        cout << menuList[x].menuItem << setw(20) << menuList[x].menuPrice << " ";
        cin >> menuList[x].itemAmount;
        cout << endl;

        while (menuList[x].itemAmount < 0 || menuList[x].itemAmount > 99)
        {
            cout << "Error to little or too large of number. Try again. " << endl;
            cin >> menuList[x].itemAmount;
            cout << endl;
        }
    }
}
void printBill(menuItemType menuList[], int SIZE)
{
    double total;

    for (int i = 0; i<SIZE; i++)
    {

        menuList[i].itemTotal = menuList[i].menuPrice * menuList[i].itemAmount;

        total += menuList[i].itemTotal;

        cout << menuList[i].menuItem << " " << menuList[i].itemAmount << setw(10) << menuList[i].itemTotal << endl;
    }

    cout << "Total: " << setw(20) << total << endl;

}
