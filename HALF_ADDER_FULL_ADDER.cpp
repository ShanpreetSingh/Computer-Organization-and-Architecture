#include <iostream>
using namespace std;
char And(char a, char b)
{
  if (a == '1' && b =='1')
  {
    return '1';
  }
  return '0';
}
char Or(char a, char b)
{
  if (a == '0' && b == '0')
  {
    return '0';
  }
  return '1';
}
char Xor(char a, char b)
{
  if (a== '0'&& b=='0')
  {
    return '0';
  }
  if (a == '1' && b == '1')
  {
    return '0';
  }
  return '1';
}
int main() {
    char A;
    char B;
    cout << "--HALF ADDER IMPLEMENTATION--" << endl;
    cout << "Enter the value of A:" << endl;
    cin >> A;
    cout << "Enter the value of B:" << endl;
    cin >>B;
    cout << "Sum is -> " << "A ^ B -> " << Xor(A,B) << endl;
    cout << "Carry is ->" << "A.B ->" << And(A,B) << endl;
    char a;
    char b;
    char c;
    cout << "--FULL ADDER IMPLEMENTATION--" << endl;
    cout << "Enter the value of A ->" << endl;
    cin >> a;
    cout << "Enter the value of B ->" << endl;
    cin >> b;
    cout << "Enter the value of Cin ->" << endl;
    cin >> c;
    cout << "Sum is -> " << "A ^ B ^ Cin ->" << Xor(Xor(a,b),c) << endl;
    cout << "Carry is -> " << "A.B+B.Cin+A.Cin ->" << Or(Or(And(a,b),And(b,c)),And(a,c)) << endl;

    return 0;
}
