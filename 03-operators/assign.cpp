#include <iostream>
#include <string>

using namespace std;

int main(){
    int teaBages;
    cout << "Enter the Number of tea Bages you have: ";
    cin >> teaBages;

    if (teaBages < 10)
    {
        // teaBages = teaBages + 5;
        teaBages += 5;
    }
    cout << "Your tea bags are: " << teaBages;
    
    return 0;
}