#include<stdio.h>
#include<stdlib.h>

int main()
{ 
    int a = 12;
    int b, c=3, d=0, e=0;

while(b != a && e==0){

    if(d<c){
    printf("guess the number between 0-15:");
    scanf("%d", &b);
    d++;
    }
    if (b!=12 && d!=3)
    {
        printf("guess again!\n");
    }
    else{
        e = 1;
    }
}
    if (e == 1){
       printf("out of guesses");
    }
    else
    {
        printf("guess is correct");
    }
    
}