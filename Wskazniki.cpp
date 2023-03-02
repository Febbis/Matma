//ERYK STYSIA£

#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>



void wypisz_tab(int tab[], int n)

{

    printf("Tabela: ");

    for (int i = 0; i < n; i++)

    {

        printf("%i\n ", tab[i]);

    }

}



void wypelnij_tab(int tab[], int n)

{

    for (int i = 0; i < n; i++)

        tab[i] = rand()%(90+1)+10;

}



void min_max(int tab[], int n, int * min, int * max)

{

    int temp_min = 1000;

    int temp_max = 0;



    for (int i = 0; i < n; i ++){

        if (tab[i] > temp_max)

        {

            temp_max = tab[i];

        }



        if (tab[i] < temp_min)

        {

            temp_min = tab[i];

        }

    }



    *max = temp_max;

    *min = temp_min;

}



int main(){

    int n = 15;

    int tab[100];

    int min, max;

    srand(time(0));

    wypelnij_tab(tab, n);

    wypisz_tab(tab, n);



    min_max(tab, n, &min, &max);

    printf("Minimalna liczba w tabeli: %i\n", min);

    printf("Maksymalna liczba w tabeli: %i\n", max);



    return 0;

}
