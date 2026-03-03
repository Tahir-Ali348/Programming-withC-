#include <iostream>
#include <string>

using namespace std;

int main () {
    string response;

    while (true)
    {
        cout << " Do you Want More cup of tea (Type 'stop' to Exist)?: ";
        getline(cin, response);

        if (response == "stop")
        {
            // to exist the loop
            break;
        }
        cout << "Here is your another cup of tea. \n";
        
    }
    cout << "No more cup of tea will served to you. ";
    return 0;
    
}