#import <iostream>
#import <string>
using namespace std;

struct Vector
{
    float x, y, z;
};

struct Player
{
    string name;
    int hp;
    Vector position;
};

int main()
{
    Player sam;
    sam.name       = "Sam Bohler";
    sam.hp         = 100.0f;
    sam.position.x = 1.2f;
    sam.position.y = 34.67f;
    sam.position.z = 0.23f;
    cout << "Player " << sam.name << " with " << sam.hp << " hp at ("
        << sam.position.x << ", " << sam.position.y << ", " << sam.position.z
        << ")" << endl;
    return 0;
}
