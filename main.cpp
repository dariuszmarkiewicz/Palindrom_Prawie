#include <iostream>

using namespace std;

bool isAlmostPalindrom(string s)

{
  int i=0, j=s.size()-1, er=0;

  while(i<j)
    {
      if(s[i] != s[j])
        er++;

      if((s[i] != s[j]) && er>1) return false;

      i++; j--;
    }

  return true;
}

int main()

{
  string s;

  cin >> s;

  cout << isAlmostPalindrom(s) << endl;

  return 0;

}
