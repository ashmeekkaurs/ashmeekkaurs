#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=2;
    TowerHanoi (n, 'A', 'c','B');
    return 0;

}
void TowerHanoi(int n, char source, char dest, char spare)
{

      if (n==1)
      {
          printf("Disk 1 move from %c\n",source,dest);
          return 0;
      }
      TowerHanoi(n-1, source, spare, dest);

      printf(" Desk %d from %c to %c\n",n, source, dest);
      TowerHanoi(n-1, spare, dest, source);

}
