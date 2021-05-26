/* rprinting
eg:
*****
****
***
**
*
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=n;i>=1;i--)
  {
    for(int j=0;j<i;j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
}

//another way


#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=n;j>=i;j--)
    {
      cout<<"*";
    }
    cout<<endl;
  }
}


/* printing
eg:
11111
2222
333
44
5
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=n;j>=i;j--)
    {
      cout<<i;
    }
    cout<<endl;
  }
}


/* printing
eg:

54321
5432
543
54
5
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=n;j>=i;j--)
    {
      cout<<j;
    }
    cout<<endl;
  }
}


/* printing
eg:
55555
4444
333
22
1
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
  cin>>n;
  
