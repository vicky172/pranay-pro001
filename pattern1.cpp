#include <iostream>
using namespace std;

int main() {
     int i,j,k,n,l;
     cin>>n;
        for(i=1;i<=n;i++)
        {
            for(k=0;k<n-i;k++)
               cout<<" ";
            for(j=i;j<=2*i-1;j++)
                cout<<j;
            for(k=j-2;k>=i;k--)
                cout<<k;//
               
                cout<<endl;
        }
	// your code goes here
	return 0;
}


/*
input =6;
    1
   232
  34543
 4567654
567898765
*/
