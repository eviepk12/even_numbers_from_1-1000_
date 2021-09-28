#include <iostream>

using std::cout;
using std::cin;

int main ()
{
    int nomor = 1000;

    cout << "\n Nomor genap dari 1-1000 adalah \n";

    for (int i = 1; i<=nomor; i++)
    {
        if (i % 2 == 0)
            cout << i << " ";
    }

    cin.get();
    return 0;
}