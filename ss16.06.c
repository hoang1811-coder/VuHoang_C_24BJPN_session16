#include<stdio.h>
// B2:
int findIndex(int arr[], int findItem, int length);


int main(int argc, const char * argv[]) {

    // B1:
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr)/sizeof(int);


    // B4:

    int find = findIndex(arr, 50, length); // -1 | index

    // B5:
    if(find == -1) {
        printf("Khong tim thay!!!\n");
    } else {
        printf("Tim thay tai vi tri %d\n", find);
    }
    return 0;
}


// B3:
int findIndex(int arr[], int findItem, int length) {
    // Linear search
    int index = -1;
    for(int i = 0; i < length; i++) {
        if(arr[i] == findItem) {
            index = i;
            break;
        }
    }
    return index;
}
