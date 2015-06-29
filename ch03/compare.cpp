#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "First integer for comparison?" << endl;
    cin >> x;
    cout << "Second integer for comparison?" << endl;
    cin >> y;
    if (x > y) {
        printf("%d is bigger than %d.\n", x, y);
    }
    else if(y > x)
    {
        printf("%d is bigger than %d.\n", y, x);
    }
    else
    {
        printf("%d equals %d.\n", x, y);
    }
    return 0;
}
