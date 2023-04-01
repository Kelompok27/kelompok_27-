#include <stdio.h>
int main ()
{
int var1 = 10;
int var2 = 20;
int var3 = 30;
int* varptr1 = &var1;	
int* varptr2 = &var2;
int* varptr3 = &var3;
printf("alamat var1	: %x",& var1);
printf("\nNilai dari var1 : %d",*varptr1);
printf("\nalamat var2	: %x",& var2);
printf("\nNilai dari var2 : %d", *varptr2);
printf("\nalamat var3	: %x",& var3);
printf("\nNilai dari var3 : %d",*varptr3);
}

