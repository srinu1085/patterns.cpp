/* printing
eg:
55555
44444
33333
22222
11111
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=5;i>=1;i--)
  {
    for(int j=1;j<=n;j++)
    {
      cout<<i;
    }
    cout<<endl;
  }
}
