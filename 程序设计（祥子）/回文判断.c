#include <stdio.h>
#include <string.h>
int main()
{
    char str [100];
    scanf ("%s",str);
    int length=strlen(str);
    int i,j;
    for (i=0,j=length-1;i<j;i++,j--)
    {
       if (str[i]!=str[j])
       {
           printf ("No");
           return 0;
       }
       else{
           printf ("Yes");
       }

   return 0;}
    return 0;




}
