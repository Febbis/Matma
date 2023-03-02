//ERYK STYSIA£

#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>



void check_max_value(const double wektor[], size_t rozm, double * max, size_t * pom)

{

    int temp_pom = 0;

    int i ;

    for (i = 0; i < rozm; i ++)

    {

        if (wektor[i] > wektor[temp_pom])

            temp_pom = i;

    }

    *max = wektor[temp_pom];

    *pom = temp_pom + 1;

}

void check_min_value(const double wektor[], size_t rozm, double * min, size_t * pom)

{

    int temp_pom = 0;

    int i;

    for (i = 0; i < rozm; i ++)

    {

        if (wektor[i] < wektor[temp_pom])

            temp_pom = i;

    }

    *min = wektor[temp_pom];

    *pom = temp_pom + 1;

}

void print_wektor(double wektor[], size_t rozm)

{

    int i ;

    printf("Tabela: ");

    for (i = 0; i < rozm; i++)

    {

        printf("%lf%s ", wektor[i], (i == rozm-1) ? ".\n" : ",");

    }

}

int main()

{

    double a, b;

    double wektor[1000];

    double min, max;

    int i,n;

    size_t min_pom, max_pom;



    printf("Podaj wielkosc wektora: ");

    scanf("%i", &n);

    printf("\n");

    printf("Podaj najmniejsza wartosc w wektorze: ");

    scanf("%lf", &a);

    printf("\n");

    printf("Podaj najwieksza wartosc w wektorze: ");

    scanf("%lf", &b);

    printf("\n");

    srand(time(0));



    for (i = 0; i < n; i++)

    {

        wektor[i] = (double) rand() / RAND_MAX * (b - a) + a;

    }



    print_wektor(wektor, n);

    check_min_value(wektor, n, &min, &min_pom);

    check_max_value(wektor, n, &max, &max_pom);

    printf("Najmniejsza wartosc w wektorze %lf, Znajduje sie na pozycji %d\n", min, min_pom);

    printf("Najwiêksza wartosc w wektorze %lf, Znajduje sie na pozycji %d\n", max, max_pom);



    return 0;

}
