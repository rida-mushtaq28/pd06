#include <iostream>
using namespace std;
void point(int h, int x, int y);

main()
{
    while (1)
    {
        int h;
        int x;
        int y;
        cout << "Enter h : ";
        cin >> h;
        cout << "Enter x coordinate : ";
        cin >> x;
        cout << "Enter y coordinate : ";
        cin >> y;
        point(h,x,y);
    }
}

void point(int h, int x, int y)
{
    if ((x > 0 && x < 3 * h && y > 0 && y < h) || (x > h && x < 2 * h && y > 0 && y < 4 * h))
    {
        cout << "Inside" << endl;
    }
    else if ((x >= 0 && x <= 3 * h && y >= 0 && y <= h) || (x >= h && x <= 2 * h && y >= 0 && y <= 4 * h))
    {
        cout << "Border" << endl;
    }
    else
    {
        cout << "Outside" << endl;
    }
}