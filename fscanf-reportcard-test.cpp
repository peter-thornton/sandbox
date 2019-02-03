#include <stdio.h>
#include <stdlib.h>
#define LEN 20

int main()
{ FILE *in;
  float average;
  char name[LEN];
  char surname[LEN];
  int grade, n_grades; //n_grades is the total number of grades a person has//

  in = fopen("grades.txt","r");
  if(in == NULL){
    fprintf(stderr,"error fopen(): Failed to open file grades.txt.\n");
    exit(EXIT_FAILURE);
   }


   while(fscanf(in,"%s",name) != EOF){
       fscanf(in,"%s",surname);
       n_grades = 0;
       average = 0.0;


       while( !feof(in) && fscanf(in,"%d",&grade)>0 ){
    n_grades++;
    average += grade;
    }


    if(n_grades >0)
        average /= n_grades;
    printf("%s %s %.2f\n", name, surname, average);
   }
   fclose(in);
   return 0;
}
