//  Find Factors of a number
#include <stdio.h>
#include <math.h>

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n % 2 == 0){
        printf("2 ");
        n = n/2;
    }
    for(int i=3; i<sqrt(n); i+=2){
        while(n%i == 0){
            printf("%d ", i);
            n = n/i;
        }
    }
    if(n > 2)
        printf("%d", n);
}
