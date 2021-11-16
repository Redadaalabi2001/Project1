#include <stdio.h>
#include <stdlib.h>
#define Max 100

void remplit(float tab[], int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        printf("donner T[%d] : ",i+1);
        scanf("%f",&tab[i]);
    }
}

void afficher(float tab[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        
        printf(" %.2f\t",tab[i]);
    }
}

void tri(float tab[], int n)
{
  int i, j, tmp;
  for(i=0;i<n;i++)
  {
     for(j=i+1;j<n;j++) 
     {
      if(tab[j]<tab[i])
      {
          tmp=tab[i];
          tab[i]=tab[j];
          tab[j]=tmp;
      }
     }
  }
}

void chercher(float tab[], int n, float a)
{
	int i=1;
	while(i<=n && tab[i]==a)
	{
		i++;
	}
    if(i>n)
        printf("l'element recherche n'est pas trouver\n");
    else
        printf("l'element recherche est trouver\n");	
}

int main()
{
    //Exercice 2 :
    float T[Max], ch;
    int dim; 
    do
    {
      printf("Donner la dimension du tableau : ");
      scanf("%d",&dim);
    }while(dim>Max || dim<1);
    remplit(T, dim);
    printf("affichage du tableau \n");
    afficher(T, dim);
    printf("\n");
    tri(T, dim);
    printf("tri du tableau \n");
    afficher(T, dim);
    printf("\ndonner l'element que vous voulez chercher : ");
    scanf("%f",&ch);
    chercher(T, dim, ch);
    return 0;
}
