int main()
{
    int* ptr;
    int n, i;
    printf("enter eno of elements");
    scanf("%d",&n);
    ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) 
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
        printf("memory allocated using malloc.\n");
        for (i = 0; i < n; ++i) 
        {
            ptr[i] = i + 1;
        }
        printf("array elements -");
        for (i = 0; i < n; ++i) 
        {
            printf("%d, ", ptr[i]);
        }
    }
    return 0;
}
