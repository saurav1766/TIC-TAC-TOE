#include<stdlib.h>
#include<stdio.h>
void with_friend();
void with_cmp();
void display(char c[]);
int result(char arr[],int,char name[] );
void with_friend()
{
   char a[9]={1,2,3,4,5,6,7,8,9};
   char P1[100],P2[100];
   char p1='x',p2='o';
   int i,j,n,k=0,count=0;
   printf("ENTER YOUR NAME PAYER 1..\n");
   fgets(P1,20,stdin);
   fflush(stdin);
   printf("ENTER YOUR NAME PAYER 2..\n");
   fgets(P2,20,stdin);

    getch();
    display(a);
    for(i=1;i<=9;i++)
    {
        if(i%2)
        {
            printf("player 1 :\n");
            scanf("%d",&n);
            if(n>0&&n<=9&&a[n-1]!='x'&&a[n-1]!='o')
            {
            a[n-1]=p1;
            display(a);
           j=result(a,1,P1);
            }
            else
                i--;
        }
        else
        {
          printf("player 2 :\n");
          scanf("%d",&n);
        if(n>0&&n<=9&&a[n-1]!='x'&&a[n-1]!='o')
        {
          a[n-1]=p2;
          display(a);
          j=result(a,2,P2);
        }
        else
            i--;

        }
        if(j==1)
            break;
    }
    if(i>9)
    printf("             MATCH DRAW");

}



void display(char c[])
{
    int i,j,k=0;
    char b[3][3];
    system("cls");
    for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           b[i][j]=c[k];
           k++;
       }
   }
    for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           if(b[i][j]=='x'||b[i][j]=='o')
           {
           printf("|");
           printf("%c__",b[i][j]);
           }
           else
           {
              printf("|___");
           }

       }
       printf("\n");

   }
}
int result(char arr[],int x,char name[])
{
    switch(x)
    {
    case 1:
        if(arr[0]==arr[1]&&arr[1]==arr[2])
           {
            printf("........%s........ YOU WON..",name);
            return 1;
            }
        if(arr[0]==arr[3]&&arr[3]==arr[6])
           {
            printf("........%s........ YOU WON..",name);
            return 1;
            }
        if(arr[0]==arr[4]&&arr[4]==arr[8])
           {
            printf("........%s........ YOU WON..",name);
            return 1;
            }
        if(arr[1]==arr[4]&&arr[4]==arr[7])
            {
            printf("........%s........ YOU WON..",name);
            return 1;
            }
        if(arr[2]==arr[5]&&arr[5]==arr[8])
            {
            printf("........%s........ YOU WON..",name);
            return 1;
            }
        if(arr[2]==arr[4]&&arr[4]==arr[6])
            {
            printf("........%s........ YOU WON..",name);
            return 1;
            }
        if(arr[3]==arr[4]&&arr[4]==arr[5])
            {
            printf("........%s........ YOU WON..",name);
            return 1;
            }
        if(arr[6]==arr[7]&&arr[7]==arr[8])
           {
            printf("........%s........ YOU WON..",name);
            return 1;
            }
            break;

    case 2:
        if(arr[0]==arr[1]&&arr[1]==arr[2])
           {
            printf("........%s........ YOU WON..",name);
            return 1;
            }
        if(arr[0]==arr[3]&&arr[3]==arr[6])
           {
            printf("........%s........ YOU WON..",name);
            return 1;
            }
        if(arr[0]==arr[4]&&arr[4]==arr[8])
           {
            printf("........%s........ YOU WON..",name);
            return 1;
            }
        if(arr[1]==arr[4]&&arr[4]==arr[7])
            {
           printf(".........%s........ YOU WON..",name);
            return 1;
            }
        if(arr[2]==arr[5]&&arr[5]==arr[8])
            {
            printf("........%s........ YOU WON..",name);
            return 1;
            }
        if(arr[2]==arr[4]&&arr[4]==arr[6])
            {
            printf("........%s........ YOU WON..",name);
            return 1;
            }
        if(arr[3]==arr[4]&&arr[4]==arr[5])
            {
            printf("........%s........ YOU WON..",name);
            return 1;
            }
        if(arr[6]==arr[7]&&arr[7]==arr[8])
           {
            printf("........%s........ YOU WON..",name);
            return 1;
            }
            break;

    }
}

void cmp()
{
    char x[9],p1='x',cpt='o';
    int i,j,n,k;
    srand(time(NULL));
    for(i=1;i<=9;i++)
    {
      if(i%2)
        {
         scanf("%d",&n);
         if(n>0&&n<=9&&x[n]!='x'||x[n]!='o')
         {
          x[n-1]=p1;
          display(x);
          //result();
         }
         else
            j=0;
        }
      else
        {
        k=rand()%10;
       if(x[k]=='x'||x[k]=='o')
       {
         j=0;
       }
       else
       {
           x[k]=cpt;
         display(x);
       }

     }
    if(j==0)
        i--;
    j=1;

     }
  }






int main()
{
   //with_friend();
   cmp();

}
