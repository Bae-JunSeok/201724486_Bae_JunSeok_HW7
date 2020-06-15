#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "phone.h"

int main()
{
   int s;
   while (1) {
      printf("============ Telophone Book Management ============\n");
      printf("<<<1. Register\t2. Print All\t3. Search\t4. Delete\t5. Sort\t6. Exit>>>\n");
      printf("Please enter your service number (1-5)> ");
      scanf("%d", &s);
      switch (s)
      {
      case Register:
         registerPhoneData();
         break;
      case Print:
         printAll();
         break;
      case Search:
         searchByName();
         break;
      case Delete:
         DeleteByName();
         break;
      case Sort:
         sort();
         break;
      case Exit:
         return 0;
      }
   }
}
