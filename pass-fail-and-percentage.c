#include <stdio.h>

int main(){
    float x,y;
    printf("full marks: ");
    scanf("%f", &x);
     printf("obtained marks: ");
    scanf("%f", &y);
    
    float perc = y * 100 / x;
    printf("\n\npercentage: %.2f %% \n\n", perc);
    
    if(perc >= 33 && perc <= 100) {
        printf("status: passed");
    } else {
        printf("status: failed or invalid");
    }
    
}
