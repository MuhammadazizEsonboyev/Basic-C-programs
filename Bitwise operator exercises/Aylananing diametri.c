#include <stdio.h>

int main(){
  float radius, diameter, circumference, area;
  
  printf("tortburchakni radiusini kiriting: ");
  scanf("%f", &radius);

  diameter = 2 * radius;
  circumference = 2 * 3.14 * radius;
  area = 3.14 * (radius * radius);
  
  printf("Tortburchakning diametri = %.2f \n", diameter);
  printf("Circumference aylanasi = %.2f sq. units\n",circumference);
  printf("tortburchakning maydoni %.2f sq. units",area);
  
  
  return 0;
}
