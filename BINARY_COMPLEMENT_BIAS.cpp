// In this code , we are finding the binary representation of a number,one's complement , two's complement and bias representaion of the number entered
#include <iostream>
#include <string>
using namespace std;
string binary(int num)
{
  string str = "";
  for (int i = 4 ; i >= 0 ; i--)
  {
    if ((num >> i)&1)
    {
      str += '1';
    }
    else
    {
      str += '0';
    }
  }
  return str;
}
void onesComplement(string &temp)
{
  for (int i = 0; i < temp.size();i++)
  {
    if (temp[i]=='0')
    {
      temp[i]='1';
    }
    else
    {
      temp[i]='0';
    }
  }
}
void twosComplement(string &t)
{
  int j = t.size()-1;
  while (t[j]!='0' && j>=0)
  {
    t[j]='0';
    j--;
  }
  if (t[j]=='0')
  {
    t[j]='1';
  }
}
string bias(int num , int b)
{
  int result = num + b;
  string ans = binary(result);
  return ans;
}
int main()
{
  int num ;
  cout << "Enter the number :" << endl;
  cin >> num;
  if (num > 31)
  {
    cout << "Number is out of range." << endl;
  }
  else
  {
    string s = binary(num);
    cout <<"Binary representation is : " << s << endl;
  }
  string temp = binary(num);
  onesComplement(temp);
  cout <<"The ones complement is :" << temp << endl;
  twosComplement(temp);
  cout << "The twos complement is :" << temp << endl;
  if (num < 0)
  {
    string a = bias(num,16);
    cout << "Biased number :" << a << endl;
  }
  
  
  return 0;
}
