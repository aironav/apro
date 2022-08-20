int main()
{
    int* ptr;
    int n, i;
    n = 8;
    printf("enter elements - %d\n", n);
    ptr = (int*)calloc(n, sizeof(int));
    if (ptr == NULL) 
    {
        printf("memory not allocated \n");
        exit(0);
    }
    else 
    {
        printf("successful calloc \n");
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }
        printf("array elements -");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
    }
    return 0;
}
