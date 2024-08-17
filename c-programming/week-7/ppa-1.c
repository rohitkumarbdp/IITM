#include <stdio.h>
int main()
{
    int n, i, a[10], sum=0;
    //Write code below
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0; i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n;i++){
        sum+=a[i];
    }
    for (i=0; i<n; i++) printf("%d ",a[i]);
    printf("\n%d", sum);

    return 0;
}