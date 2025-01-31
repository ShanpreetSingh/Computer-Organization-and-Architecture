#include <iostream>
using namespace std;

char And(char a, char b)
{
    // only case when AND gate gives 1 is when both the inputs are 1
    if (a == '1' && b == '1')
    {
        return '1';
    }
    return '0';
}

char Or(char a, char b)
{
    // only case when OR gate gives 0 is when both the inputs are 0
    if (a == '0' && b == '0')
    {
        return '0';
    }
    return '1';
}

char Nand(char a, char b)
{
    // only case when NAND gate gives 0 is when both the inputs are 1
    if (a == '1' && b == '1')
    {
        return '0';
    }
    return '1';
}

char Nor(char a, char b)
{
    // only case when NOR gate gives 1 is when both the inputs are 0
    if (a == '0' && b == '0')
    {
        return '1';
    }
    return '0';
}

char Negate(char a)
{
    // Simply do the negation (opposite)
    if (a == '1')
    {
        return '0';
    }
    return '1';
}

char Xor(char a, char b)
{
    // XOR gate gives 1 when inputs are different
    if ((a == '0' && b == '1') || (a == '1' && b == '0'))
    {
        return '1';
    }
    return '0';
}
char Xnor(char a, char b)
{
    // XNOR is opposite of XOR
    if ((a == '0' && b == '0') || (a == '1' && b == '1'))
    {
        return '1';
    }
    return '0';
}
int main()
{
    string s;
    cout << "Enter the string :" << endl;
    cin >> s;
    int n = s.size();
    if (n == 0)
    {
        cout << "String is empty." << endl;
    }
    else
    {
        char ans = s[0];
        char ans1 = ans;
        char ans2 = ans;
        char ans3 = ans;
        char ans4 = ans;
        char ans5 = ans;
        char ans6 = ans;
        for (int i = 1; i < n; i++)
        {
            ans1 = And(ans1, s[i]);
            ans2 = Or(ans2, s[i]);
            ans3 = Nor(ans3, s[i]);
            ans4 = Nand(ans4, s[i]);
            ans5 = Xor(ans5, s[i]);
            ans6 = Xnor(ans6, s[i]);
        }
        cout << "And result is -> " << ans1 << endl;
        cout << "Or result is -> " << ans2 << endl;
        cout << "Nor result is ->" << ans3 << endl;
        cout << "Nand result is -> " << ans4 << endl;
        cout << "Xor result is -> " << ans5 << endl;
        cout << "Xnor result is ->" << ans6 << endl;
    }
    char a;
    cout << "Enter the bit you want to negate :" << endl;
    cin >> a;
    char negate = Negate(a);
    cout << "Negation is :" << negate << endl;

    return 0;
}
