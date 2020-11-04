

 #include<stdio.h>
 #include"calc.h"

 int main(void) {

  int g = 0;
  int a = 0;
  int b = 12;
  int add = a + b;
  char *c = "";
  int i ;
  int j;
  int x ;
  double t = 99;
  double v = 6.3;


  x = aver(t,v);
  printf("%d",x);
   

  // printf("Helloworld\n");
  // printf("こんにちは、私の名前は%sです\n年齢は%d歳です。\n","市野将真",26);
  // printf("こんにちは、私の名前はです。年齢は歳です。\n");
  // printf("%d\n",10);
  // char *str= "市野将真";  
  // printf("こんにちは、私の名前は%sです。\n",str);
  
  return 0;
}


