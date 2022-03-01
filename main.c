/*
9. Citeste un sir de numere naturale nenule terminat cu 0 si determina

    numarul cifrelor 0 in care se termina numarul produs al numerelor citite.
*/
#include <stdio.h>

int produs_numere(){
    /*
    Citeste numere pana la 0 si determina produsul lor
    post: returneaza produsul numerelor, int
    */
    int x, p = 1;
    scanf_s("%d", &x);
    if(x == 0)
        return 0;
    while(x != 0){
        p *= x;
        scanf_s("%d", &x);
    }

    return p;
}

int nr_cif_0(int nr){
    /*
    Determina numarul cifrelor de 0 de la sfarsitul numarului nr
    pre: nr- int
    post: int, returneaza numarul de 0 de la sfarsit
    */
    int ct0 = 0;
    if(nr == 0){
        return 0;
    }
    while(nr % 10 == 0){
        ct0++;
        nr/=10;
    }
    return ct0;

}

int main()
{
    int option;
    while(1){
        printf("\n1. Problema 9\n");
        printf("0. Exit\n");
        printf("Optiunea dvs: ");
        scanf_s("%d", &option);

        if(option == 0)
            return 0;
        else if(option == 1){
            int p = produs_numere();
            printf("\nProdus: %d", p);
            int nr0 = nr_cif_0(p);
            printf("\nNumarul cifrelor de 0: %d\n", nr0);
        }
    }
}
