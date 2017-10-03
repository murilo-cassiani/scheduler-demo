#include <stdio.h>

int main() {
  int a[5];
  int n;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=1; i<=n; i++) {
    /* Imprime resultado da n-esima iteracao do scheduler */
  	if(!(i%a[0]))
  		printf("0");
  	if(!(i%a[1]))
  		printf("1");
  	if(!(i%a[2]))
  		printf("2");
  	if(!(i%a[3]))
  		printf("3");
  	if(!(i%a[4]))
  		printf("4");
  	if((!(i%a[0])) || (!(i%a[1])) || (!(i%a[2])) || (!(i%a[3])) || (!(i%a[4])))
  		printf("\n");
  	else
  		printf("-\n");
  }

  return 0;
}
