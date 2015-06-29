#include <iostream>

using namespace std;

enum Mount
{
    Horse=1, Mare, Mule, Sheep, Chocobo
};

int main()
{
    int mount;
    cout << "Choose your mount:" << endl;
    cout << Horse << " Horse" << endl;
    cout << Mare << " Mare" << endl;
    cout << Mule << " Mule" << endl;
    cout << Sheep << " Sheep" << endl;
    cout << Chocobo << " Chocobo" << endl;
    cout << "Enter a number from 1 to 5 to choose a mount" << endl;
    cin >> mount;

    switch( mount )
    {
        case Horse:
            cout << "I'm on a horse!" << endl;
            break;
        case Mare:
            cout << "Bad horse made you his mare!" << endl;
            break;
        case Mule:
            cout << "Into Commodore 64 games, eh?" << endl;
            break;
        case Sheep:
            cout << "Stay with me, safe and ignorant." << endl;
            break;
        case Chocobo:
            cout << "Time to get a Knights of the Round summon!" << endl;
            break;
        default:
            cout << "Invalid mount" << endl;
            break;
    }
    return 0;
}
