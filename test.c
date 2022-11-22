#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
   if(argc <= 2)
   {
        printf("Wrong usage, at least 2 parameters expected:");
   }
    else
    {
        
        int sum=0;
        for (int i =1;i < argc; i++)
        {
            int entier_i = atoi(argv[i]);
            if (entier_i == 0)
            {
               printf("Erreur nombre incorrect");
               return 0;
            }
            sum += entier_i;
            }
        printf("Le resultat est %d", sum);
        }
    return 0;  
}
