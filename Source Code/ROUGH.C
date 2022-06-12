void bubblesort(int a[],int n)
{
    int i,j,k,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    printf("\nThe array after pass %d is:\n",i+1);
    for(k=0;k<n;k++)
        printf("%d ",a[k]);
    }
    printf("\nThe sorted array is:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}