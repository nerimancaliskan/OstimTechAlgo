// Linear Search for Minimum
// Time Complexity: O(n)
// Space Complexity: O(1)
// Bir tamsayı dizisi verildiğinde, dizideki en küçük elemanı bulun.

#include <stdio.h>

int main(){
    int n ; 
    printf("Please enter the length of the array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Please enter %d integers separated by spaces:\n", n);    
    for (int i = 0 ; i < n ; i++ ){
        scanf("%d", &arr[i]);
    }

    int minimum = arr[0];
    for (int = 1 ; i < n ; i++ ){
        if (arr [i] < minimum){
            minimum = arr[i];
        }
    }
    printf("Minimum element: %d\n", min); 

    return 0 ; 
}

