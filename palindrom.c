/
#include <stdio.h>

int main() {
    int number ,same,num,sum;
    printf("Enter the number to find the reverse ");
    scanf("%d",&number);
    same=number;
    sum=0;
    while(number>0)
    {
        num=number%10;
        number=number/10;
        sum=sum*10+num;
        
    }
if (same==sum){
        printf("\nNumber is palindrom");
    }
  else
  {
      printf("\nNumber is not palindrom");
  }
    
    return 0;
}
