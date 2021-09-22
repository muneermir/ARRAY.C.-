 # include<stdio.h>
 int main()
 {
 	int a[100],size,i;
 	printf( " Enter size of array");
 	scanf("%d",&size);
 	printf( " Enter elements in an array");
 	for( i=0;i<size;i++){
 		scanf("%d",&a[i]);}
 		printf("Elements are \n");
 		for(i=0;i<size;i++){
 			printf("%d\n",a[i]);}
 			return 0; }
 		