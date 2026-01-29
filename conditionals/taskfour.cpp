#include <iostream>
 using namespace std;

 int main (){
    int choice;
    double price;

    cout << "Select your Tea\n";
    cout << "1. for Green Tea\n";
    cout << "2. for Lemon Tea\n";
    cout << "3. for Oolong Tea\n";
    cout << "Enter your choice in Number: \n";
    cin >> choice;

    switch(choice){
        case 1:
        price = 2.0;
        cout << "You selected Green Tea. Price " << price << endl;
        break;
        case 2:
        price = 3.0;
        cout << "You selected Lemon Tea. Price " << price << endl;
        break;
        case 3:
        price = 4.0;
        cout << "You selected Oolong Tea. Price " << price << endl;
        break;
        default:
        cout << "Invalid choice" << endl;
        break;
        
    }
    return 0;
 }