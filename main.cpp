#include <bits/stdc++.h>

using namespace std;


int a,n,i,j,k,x,s;
char m[100][100];

int cop(int y , int x, int a)
  {

       char v[a][a];
       for (i=0;i<a;i++)
        for (j=0;j<a;j++)
         v[i][j]=m[i][j];

       for(i=y;i<y+a;i++)
        for(j=x;j<x+a;j++)
       {
           if (v[i-y][j-x]=='#')
             m[i][j]='#';
           else
            m[i][j]=' ';
       }
   return 0;
  }
int remp(int a)
   {
       if(a>=n)
         return 0;
       else
       {
         cop(0,a,a);
        cop(a,0,a);
        return remp(a*2);

       }
   }

int main()
  {
     // ofstream fout("C:\\Users\\ASUS\\Desktop\\si.txt");
      cout<<"Enter N (a power of 2) the size of the triangle's side : ";
while(1){
     cin>>n;
      m[0][0]='#';
      m[0][1]='#';
      m[1][0]='#';

      a=2;
       int kk=remp(a);
      for(i=0;i<n;i++)
      {
         for(j=0;j<n;j++)
            {if (m[i][j]=='#')
              cout<<"#";
            else
              cout<<' ';}
        cout<<endl;

      }

  }

}
