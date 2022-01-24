#include <iostream>
using namespace std;

/*Hungry Ashish Problem Code: PIZZA_BURGER*/

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        if (x >= y)
        {
            cout << "pizza" << endl;
        }
        else if (x >= z)
        {
            cout << "burger" << endl;
        }
        else
        {
            cout << "nothing" << endl;
        }
    }
    return 0;
}
