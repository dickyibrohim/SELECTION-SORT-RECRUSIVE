#include <stdio.h>
// DICKY IBROHIM
int b[8] = { -9, 9, 89, 78, 56, 45, 34, 89 };

void print(int n) // OUTPUT
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d\t", b[i]);

    printf("\n");
}

void sortAscending ( int arr[], int size ) { // SELECTION SORT
    int maxIndex = 0, temp = 0, index = 0;
    for ( index = maxIndex; index < size; index++ ) {
        if ( arr[index] > arr[maxIndex] ) {
            maxIndex = index;
        }
    }
    temp = arr[size-1];
    arr[size-1] = arr[maxIndex];
    arr[maxIndex] = temp;

    if ( size > 1 ) {
        sortAscending ( arr, --size ) ;
    }
}

int main()
{
    print(8);
    sortAscending ( b, 8 );
    print(8);

    return 0;
}
