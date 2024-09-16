// Learning C++
// ask the name of the user
// and print a message with the name just inserted

#include <iostream>
#include <string>

using namespace std;

int main () {
    cout <<"Ciao, qual è il tuo nome?" << flush;
    cout << endl;

    string name;
    cin >> name;

    cout << "Ciao, il tuo nome è " + name;
    cout << endl << endl;

    return(0);
}
