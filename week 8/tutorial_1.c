/*
a.  character
b.  decimal integer
c.  float-point
d.  -character==================
e.  hexadecimal integer
f.  character
g.  decimal long integer
h.  floating-point
i.  negative decimal integer
j.  octal integer
k.  hexadecimal integer
l.  hexadecimal long integer */

// #include <stdio.h>

// 2a.int main()
// {
//     printf("%c","A"); /* it will print A*/
//     printf("%c",65); /* it will print A */
//     printf("%c", 0x41); /* it will print A*/
//     printf("%c", 0101); /* it will print A*/
//     return 0;
// }
// #include <stdio.h>
// 2bint main()
// {
//     printf("%d", "A");  /* it will print 65*/
//     printf("%d", 65);   /* it will print 65 */
//     printf("%d", 0x41); /* it will print 65*/
//     printf("%d", 0101); /* it will print 65*/
//     return 0;
// }

// 2cint main()
// {
//     printf("%c", "A");  /* it will print A*/
//     printf("%c", 65);   /* it will print A */
//     printf("%c", 41); /* it will print )*/
//     printf("%c", 0101); /* it will print A*/
//     return 0;
// }

// 2d int main()
// {
//     printf("%c", "A");  /* it will print A*/
//     printf("%c", 65);   /* it will print A */
//     printf("%c", 41); /* it will print )*/
//     printf("%c", 101); /* it will print e*/
//     return 0;
// }

// 3a) The program will wait for the input of 2 integers separated by one space( or one white space)
// 3b) This is an errorous statement by omitting the '&' The program will terminate abnormally.
// 3c) The program will wait for the input of the 2 integers separated by one '/'
// #include <stdio.h>
// int main()
// {
//     double A = 373737.0;
//     double B;
//     B = A * A * A + 0.37 / A - A * A * A - 0.37 / A;
//     printf("The value of B is % f.\n", B);
//     return 0;
// }

// 4) B is assigned a value which is mathematically zero. But on most machines, this value will not be 0, showing that even the double precision is not
// sufficient. When a very large number is added to a very small number, the result is an approximation of the real sum. In this case the approximation is the very large number
// started with. Thus the subtraction gets the result down to 0, and the final value is -0.37/A. ROUNDOFF ERROR.

// 5) a) 10/2= 5
// b) 5/2*2 = (5/2)*2 = (2)*2 = 4
// c) (f+10)*20 = (1.2+10)*20 = (1.2+ 10.0)*20.0 = 224.0
// d) (i++)*n = 2*5 = 10 (integer); after this i takes value of 3
// e) i++*n = 2*5 = 10
// f) -12L* (g-f) = -12.0000* (3.4000L-1.2L)= -26.4(float)
// g) m = n = --j = 1
// h) (int)g*10 = 3.4-->3*10 = 30 (integer)
// i) (int)(g*10)= (int)(34)=34
// j) (int)3.2 = 3 (integer)

// 6. CASE CONSTANT MUST BE AN INTEGER OR CHARACTER CONSTANT.

// 8) When x is zero, in (a) the condition evaluates to false while in b it causes an illegal division by zero.
// Short circuit behaviour of logical operators!
9)
// #include<stdio.h>  
// int main()   
// {   
//     int x, y;  
//     printf("Enter the value of x and y?");  
//     scanf("%d %d",&x,&y);  
//     printf("before swapping numbers: %d   %d\n",x,y);  

//     /*swapping*/  
//     x = x + y;   
//     y = x - y;    
//     x = x - y;  
//     printf("After swapping: %d    %d",x,y);   
//     return 0;   
// }