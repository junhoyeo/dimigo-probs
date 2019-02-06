// /**************************************************************
//     Problem: 1051
//     User: 18HD1520
//     Language: C++
//     Result: Accepted
//     Time:0 ms
//     Memory:1088 kb
// ****************************************************************/
 
// #include <stdio.h>
// int main(){char g;int a;scanf("%c %d",&g,&a);
// if(a>=18){if(g=='M')printf("MAN");else printf("WOMAN");}
// else{if(g=='M')printf("BOY");else printf("GIRL");}}

#include <stdio.h>

int main()
{
   char a; int b;
   scanf("%c %d", &a, &b);
   if(a=='M' && b>=18)
      printf("MAN");
   else if(a=='F' && b>=18)
      printf("WOMAN");
   else if(a=='M' && b<18)
      printf("BOY");
   else if(a=='F' && b<18)
      printf("GIRL");
}