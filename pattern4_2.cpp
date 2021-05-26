/* printing 
eg:
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  char i,j;
  for(i='A';i<='E';i++)
  {
    for(j='A';j<='E';j++)
    {
      cout<<j;
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
  for(int i=65;i<n+65;i++)
  {
    for(int j=65;j<n+65;j++)
    {
      cout<<char(j);
    }
    cout<<endl;
  }
}
