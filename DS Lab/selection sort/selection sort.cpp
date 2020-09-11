#include <st1         
    int i;
    int a[10];
    printf("pass 10 integers:\n");
    for(i=0; i<10;i++)
    scanf("%d",&a[i]);
    selection_sort(a);
    printf("Integers in sorted order:\n");
    for(i=0;i<10;i++)
    printf("%d  ", a[i]);
    return 0;
}
void selection_sort(int* a)
{
    int i, j, temp;
    for(i=1;i<=9;i++)
    {
       for(j=i+1; j<9; j++){
           if(a[i] > a[j]){
               temp = a[i];
               a[i] = a[j];
               a[j] = temp;
           }
       } 
    }
    return;
}












