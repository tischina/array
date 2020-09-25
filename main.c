#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_ELEMENTS 8

int main(int argc, char* argv[])
{
int n, i,j;
int m[MAX_ELEMENTS]={22, 32, -220, 15, 0, -550, 6, 11}, result = 1; int iMax, iMin;

int score, C=0, p=1;

printf("Enter a value:");
scanf("%d", &C);

iMax=0;
iMin=0;

for (i = 0; i < MAX_ELEMENTS; i++)
{
if (m[i] > C) {score++;} 
}
printf("Score=%d\n", score);

for (i = 0; i < MAX_ELEMENTS; i++)
{
if (abs(m[i]) > abs(m[iMax])) {iMax = i; iMin=0;} else 
if (abs(m[i]) < abs(m[iMin])) {iMin = i;} 
}

for (i = 0; i < MAX_ELEMENTS; i++)
{
if (iMax == MAX_ELEMENTS-1) printf("Product = 0"); 
 else if (i>iMax) {p=p*m[i];}
}
printf("P=%d\n", p);

printf("Sort in ascending order: ");
for(i = 0 ; i < MAX_ELEMENTS - 1; i++) { 

       for(j = 0 ; j < MAX_ELEMENTS - i - 1 ; j++) {  
           if(m[j] < m[j+1]) {           
              
              int tmp = m[j];
              m[j] = m[j+1] ;
              m[j+1] = tmp; 
           }
        }
printf("%d ", m[j]);
  }
    return 0;
 }