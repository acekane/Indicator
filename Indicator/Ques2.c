#include<stdio.h>
#include<conio.h>
void find_cubes(int *ptr, int row, int col) {
    int i;
    int *ptr_temp = ptr;
    for(i=0; i<row*col; i++) {
        int num = *ptr_temp;
        int cube = num * num * num;
        printf("%d ", cube);
        ptr_temp++;
    }
}

int main() {
    int row, col;
    printf("Enter array's size: ");
    scanf("%d", &row);
    col = row;
    int arr[row][col];
    int i, j;
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int *ptr = &arr[0][0];
    printf("Cubes of all elements: ");
    find_cubes(ptr, row, col);
    return 0;
}


