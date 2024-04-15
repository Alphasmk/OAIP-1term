#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    int k = 0;
    int sum = 100;
    int coin50, coin20, coin5, coin2; 
    for (coin50 = 0; coin50 <= sum / 50; coin50++)
    {
        for (coin20 = 0; coin20 <= sum / 20; coin20++)
        {
            for (coin5 = 0; coin5 <= sum / 5; coin5++)
            {
                for (coin2 = 0; coin2 <= sum / 2; coin2++)
                {
                    if (coin50 * 50 + coin20 * 20 + coin5 * 5 + coin2 * 2 == sum)
                    {
                        k++;
                    }
                }
            }
        }
    }
    cout << "Количество способов набора одного рубля: " << k << endl;
    _getch();
}