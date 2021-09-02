#include <stdio.h>


int binary_search(int arr[], int element, int size)
{
    int mid;
    int low = 0;
    int high = size - 1;
    
    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid]==element)
            return mid;
        if(arr[mid]<element)
            low = mid+1;
        else
            high = mid-1;

    }
    return -1;
}

int ascending_sort(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(arr[i]<arr[j])
            {
                int a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    
    for(int i=0; i<size; i++)
    {
        printf("%d\n", arr[i]);
    }
}


int main()
{
    int arr[20];
    int element_to_find;
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter the element of array: \n");
    for(int i=0; i<size; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);   
    }
    
    ascending_sort(arr, size);
    
    printf("\nEnter element to find in array: ");
    scanf("%d", &element_to_find);
    
    int result = binary_search(arr, element_to_find, size);
    printf("Elemente is at position : %d", result);
    
    return 0;
}
