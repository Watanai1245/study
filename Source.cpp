#include<iostream>
#include<math.h>
using namespace std;

void convert(string x, int e, int i, int sum)
{
    while (e >= 0)
    {
        char* p = &x[e];
        int pw = pow(2, i);
        int y = *p - 48;
        sum = sum + (y * pw);
        i++;
        e--;
    }
    cout << "Decimal = " << sum << endl;
}

int main()
{
START:
    int sum = 0;
    int i = 0, c = 0;
    string x;
    cout << "Enter binary : ";
    cin >> x;
    int s = x.size();
    int e = s - 1;

    while (c < s)
    {
        char* p = &x[c];
        if (*p - 48 < 0 || *p - 48 > 1)
        {
            cout << "Can enter only 0 and 1." << endl;
            system("pause");
            system("CLS");
            goto START;
        }
        c++;
    }

    convert(x, e, i, sum);

    system("pause");
    return 0;
}