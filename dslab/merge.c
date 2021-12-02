 #include <stdio.h>
int a[10], b[10], c[10], m, n, i, j, k = 0;
void merge();
    void main()
    {
 
        merge();
        
 
    }
void merge()
{
printf("\n Enter size of array 1st array: ");
        scanf("%d", &m);
 
        printf("\n Enter sorted elements of 1st array: \n");
        for (i = 0; i < m; i++) 
        {
            scanf("%d", &a[i]);
        }
 
        printf("\n Enter size of 2nd array: ");
        scanf("%d", &n);
 
        printf("\n Enter sorted elements of 2nd array \n");
        for (i = 0; i < n; i++) 
        {
            scanf("%d", &b[i]);
        }
 
        i = 0;
        j = 0;
 
        while (i < m && j < n) 
        {
            if (a[i] < b[j]) 
            {
                c[k] = a[i];
                i++;
            }
 
            else 
            {
                c[k] = b[j];
                j++;
            }
            k++;
        }
 
        if (i >= m) 
        {
            while (j < n) 
            {
                c[k] = b[j];
                j++;
                k++;
            }
        }
 
        if (j >= n) 
        {
            while (i < m)
            {
                c[k] = a[i];
                i++;
                k++;
            }
        }
 
        printf("\n After merging: \n");
        for (i = 0; i < m + n; i++) 
        {
            printf("\n%d", c[i]);
        }

}
