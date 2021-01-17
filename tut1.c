#include<stdio.h>
#include<math.h>
//#define PI 3.14

int main(){
    //float  radius = 4;
    //printf("area = %.2f(%.1f)^2 => %.2f",PI,radius,pow(radius,2)*PI);
    char inp[100];
    inputCopied("please insert a number: ",inp);
    printf("string= %s",inp);
}

void inputCopied(char msg[100],char * ipt){
    printf("%s",msg);
    int c;
    int i = 0;
    while((c = getchar())!='\n'){
        ipt[i++] = c;
    }
    ipt[i] = '\0';
}
