#include <stdio.h>
#include <string.h>

void sort(char arr[][100], int n) {
    char temp[100];
    for(int i=0; i<n-1; i++)
     {
        for(int j=i+1; j<n; j++)
         {
            if(strcmp(arr[i], arr[j]) > 0) 
            {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}
int main() {
    char arr[][100] = {"dpple", "banana", "aherry", "cate", "clderberry"};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, n);
    printf("Sorted array:\n");
    for(int i=0; i<n; i++)
    {
        printf("%s\n", arr[i]);
    }
    return 0;
}
