#include <iostream>
#include <string>
#include "data.h"

using namespace std;

int main()
{
    Data data_0, data_1, data_2;

    data_0 = Data(16, 1, 2000);
    data_1 = Data(20, 2, 2019);
    data_2 = Data(35, 4, 1999);

    cout << "---------data 0----------" << endl << endl;

    cout << data_0.getDia() << "/" << data_0.getMes() << "/" << data_0.getAno() << endl << endl;

    cout << "---------data 1----------" << endl << endl;

    cout << data_1.getDia() << "/" << data_1.getMes() << "/" << data_1.getAno() << endl << endl;

    cout << "---------data 2----------" << endl << endl;

    cout << data_2.getDia() << "/" << data_2.getMes() << "/" << data_2.getAno() << endl << endl;
}
