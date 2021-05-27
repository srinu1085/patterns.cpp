/* To print
eg:
*****
*****
*****
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,n,m;
  cin>>n>>m;
  for(i=0;i<n;i++)//no. of rows
  {
    for(j=0;j<m;j++)//no. of coloumns 
    {
      cout<<"*";
    }
  cout<<endl;
  }
}


/* printing 
11111
22222
33333
44444
55555
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
      cout<<i;
    }
    cout<<endl;
  }
}

/* printing 
eg:
12345
12345
12345
12345
12345
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
      cout<<j;
    }
    cout<<endl;
  }
}


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


/* printing
eg:
54321
54321
54321
54321
54321
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=n;j>=1;j--)
    {
      cout<<j;
    }
    cout<<endl;
  }
}


/* printing
eg:
AAAAA
BBBBB
CCCCC
DDDDD
FFFFF
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
      cout<<i;
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
  for(int i=65;i<n+65;i++)
  {
    for(int j=65;j<n+65;j++)
    {
      cout<<char(i);
    }
    cout<<endl;
  }
}


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


/* printing 
eg:
EDCBA
EDCBA
EDCBA
EDCBA
EDCBA
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  char i,j;
  for(i='A';i<='E';i++)
  {
    for(j='E';j>='A';j--)
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
  for(int i=65;i<65+n;i++)
  {
    for(int j=65+n-1;j>=65;j--)
    {
      cout<<char(j);
    }
    cout<<endl;
  }
}


/* printing
eg:
* 
**
***
****
*****
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<=i;j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
}


/* printing 
eg:
1
22
333
4444
55555
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<i;
    }
    cout<<endl;
  }
}


/* printing 
eg:
1
12
123
1234
12345
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<j;
    }
    cout<<endl;
  }
}


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


/* printing
eg:
A
AB
ABC
ABCD
ABCDE
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
  for(int i=65;i<65+n;i++)
  {
    for(int j=65;j<=i;j++)
    {
      cout<<char(j);
    }
    cout<<endl;
  }
}



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
  
