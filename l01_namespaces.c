#include <stdio.h>

float func(float sayi)
{
    sayi += 1.0f;
    return sayi;
}

float funcPointer(float *sayi)
{
    *sayi += 1.0f;
    return *sayi;
}

int main()
{
    float x,y,z;
    int tmp1,tmp2;
    tmp1 = 5;
    char karakter = 'b';
    char arr[6]; // 'b' 'e' 'r' 'k' 'e' '\0'

    x = func(3.0f);
    printf("merhaba dunya\n berke\n");
    printf("x: %.2f\n",x);
    printf("sayi:%f %d %d %c \n", x, 4, tmp1, karakter);
    
    funcPointer(&x);
    printf("x: %.2f\n",x);
    
   // printf("sayi giriniz: ");
   // scanf("%d", &tmp2);
   // printf("girdiginiz sayi: %d\n", tmp2);

     /* 
        %f : float
        %lf : double
        %d : int
        %c : char
        %s : string (char array)
        %p : hexadecimal pointer address
        %x : hexadecimal integer
        %o : octal integer
        %u : unsigned integer
     */
    return 0;
}