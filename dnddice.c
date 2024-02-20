#include <stdio.h>
#include <stdlib.h>

#define MAX_ROLLS_SAME_TIME 20

int dice_sides;
int num_dice;
int dice_rolls_register[MAX_ROLLS_SAME_TIME];
int i;
int total_sum;

int dice_sum(int array_rolls[]){
    int total_sum = 0;
    for(i=0; i<num_dice; i++){
        total_sum = total_sum + array_rolls[i];
    }
    return total_sum;
}

int main(){

    /*printf("how many dice to throw: \n");
    scanf("%d", &num_dice);

    printf("how many faces: \n");
    scanf("%d", &dice_sides);

    for(i=0; i < num_dice; i++){
        int result = 0;
        result = rand() % (dice_sides + 1 - 1) + 1;
        dice_rolls_register[i] = result;
    }

    for(i=0; i < num_dice; i++){
        printf("%d\n", dice_rolls_register[i]);
    }

    int total_sum = dice_sum(dice_rolls_register);
    printf("total roll sum equals: %d\n" ,total_sum);*/

   int num;
   FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("/home/uri/Desktop/VisualStudio/projectes/dnddice.txt","a");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter num please: ");
   scanf("%d",&num);

   fprintf(fptr,"%d\n",num);
   fclose(fptr);

   return 0;

}