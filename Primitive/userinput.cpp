#include <iostream>
#include <string>

using namespace std;

int main(){
    string userTea;
    int teaQuantity;

    cout << "what would you like to order in tea? \n ";
    getline(cin , userTea);

    // ask for qauntity
    cout << "How many cup of " << userTea << " would you like to have? \n " ;
    cin >> teaQuantity;
    cout << teaQuantity;
    cout << userTea;
        return 0;
}