//ERYK STYSIA£



#include<stdio.h>

#include<stdlib.h>



int main(){

    int A[9][6],max_w_kol[6],max_w_wier[9],ind_max_w_kol[6],ind_max_w_wier[9];

    int i,j;

    puts("\t\t     MACIERZ");

       for(i=0; i<9; i++)

        {

        for(j=0; j<6; j++)

            {

            max_w_kol[j]=0;

            max_w_wier[i]=0;

            }

        }

    for(i=0;i<9;i++)

        {

        for(j=0;j<6;j++)

            {

            A[i][j]=rand()%902+99;

            if(max_w_wier[i]<A[i][j])

                {

                max_w_wier[i]=A[i][j];

                ind_max_w_wier[i]=j;

                }

            if(max_w_kol[j]<A[i][j])

                {

                max_w_kol[j]=A[i][j];

                ind_max_w_kol[j]=i;

                }

            }

        }

        for(i=0; i<9; i++)

        {

        for(j=0; j<6; j++)

            {

            printf("   %d   ", A[i][j]);

            }

        printf("   Maks w wierszu: %d \tNa Pozycji %d  \n",max_w_wier[i],ind_max_w_wier[i]+1);

        }

        printf("\n");

        printf("Maks w kolumnie:\n");

        for(j=0; j<6; j++)

            {

            printf("   %d   ",max_w_kol[j]);

            }

            printf("\n");

            printf("Na pozycji: ");

            printf("\n");

             for(j=0; j<6; j++)

            {

            printf("    %d    ", ind_max_w_kol[j]+1);

            }



    return 0;

}
