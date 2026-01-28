#include <iostream>

using namespace std;

int main (){
    int cups;
    cout << "Enter the cups you have: ";
    cin >> cups;

    if (cups > 20)
    {
        cout << "You will get a GOLD Badge." << endl;
    }else if (cups >= 10 && cups <= 20){
        cout << "You will get a SILVER Badge." << endl;
    }else{
        cout << "No badge for you." << endl;
    }
    
    return 0;
}

