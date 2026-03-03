#include <iostream>
#include <string>

using namespace std;

int main () {
    string teaTypes[5]  = {"Green tea", "lemon tea", "Black Tea", "Oolong tea" , "orange tea"};

    for(int i = 0 ; i < 5 ; i++ ){    
        cout << " brewing " << teaTypes[i] << "..." << endl;
        for (int j = 0; j < 3; j++)
        {
                    cout << " brewing " << j << "cup of " << teaTypes[i] << "..." << endl;
        }
        
    }
    return 0;   
}