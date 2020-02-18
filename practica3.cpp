#include<stdio.h>
#include<stdlib.h>
int main(){
    float a,b,c;
    char opt;
    printf("a.-suma/b.-resta/c.-producto/d.-division/");
    printf ("introduce una opcion");
    opt=getchar();
    printf("ingrese el primer operando:");
    sacnf("%d",&a);
    printf("ingrese el segundo operando:");
    scanf("%f",&b);
    swhitch(opt){
        case"A":
            case"a":
                c=a+b;
                break;
case"B":
case"b":
    c=a-b;
    break;
case"c":
case"C":
    c=a*b;
    break;
case"D":
case"d":
    while (b==0){
        printf("error, el segundo operando no puede ser 0");
        printf("introduce el segundo operando");
        scanf("%f",&b);
        c=a/b
        break;
default:
    printf("error, opcion invalida");
    opt=="R";
    }
    if(opt!="R"){
            printf("el resultado es :%0.2f",c);
    }
    }
