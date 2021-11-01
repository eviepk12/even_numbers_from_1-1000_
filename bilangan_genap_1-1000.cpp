// Print even numbers from 1-1000 

#include <iostream>

using std::cout;
using std::cin;

int main ()
{
    int nomor = 1000; 

    cout << "\n Nomor genap dari 1-1000 adalah \n";

    for (int i = 1; i<=nomor; i++)
    {
        if (i % 2 == 0) // == 0 means that if i is completely divisible by 2 to execute the print command next, if not then execute the loop again
            cout << i << " ";
    }

    cin.get();
    return 0;
}