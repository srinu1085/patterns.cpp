/* printing 
eg:
EEEEE
DDDDD
CCCCC
BBBBB
AAAAA
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  char i,j;
  for(i='E';i>='A';i--)
  {
    for(j='A';j<='E';j++)
    {
      cout<<i;
    }
    cout<<endl;
  }
}

//another method

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=65+n-1;i>=65;i--)
  {
    for(int j=65;j<65+n;j++)
    {
      cout<<char(i);
    }
    cout<<endl;
  }
}
