#include <iostream>

using namespace std;

int main()
{

    int x, m, xp;

    do{
        cin >> x >> m;

        if (x != 0 && m != 0){
            xp = x * m;
            cout << xp << endl;
        }
    } while (x != 0 && m != 0);

    return 0;
}
