#include <stdio.h>
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;
    while (j >=0 && key < array[j]) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

int main() {
  int data[100],i,n;
  printf("enter  no of elements \n");
  scanf("%d",&n);
  printf("enter%d elements\n",n);
  for(i=0;i<n;i++)
  scanf("%d",&data[i]);
  insertionSort(data,n);
  printf("Sorted array in ascending order:\n");
  printArray(data,n);
}
