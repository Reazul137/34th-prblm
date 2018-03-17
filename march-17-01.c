#include<stdio.h>
int main()
{
    int x, y, i, sum=0;

    printf("\n Input the pear of number (Example  : 10,2) : ");

    printf("\n Input the first number of the pair : ");
    scanf("%d",&x);

    printf("\n Input the second number of the pair : ");
    scanf("%d",&y);

    if(x<y)
    {
        return 0;
    }
    printf("List of odd numbers : ");

    for(i=y; i<=x; i++)
    {
        if( (i%2) != 0)
        {
            printf("%d\n",i);
            sum += i;
        }
    }

    printf("sum = %d", sum);

    return 0;
}
