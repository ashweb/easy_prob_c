#include <stdio.h>

int need;

int sum=0;


int main(){
    printf("how many total number of sum do you need\n");
   scanf("%d",&need);
 int series[need];
  
    for(int i=1;i<=need;i++){
        printf("enter your number\n");
        scanf("%d", &series[i]);
        sum += series[i];
    }

printf("the total sum of %d numbers are %d",need, sum);
    return 0;
}