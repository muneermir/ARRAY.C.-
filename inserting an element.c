  
#include<stdio.h>
 
 
void display(int a[], int n){

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");   
}
 
int Insertion(int a[], int size, int element, int capacity, int pos){
    
    if(size>=capacity){
        return -1;
    }
    for (int i = size-1; i >=pos; i--)
    {
        a[i+1] = a[i];
    }
    a[pos] = element;
    return 1; 
}
 
int main(){
    int a[100] = {12, 9, 14, 27, 88};
    int size = 5, element = 45, pos=3;
    display(a, size); 
    Insertion(a, size, element, 100, pos);
    size +=1;
    display(a, size);
    return 0;
}