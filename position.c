#include<stdio.h>
int main()
{
    int array[100],c,position=5,n,value=99;
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(c=0; c<n; c++)
    scanf("%d",&array[c]);

    /*printf("Enter the location where you wish to insert an element\n");
    scanf("%d",&position);*/

   /* printf("Enter the value to insert\n");
    scanf("%d",&value);*/

    for(c=n-1;  c>=position-1; c--)
        array[c+1]=array[c];
    array[position-1]=value;
    printf("Resultant array is \n");
    for(c=0; c<=n; c++)
        printf("%d\n",array[c]);
        return 0;


}
