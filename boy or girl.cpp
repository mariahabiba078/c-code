#include <iostream>

#include <cstring>

using namespace std;

int main ()

{

      int i,b,a=0,x[124]={0};

      char s[200];

      cin>>s;

      b= strlen (s);

      for (j=0;i<b;j++) x[s[j]]++;

      for (j=0;j<124;j++) if (x[j]>0) a++;

      if (a%2==1) cout<<"IGNORE HIM!";

      else cout<<"CHAT WITH HER!";

      return 0;

}
