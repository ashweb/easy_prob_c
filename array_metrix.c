#include <stdio.h>

int hello[3][2] = {
       {2, 5},
       {5, 9},
       {9, 18}
};


int metrix[3][3];

int main(){

   for(int i=0; i<=2; i++){
    for(int j=0 ; j<=2; j++){
      printf("enter your %d,%d position of number in your metrix\n",i,j);
      scanf("%d", &metrix[i][j]);
    }
   
   }

  printf("\nyour 3 by 3 metrix is\n");
 for(int i=0;i<=2;i++)
     {
      printf("{");
      for(int j=0; j<=2;j++){
              printf("%d,",metrix[i][j]);
      }
      printf("}\n");
     }
  return 0;
}