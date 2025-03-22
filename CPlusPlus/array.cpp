#include<iostream>
using namespace std;

int main()
{
    string ch;
    cin >> ch;

    if(ch[0] > 96)
    {

        ch[0] = ch[0] - 32;
    }

    cout << ch;
}

