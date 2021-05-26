/* printing 
eg:
A
BB
CCC
DDDD
EEEEE
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  char i,j;
  for(i='A';i<='E';i++)
  {
    for(j='A';j<=i;j++)
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
  for(int i=65;i<65+n;i++)
  {
    for(int j=65;j<=i;j++)
    {
      cout<<char(i);
    }
    cout<<endl;
  }
}
