#include <stdio.h>

int main(){
    float entrada;
    int check;
    int base;
    
    printf("Ingrese numero\n");
    scanf("%f",&entrada);
    check = (int)entrada;
    printf("entrada=%f\ncheck=%d\n",entrada,check);
    
    if((entrada - check) == 0){
             printf("es un entero\nElija base(2-10):\n");
             scanf("%d",&base);
    }
    else{
        printf("es un no entero\n"); 
        base=10;
    }
    printf("Su base es %d\n",base);
    getch();    
    
    return 0;
    }
