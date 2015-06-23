#import <iostream>
#import <string>
using namespace std;

int main()
{
    string name;
    int age;

    printf("What is your name?\n");
    cin >> name;

    printf("And you age?\n");
    cin >> age;

    printf("Hello %s, I see you have attained %d years of age. Congratulations.\n", name.c_str(), age);

    return 0;
}
