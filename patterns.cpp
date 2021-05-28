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
  for(int i=n;i>=1;i--)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<i;
    }
    cout<<endl;
  }
}


/*printing
eg:
AAAAA
BBBB
CCC
DD
E
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  char i,j;
  for(i='A';i<='E';i++)
  {
    for(j='E';j>=i;j--)
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
    for(int j=65+n;j>i;j--)
    {
      cout<<char(i);
    }
    cout<<endl;
  }
}



/* printing
eg:
EEEEE
DDDD
CCC
BB
A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  char i,j;
  for(i='E';i>='A';i--)
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
  for(int i=n-1;i>=0;i--)
  {
    for(int j=0;j<=i;j++)
    {
      cout<<char(i+65);
    }
    cout<<endl;
  }
}


/* printing 
eg:
EDCBA
EDCB
EDC
ED
E
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
  char i,j;
  for(i='A';i<='E';i++)
  {
      for(j='E';j>=i;j--)
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
  for(int i=0;i<n;i++)
  {
    for(int j=n-1;j>=i;j--)
    {
      cout<<char(j+65);
      }
    cout<<endl;
  }
}


/* printing 
eg:
ABCDE
ABCD
ABC
AB
A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  char i,j;
  for(i='E';i>='A';i--)
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
  for(int i=n;i>0;i--)
  {
    for(int j=0;j<i;j++)
    {
      cout<<char(j+65);
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
  for(int i=0;i<n;i++)//outer loop
  {
    for(int j=n;j>i;j--)//inner loop 1
    {
      cout<<" ";//print white spaces
    }
    for(int k=0;k<=i;k++)//inner loop 2
    {
        cout<<"*";
    }
    cout<<endl;
  }
}


/* printing 
eg:
     * 
    * *
   * * *
  * * * *
 * * * * *
 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)//outer loop
  {
    for(int j=n;j>i;j--)//inner loop 1
    {
      cout<<" ";//print white spaces
    }
    for(int k=0;k<=i;k++)//inner loop 2
    {
        cout<<"* ";//white space after *
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
    for(int j=n-1;j>=i;j--)
    {
      cout<<" ";
    }
    for(int k=1;k<=i;k++)
    {
        cout<<i;
    }
    cout<<endl;
  }
}


/* printing
eg:
    1 
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=n-1;j>=i;j--)
    {
      cout<<" ";
    }
    for(int k=1;k<=i;k++)
    {
        cout<<i<<" ";
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
    for(int j=n-1;j>=i;j--)
    {
      cout<<" ";
    }
     for(int k=1;k<=i;k++)
     {
       cout<<k;
     }
     cout<<endl;
  }
}


/* printing 
eg:
    1 
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=n-1;j>=i;j--)
    {
      cout<<" ";
    }
     for(int k=1;k<=i;k++)
     {
       cout<<k<<" ";
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
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    for(int j=n;j>i;j--)
    {
      cout<<" ";
    }
     for(int k=0;k<=i;k++)

     {
       cout<<char(65+i);
     }
     cout<<endl;
  }
}


/* printing
eg:
     A 
    B B
   C C C
  D D D D
 E E E E E
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    for(int j=n;j>i;j--)
    {
      cout<<" ";
    }
     for(int k=0;k<=i;k++)

     {
       cout<<char(65+i)<<" ";
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
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    for(int j=n;j>i;j--)
    {
      cout<<" ";
    }
     for(int k=0;k<=i;k++)

     {
       cout<<char(65+k);
     }
     cout<<endl;
  }
}


/* printing
eg:
     A 
    A B
   A B C
  A B C D
 A B C D E
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    for(int j=n;j>i;j--)
    {
      cout<<" ";
    }
     for(int k=0;k<=i;k++)

     {
       cout<<char(65+k)<<" ";
     }
     cout<<endl;
  }
}


/* printing
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
  for(int i=n;i>0;i--)
  {
    for(int j=n;j>=i;j--)
    {
      cout<<" ";
    }
    for(int k=0;k<i;k++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
}


/* printing 
eg:
 * * * * * 
  * * * *
   * * *
    * *
     *
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=n;i>0;i--)
  {
    for(int j=n;j>=i;j--)
    {
      cout<<" ";
    }
    for(int k=0;k<i;k++)
    {
      cout<<"*"<<" ";
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
  for(int i=n;i>0;i--)
  {
    for(int j=n;j>=i;j--)
    {
      cout<<" ";
    }
    for(int k=0;k<i;k++)
    {
      cout<<i;
    }
    cout<<endl;
  }
}


/* printing
eg:
 5 5 5 5 5 
  4 4 4 4
   3 3 3
    2 2
     1
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=n;i>0;i--)
  {
    for(int j=n;j>=i;j--)
    {
      cout<<" ";
    }
    for(int k=0;k<i;k++)
    {
      cout<<i<<" ";
    }
    cout<<endl;
  }
}


/* printing
eg:
 12345
  1234
   123
    12
     1
*/     

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=n;i>0;i--)
  {
    for(int j=n;j>=i;j--)
    {
      cout<<" ";
    }
    for(int k=1;k<=i;k++)
    {
      cout<<k;
    }
    cout<<endl;
  }
}

/* printing
eg:
 1 2 3 4 5 
  1 2 3 4
   1 2 3
    1 2 
     1
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=n;i>0;i--)
  {
    for(int j=n;j>=i;j--)
    {
      cout<<" ";
    }
    for(int k=1;k<=i;k++)
    {
      cout<<k<<" ";
    }
    cout<<endl;
  }
}


/* printing
eg:
EEEEE
 DDDD
  CCC
   BB
    A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=n;i>0;i--)
  {
    for(int j=n;j>=i;j--)
    {
      cout<<" ";
    }
    for(int k=0;k<i;k++)
    {
      cout<<char(64+i);
    }
    cout<<endl;
  }
}


/*printing 
eg:
E E E E E 
 D D D D
  C C C
   B B
    A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=n;i>0;i--)
  {
    for(int j=n;j>i;j--)
    {
      cout<<" ";
    }
    for(int k=0;k<i;k++)
    {
      cout<<char(64+i)<<" ";
    }
    cout<<endl;
  }
}
    
  
/*printing
eg:
ABCDE
 ABCD
  ABC
   AB
    A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=n;i>0;i--)
  {
    for(int j=n;j>i;j--)
    {
      cout<<" ";
    }
    for(int k=0;k<i;k++)
    {
      cout<<char(65+k);
    }
    cout<<endl;
  }
}


/* printing 
eg:
A B C D E
 A B C D
  A B C
   A B
    A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=n;i>0;i--)
  {
    for(int j=n;j>i;j--)
    {
      cout<<" ";
    }
    for(int k=0;k<i;k++)
    {
      cout<<char(65+k);
    }
    cout<<endl;
  }
}


/* printing
eg:
  *  
  *
*****
  *
  *
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
      if(i==3 || j==3)
      {
        cout<<"*";
      }
      else
      {
        cout<<" ";
      }
    }
    cout<<endl;
  }
}


/* printing
eg:
oo*oo
oo*oo
*****
oo*oo
oo*oo
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
      if(i==(n/2)+1 || j==(n/2)+1)
      {
        cout<<"*";
      }
      else
      {
        cout<<"o";
      }
    }
    cout<<endl;
  }
}


/* printing
eg:
xoooo
oxooo
ooxoo
oooxo
oooox
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
      if(j==i)
      {
        cout<<"x";
      }
      else
      {
        cout<<"o";
      }
    }
    cout<<endl;
  }
}


/* printing
eg:
x----
-x---
--x--
---x-
----x
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
      if(j==i)
      {
        cout<<"x";
      }
      else
      {
        cout<<"-";
      }
    }
    cout<<endl;
  }
}


/* printing 
eg:
*   *
 * *
  *
 * *
*   *
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
      if(j==i || i+j==n+1)//another logic   if(j==i || j==n-i+1)
      {
        cout<<"*";
      }
      
      else
      {
        cout<<" ";
      }
    }
    cout<<endl;
  }
}


/* printing
eg:
#####
#   #
#   #
#   #
#####
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
      if(i==1 || j==1 || i==n || j==n)
      {
        cout<<"#";
      }
      
      else
      {
        cout<<" ";
      }
    }
    cout<<endl;
  }
}


/* printing 
eg:
   *  
  *** 
 *****
*******
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,z=1;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    for(int j=n;j>i;j--)
    {
      cout<<" ";
    }
    for(int k=1;k<=z;k++)
    {
      cout<<"*";  
    }
    z=z+2;
    cout<<endl;
  }
}

//another method if-else

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int px=n,py=n;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<n*2;j++)
    {
      if(j>=px && j<=py)
      {
        cout<<"*";
      }
      else
      {
        cout<<" ";
      }
    }
    px--;
    py++;
    cout<<endl;
  }
}



/* printing
eg:
    1
   222
  33333
 4444444
555555555
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,z=1;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=n;j>i;j--)
    {
      cout<<" ";
    }
    for(int k=1;k<=z;k++)
    {
      cout<<i;
    }
    z=z+2;
    cout<<endl;
  }
}

/* printing 
eg:
    1
   333
 7777777
999999999
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,z=1;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=n;j>=i;j--)
    {
      cout<<" ";
    }
    for(int k=1;k<=z;k++)
    {
      cout<<z;
    }
    z=z+2;
    cout<<endl;
  }
}


/* printing 
eg:
     1
    123
   12345
  1234567
 123456789
 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,z=1;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=n;j>=i;j--)
    {
      cout<<" ";
    }
    for(int k=1;k<=z;k++)
    {
      cout<<k;
    }
    z=z+2;
    cout<<endl;
  }
}


/* printing
eg:
     1  
    321 
   54321
  7654321
 987654321
 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,z=1;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=n;j>=i;j--)
    {
      cout<<" ";
    }
    for(int k=z;k>=1;k--)
    {
      cout<<k;
    }
    z=z+2;
    cout<<endl;
  }
}


/* printing 
eg:
     0
    101
   21012
  3210123
 432101234
 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,z=1;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=n;j>=i;j--)
    {
      cout<<" ";
    }
    for(int k=1;k<=z;k++)
    {
      cout<<abs(k-i);//abs returns positive value
    }
    z=z+2;
    cout<<endl;
  }
}


/* printing 
eg:
     1
    121
   12321
  1234321
 123454321
 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,z=1;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=n;j>=i;j--)
    {
      cout<<" ";
    }
    for(int k=i-1;k>=-(i-1);k--)
    {
      cout<<i-abs(k);
    }
    z=z+2;
    cout<<endl;
  }
}


/* printing
eg:
    A
   BBB
  CCCCC
 DDDDDDD
EEEEEEEEE
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,z=1;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=n;j>i;j--)
    {
      cout<<" ";
    }
    for(int k=1;k<=z;k++)
    {
      cout<<char(64+i);
    }
    z=z+2;
    cout<<endl;
  }
}


/* printing
eg:
    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,z=1;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=n;j>i;j--)
    {
      cout<<" ";
    }
    for(int k=1;k<=z;k++)
    {
      cout<<char(64+k);
    }
    z=z+2;
    cout<<endl;
  }
}


/* printing 
eg:
*******
 *****
  ***
   *
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int px=1,py=(n*2)-1;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<n*2;j++)
    {
      if(j>=px && j<=py)
      {
        cout<<"*";
      }
      else
      {
        cout<<" ";
      }
    }
    px++;
    py--;
    cout<<endl;
  }
}















