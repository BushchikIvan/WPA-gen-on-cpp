#include <iostream>
#include <fstream>
#include <string>
//#define NULL __null
using namespace std;

const string mass[91] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a", "A", "b", "B", "c", "C", "d", "D", "e", "E", "f", "F", "g", "G", "h", "H", "i", "I", "j", "J", "k", "K", "l", "L", "m", "M", "n", "N", "o", "O", "p", "P", "q", "Q", "r", "R", "s", "S", "t", "T", "u", "U", "v", "V", "w", "W", "x", "X", "y", "Y", "z", "Z", "~", "`", "!", "@", "#", "$", "%", "^", "&", "*", "(", ")", "_", "-", "+", "=", "{", "}", "[", "]", ":", ";", "'", "<", ">", ",", ".", "?", "/"};
ofstream outf("list.txt");
void gen (string pass, int ssize, int len)
{
    if (len == 0)
    {
        outf << pass << endl;
        return;
    }

    pass += mass[0];
    gen(pass, ssize + 1, len - 1);

    for (int i = 1; i < 91; ++i)
    {
        pass[ssize] = mass[i][0];
        gen(pass, ssize + 1, len - 1);
    }
}

int main()
{
    string s = "";
    gen(s, 0, 8);

    return 0;
}
