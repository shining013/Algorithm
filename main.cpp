#include <iostream>
using std::cin;
using std::cout;
using std::endl;

const int NUM=100;
int GCD(int a, int b);

int main()
{
    int a(0),b(0);
    cin >> a >> b;
    if(1<=a,b&&a,b<=10000)
    {
        cout << GCD(a,b);
    }

    return 0;
}

int GCD(int a, int b)
{
    int c;
    while(b)
    {
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}