#include <iostream>
#include <string>

using namespace std;

int main (){
    int teaCups;
    cout << "Enter the number of tea cups to serve. ";
    cin >> teaCups;
    while (teaCups > 0)
    {
        cout << "Serving a cup of Tea \n " << teaCups << "Remaining" << endl;
        teaCups--;
    }
    cout << "All tea cups ara served. " << endl;
    
    return 0;
}