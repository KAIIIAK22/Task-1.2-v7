#include <iostream>
using namespace std;

int main()
{
    unsigned  int a ;
    cout<<"Vasha zarplata($): ";
    cin >>a;
    while (1)
    {
        if (a>1000)
        {
            if (a>1000000)
            {
                cout <<"Ti millioner!";
                break;
            }
            cout <<"Horosho";
            break;
        }
        cout <<"Rabotai bolshe";
        break;
    }
    cout <<"...no ti molodec";
    return 0;
}
