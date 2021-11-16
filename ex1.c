#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exercice 1 :
    int i,tab[30],a=0;
    for(i=0;i<30;i++)
    {
      printf("enter un nombre positive : ");   
      scanf("%d",&tab[i]);
      if(tab[i]<0)
      break;
      a++;
    }
    for(i=0;i<a;i++)
    {
      printf(" %d\t",tab[i]);   
    }
    return 0;
}
