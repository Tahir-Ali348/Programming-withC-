#include <iostream>

using namespace std;

int main(){
    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "Enter the number of tea Cups: ";
    cin >> cups; 
    cout << "Enter the Price per Cup: ";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    // apply 5% discount if total price is above 100.
    if (totalPrice > 100)
    {
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Discounted is: " << discountedPrice << endl;
    }else
    {
        cout << "Total price is " << totalPrice << endl;
    }
    
    return 0;
}