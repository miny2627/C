#include <stdio.h>

struct Score {
   char name[10];
   char credit;
   float s1;
   float s2;
   float s3;
   float ave;
} p; 

int main()
{
   int n;
   int i;
   
   scanf("%d", &n);
   
   for(i=0; i<n; i++) {
      scanf("%s %f %f %f", &p.name, &p.s1, &p.s2, &p.s3);
      p.ave=(p.s1+p.s2+p.s3)/3;
      
      if(p.ave>=90) p.credit = 'A';
      else if (p.ave>=80) p.credit = 'B';
      else if (p.ave>=70) p.credit = 'C';
      else if (p.ave>=60) p.credit = 'D';
      else p.credit = 'F';  
      printf("%s %.0f %.0f %.0f %.1f %c\n", p.name, p.s1, p.s2, p.s3, p.ave, p.credit);
   }   
   
   return 0;
}
