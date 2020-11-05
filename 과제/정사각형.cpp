#include <stdio.h>
  
int solve_circumference(int n);
int solve_area(int n);
 
int n, circumference, area; 
 
int main() {
    scanf("%d", &n);
    circumference = solve_circumference(n);
    area = solve_area(n);
    printf("%d %d", circumference, area);
    return 0;
}
  
int solve_circumference(int n)
{
    circumference = 4 * n;
    return circumference;
}
  
int solve_area(int n)
{
    area = n * n;
    return area;
}
