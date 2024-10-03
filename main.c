#include <stdio.h>

int main(void) {
int giorno,mese,anno;
    printf("Inserisci il giorno:");
    scanf("%d",&giorno);
    printf("Inserisci il mese:");
    scanf("%d",&mese);
    printf("Inserisci l' anno:");
    scanf("%d",&anno);
    if(mese>12) {
        printf("il mese non e' valido");
    }
    else if(((anno%4==0 || anno%400==0)&&mese==2)&&giorno>29) {
        printf("il giorno non e' valido");
    }
    else if((anno%4==1 && mese==2)&&giorno>28) {
        printf("il giorno non e' valido");
    }
    else if((mese==4 || mese==6 || mese==9 || mese==11)&&giorno>30) {
            printf("il giorno non e' valido");
    }
    else if((mese==1 || mese==3 || mese==5 || mese==7 || mese==8 || mese==10 || mese==12) && giorno>31) {
            printf("il giorno non e' valido");
    }
    else {
        printf("la data e' correta");
    }
    return 0;
}
