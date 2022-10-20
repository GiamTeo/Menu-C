#include <stdio.h>
#include <stdlib.h>

void maggiore(int);
int doppio(int);
void pari(int);
int main()
{
    int num,scelta;
    printf("Inserire numero\n");
    scanf("%d",&num);
    do{
    printf("OP1 MAGGIORE DI 0\n");
    printf("OP2 DOPPIO\n");
    printf("OP3 PARI\n");
    printf("OP4 USCITA\n");
    printf("Inserire scelta\n");
    scanf("%d",&scelta);

    if(scelta == 1){
        maggiore(num);
    }
    if(scelta == 2){
        int d;
        d = doppio(num);
        printf("%d\n",d);
    }
    if(scelta == 3){
        pari(num);
    }
    if(scelta == 4){
        return 0;
    }
    }
    while(scelta>0 && scelta<5);

}
void maggiore(int numero){
    if(numero > 0)
        printf("Maggiore di 0\n");
    else
        printf("Minore uguale a 0\n");
}
int doppio(int numero){
    int d;
    d = 2 * numero;
    return d;
}
void pari(int numero){
    if(numero%2==0)
        printf("Pari\n");
    else
        printf("Dispari\n");
}
