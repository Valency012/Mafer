#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int num1 = 1;

    while (num1 != 10)
    {
        cout << "Adivine el numero del 1-20" <<endl;
        cin >> num1;

        if (num1 < 10)
        {
            cout << "El numero ingresado es menor "<<endl;
        }
        else
        {
            cout << "El numero es mayor" <<endl;
            
        }
    }

    return 0;
}
