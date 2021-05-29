/* printing
eg:
* * * 
*
* * *
*
* * *
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  if(n%2!=0)
  {
    for(int i=1;i<=n;i++)
    {
      if(i==1 || i==(n/2)+1 || i==n)
      {
        for(int j=1;j<=(n/2)+1;j++)
        {
          cout<<"* ";
        }
      }
      else if(i>1 && i<=(n/2))
      {
        cout<<"*";
      }
      else
      {
        for(int k=n;k=n;k++)
        { 
          cout<<"*";
        }
      } 
      cout<<endl;
    }
  }
  else
  {
    cout<<"enter odd number to get E";
  }
  return 0;
}
