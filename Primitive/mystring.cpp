#include <iostream>
#include <string>

using namespace std;
int main(){
    string favoriteTea = "Lemon tea \n";  // here escape sequence
    string description = "Key ingredients are \"water\" etc"; // here we have uses escape character
    cout << favoriteTea << description << endl;
    return 0;
}