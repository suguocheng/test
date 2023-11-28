#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
//第二章编程练习
// #include<stdio.h>
// int main(void)
// {
//     printf("suguocheng\n");
//     printf("su\nguocheng\n");
//     printf("su");
//     printf("guocheng");
// }
// #include<stdio.h>
// void jolly(void);
// void deny(void);
// int main(void)
// {
//     jolly();
//     deny();
// }
// void jolly(void)
// {
//     printf("for he is a jolly good fellow\n");
//     printf("for he is a jolly good fellow\n");
//     printf("for he is a jolly good fellow\n");
// }
// void deny(void)
// {
//     printf("which nobody can deny");
// }
// #include<stdio.h>
// void br(void);
// void ic(void);
// int main(void)
// {
//     br();
//     printf(", ");
//     ic();
//     printf("\n");
//     ic();
//     printf(",\n");
//     br();
// }
// void br(void)
// {
//     printf("brazil,russia");
// 
// #include<stdio.h>
// int main(void)
// {
//     int toes=10;
//     printf("toes=%d\n",toes);
//     printf("toes^2=%d\n",toes*toes);
//     printf("toes^3=%d\n",toes*toes*toes);
// }
// #include<stdio.h>
// void h(void);
// int main(void)
// {
//     h();
//     h();
//     h();
//     printf("\n");
//     h();
//     h();
//     printf("\n");
//     h();
// }
// void h(void)
// {
//     printf("smile!");
// }
// #include<stdio.h>
// void one_three(void);
// void two(void);
// int main(void)
// {
//     printf("starting now!\n");
//     one_three();
//     printf("done!");
// }
// void one_three(void)
// {
//     printf("one\n");
//     two();
//     printf("\nthree\n");
// }
// void two(void)
// {
//     printf("two");
// }
// #include<stdio.h>
// int main(void)
// {
//     double h,n;
//     scanf("%lf %lf",&h,&n);
//     double s=h;
//     if(n==0)
//     {
//         printf("0.0 0.0");
//     }
//     else
//     {
//         for(int i=1;i<=n;i++)
//         {
//             h/=2;
//             s+=h*2;
//         }
//         s-=h*2;
//         printf("%.1f %.1f",s,h);
//     }
// }
// #include<stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d",&n);
//     int a,b,c;
//     int i=0;
//     for(a=1;a<=30;a++)
//     {
//         for(b=1;b<=75;b++)
//         {
//             for(c=1;c<=150;c++)
//             {
//                 if(a*5+b*2+c==150&&i<n)
//                 {
//                     printf("%d %d %d\n",a,b,c);
//                     i++;
//                 }
//                 else if(i>=n)
//                 {
//                     goto end;
//                 }
//             }
//         }
//     }
//     end:
// }
// #include<stdio.h>
// int main(void)
// {
    
// }
  
// #include<stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d",&n);
//     int a,b,c;
//     int i=0;
//     for(a=1;a<=30;a++)
//     {
//         for(b=1;b<=75;b++)
//         {
//             for(c=1;c<=150;c++)
//             {
//                 if(a*5+b*2+c==150&&i<n&&a+b+c==100)
//                 {
//                     printf("%d %d %d\n",a,b,c);
//                     i++;
//                 }
//                 else if(i>=n)
//                     break;
//             }
//             if(i>=n)
//                 break;
//         }
//         if(i>=n)
//             break;
//     }
// }
// #include<stdio.h>
// int f(int a);
// int main(void)
// {
//     int m,n;
//     scanf("%d %d",&m,&n);
//     for(int i=m;i<=n;i++)
//     {
//         if(f(i)==1)
//         {
//             printf("%d =",i);
//             for(int j=1;j<=i/2;j++)
//             {
//                 if(i%j==0)
//                 {
//                     printf(" %d",j);
//                     if(j<i/2)
//                     {
//                         printf(" +");
//                     }
//                 }
//             }
//             printf("\n");
//         }
//     }
// }
// int f(int a)
// {
//     int sum=0;
//     for(int i=1;i<=a/2;i++)
//     {
//         if(a%i==0)
//         {
//             sum+=i;
//         }
//     }
//     if(sum==a)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// #include<stdio.h>
// int main(void)
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int count=0,sum=0;
//     for(int i=a;i<=b;i++)
//     {
//         sum+=i;
//         printf("%5d",i);
//         count++;
//         if(count%5==0&&count>=5)
//         {
//             printf("\n");
//         }
//         else if(i==b)
//         {
//             printf("\n");
//         }
//     }
//     printf("Sum = %d",sum);
// }
// #include<stdio.h>
// int f(int n);
// int main(void)
// {
//     int n;
//     scanf("%d",&n);
//     if(f(n)==1)
//     {
//         for(int i=2;i<=n;i++)
//         {
//             if(n%i==0)
//             {
//                 printf("%d ",i);
//                 n/=i;
//                 i=1;
//             }
//         }
//     }
//     else
//     {
//         printf("error");
//     }
// }
// int f(int n)
// {
//     int f=0;
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             f=1;
//         }
//     }
//     return f;
// }
// #include<stdio.h>
// double f(int i);
// int main(void)
// {
//     int n;
//     scanf("%d",&n);
//     double sum=1;
//     for(int i=1;i<=n;i++)
//     {
//         sum+=1/f(i);
//     }
//     printf("%.8f",sum);
// }
// double f(int i)
// {
//     double m=1;
//     for(i;i>1;i--)
//     {
//         m*=i;
//     }
//     return m;
// }
// #include<stdio.h>
// #include<stdlib.h>
// int func(int a[10][13]);
// int main(void) {
//     int arr[10][13];
//     for (int i = 0; i < 10; i++) {
//         for (int j = 0; j < 13; j++) {
//             arr[i][j] = rand();
//         }
//     }
//     func(arr);
// }
// int func(int a[10][13])
// {
// 	for(int i=0;i<10;i++)
//     {
//         for(int j=0;j<13;j++)
//         {
//             printf("%d\n",a[i][j]);
//         }
//     }
// }
// #include<stdio.h>
// int ver = 123;
// void func1(int ver) {
//     ver++;
//     printf("ver = %d\n", ver);
// }
// void func2(int *pr) {
//     *pr = 1234;
//     printf("*pr = %d\n", *pr);
//     pr = 5678;
//     printf("ver = %d\n", ver);
// }
// int main() {
//     int a = 0;
//     int ver = 1025;
//     for (int a = 3; a < 4; a++) {
//         static int a = 5;
//         printf("a = %d\n", a);
//         a = ver;
//         func1(ver);
//         int ver = 7;
//         printf("ver = %d\n", ver);
//         func2(&ver);
//     }
//     printf("a = %d\tver = %d\n", a, ver);
// }
// #include<stdio.h>
// unsigned sum(unsigned n)
// {
//     return n ? sum(n - 1) + n : 0;
// }
// int main(void)
// {
//     printf("%u\n", sum(100)); 
// }
// #include<stdio.h>
// void func(void);
// int main(void)
// {
//     func();
// }
// void func(void) 
// {
//     short a = -2;
//     unsigned int b = 1;
//     b += a;
//     int c = -1;
//     unsigned short d = c * 256;
//     c <<= 4;
//     int e = 2;
//     e = ~e | 6;
//     d = (d & 0xff) + 0x2022;
//     printf("a=0x%hx\tb=0x%x\td=0x%hx\te=0x%x\n", a, b, d, e);
//     printf("c=Ox%hhx\t\n", (signed char)c);
// }
// #include<stdio.h>
// int main(void) {
//     int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int(*b)[3] = a;
//     ++b;
//     b[1][1] = 10;
//     int *ptr = (int *)(&a + 1);
//     printf("%d %d %d \n", a[2][1], **(a + 1), *(ptr - 1));
// }
// #include<stdio.h>
// #include<string.h>
// char *convert(const char *s);
// int main(void) 
// {
//     char *str = "XiyouLinux Group 2022";
//     char *temp = convert(str);
//     puts(temp);
// }
// char *convert(const char *s)
// {
// 	char a[22];
//     for(int i=0;i<22;i++)
//     {
//         if(s[i]>'A'&&s[i]<'Z')
//         {
//             a[i]=s[i]+32;
//         }
//         else if(s[i]>'a'&&s[i]<'z')
//         {
//             a[i]=s[i]-32;
//         }
//         else
//         {
//             a[i]=s[i];
//         }
//     }
//     strcpy(*temp,)
// }
// #include<stdio.h>
// struct structure {
//     int foo;
//     union {
//       int integer;
//       char string[11];
//       void *pointer;
//     } node;
//     short bar;
//     long long baz;
//     int array[7];
// };
// int main(void) {
//     int arr[] = {0x590ff23c, 0x2fbc5a4d, 0x636c6557, 0x20656d6f,
//                  0x58206f74, 0x20545055, 0x6577202c, 0x6d6f636c,
//                 0x6f742065, 0x79695820, 0x4c20756f, 0x78756e69,
//                  0x6f724720, 0x5b207075, 0x33323032, 0x7825005d,
//                  0x636c6557, 0x64fd6d1d};
//     printf("%s\n", ((struct structure *)arr)->node.string);
// }
// int main(void)
// {
//     char p0[] = "Hello,Linux";
//     char *p1 = "Hello,Linux";
//     char p2[11] = "Hello,Linux";
//     printf("%d\n",p0[13]);
//     printf("p0 == p1: %d, strcmp(p0, p2): %d\n", p0 == p1, strcmp(p0, p2));
//     printf("sizeof(p0): %zu, sizeof(p1): %zu, sizeof(*p2): %zu\n",
//            sizeof(p0), sizeof(p1), sizeof(*p2));
//     printf("strlen(p0): %zu, strlen(p1): %zu\n", strlen(p0), strlen(p1));
// }
// int main(void) {
//     unsigned char a = 4 | 7;
//     a <<= 3;
//     unsigned char b = 5 & 7;
//     b >>= 3;
//     unsigned char c = 6 ^ 7;
//     c = ~c;
//     unsigned short d = (a ^ c) << 3;
//     signed char e = -63;
//     e <<= 2;
//     printf("a: %d, b: %d, c: %d, d: %d\n", a, b, c, (char)d);
//     printf("e: %#x\n", e);
// }
// #include <stdio.h>
// int main(int argc, char **argv) {
//     printf("argc = %d\n", argc);
//     while (1) {
//         argc++;
//         if (argc < 0) {
//             printf("%s\n", (char *)argv[0]);
//             break;
//         }
//     }
// }
// #define SWAP(a, b, t) t = a; a = b; b = t
// #define SQUARE(a) a *a
// #define SWAPWHEN(a, b, t, cond) if (cond) SWAP(a, b, t)
// int main() {
//     int tmp;
//     int x = 1;
//     int y = 2;
//     int z = 3;
//     int w = 3;
//     SWAP(x, y, tmp);
//     printf("x = %d, y = %d, tmp = %d\n", x, y, tmp);
//     if (x>y) SWAP(x, y, tmp);
//     printf("x = %d, y = %d, tmp = %d\n", x, y, tmp);
//     SWAPWHEN(x, y, tmp, SQUARE(1 + 2 + z++ + ++w) == 100);
//     printf("x = %d, y = %d\n", x, y, tmp);
//     printf("z = %d, w = %d, tmp = %d\n", z, w, tmp);
// }
// #include<stdio.h>
// int main()
// {
// 	int a[10],i = 0;
// 	while(i<10){
// 		scanf("%d",&a[i]);
// 		i++;
// 	}
// 	for(int i=0;i<10;i++)
//   {
// 		if(a[i]==3)
//     { 
// 		  printf("%d",i+1);		
// 		  break;
//     }
//     if(i==9)
//     {
// 	    printf("not found!");
//     } 
// 	}
// 	return 0;
// }
// #include<stdio.h>
// int main(void)
// {
// 	char a[10];
//   char b[10];
// 	scanf("%s",&a);//gets(a);
//   int j=0;
// 	for(int i=0;i<10;i++)
//   {
//     if(a[i]<'0'||a[i]>'9')
//     {
//       b[j]=a[i];
//       j++;
//     }
//   }
//   printf("%s",b);
// }
// int main(int argc, char **argv) {
//     int data1[2][3] = {{0x636c6557, 0x20656d6f, 0x58206f74},
//                        {0x756f7969, 0x6e694c20, 0x00000000}};
//     int data2[] = {0x47207875, 0x70756f72, 0x32303220, 0x00000a32};
//     char *a = (char *)data1;
//     char *b = (char *)data2;
//     char buf[1024];
//     strcpy(buf, a);
//     strcat(buf, b);
//     printf("%s \n", buf);
// }
// struct structure 
// {
//   int foo;//8字节
//   union
//   {
//     int integer;
//     char string[11];
//     void *pointer;
//   }node;//16字节
//   short bar;//8字节
//   long long baz;//8字节
//   int array[7];//32字节
// };//共72字节
// int main(void) 
// {
//   int arr[] = {0x590ff23c, 0x2fbc5a4d,/*从这里开始打印*/ 0x636c6557, 0x20656d6f,
//   0x58206f74, 0x20545055, 0x6577202c, 0x6d6f636c,
//   0x6f742065, 0x79695820, 0x4c20756f, 0x78756e69,
//   0x6f724720, 0x5b207075, 0x33323032, 0x7825005d,/*到5d后碰到/0打印结束*/
//   0x636c6557, 0x64fd6d1d};
//   printf("%s\n", ((struct structure *)arr)->node.string);
// }
// typedef int (*Predicate)(int);
// int *filter(int *array, int length, Predicate predicate,int *resultLength)//过滤的函数
// {
//     int j=0;
//     int *filteredNumbers=(int *)malloc(sizeof(int)*length);//为过滤后的新数组分配空间
//     for(int i=0;i<length;i++)
//     {
//         if(isPositive(array[i]))
//         {
//             filteredNumbers[j]=array[i];
//             j++;
//         }
//     }
//     *resultLength=j;
//     return filteredNumbers;
// }
 
// int isPositive(int num)//判断正数
//  {
//     if(num>0)
//     {
//         return 1;
//     }
//     return 0;
//  }
// int main(void) 
// {
//   int array[] = {-3, -2, -1, 0, 1, 2, 3, 4, 5, 6};
//   int length = sizeof(array) / sizeof(array[0]);
//   int resultLength;
//   int *filteredNumbers = filter(array, length, isPositive, &resultLength);
//   for (int i = 0; i < resultLength; i++) 
//   {
//   	printf("%d ", filteredNumbers[i]);
//   }
//   printf("\n");
//   free(filteredNumbers);//释放空间
//   return 0;
// }
// char* convertAndMerge(char a[2][20]);
// int main(void)
// {
//   char words[2][20] = {"Welcome to Xiyou ", "Linux Group 2022"};
//   printf("%s\n", words[0]);
//   printf("%s\n", words[1]);
//   char *str = convertAndMerge(words);
//   printf("str = %s\n", str);
//   free(str);
// }
// char* convertAndMerge(char a[2][20])
// {
//   char* s=(char *)malloc(sizeof(char)*40);
//   strcpy(s,a[0]);
//   strcat(s,a[1]);
//   for(int i=0;i<40;i++)
//   {
//     if(s[i]>='a'&&s[i]<='z')
//     {
//       s[i]-=32;
//     }
//     else if(s[i]>='A'&&s[i]<='Z')
//     {
//       s[i]+=32;
//     }
//   }
//   return s;
// }
// char *convert(const char *s);
// int main(void) {
//     char *str = "XiyouLinux Group 2022";
//     char *temp = convert(str);
//     puts(temp);
//     free(temp);
// }
// char *convert(const char *s)
// {
//   char* a=(char*)malloc(sizeof(char)*22);
//   strcpy(a,s);
//   for(int i=0;i<40;i++)
//   {
//     if(a[i]>='a'&&a[i]<='z')
//     {
//       a[i]-=32;
//     }
//     else if(a[i]>='A'&&a[i]<='Z')
//     {
//       a[i]+=32;
//     }
//   }
//   return a;
// }
// int main(void) {
//     int data[] = {0x636c6557, 0x20656d6f, 0x78206f74,
//                   0x756f7969, 0x6e694c20, 0x67207875,
//                   0x70756f72, 0x32303220, 0x00000a31};
//     puts((const char*)data);
// }
// int main(int argc, char **argv)
// {
//   int arr[5][5];
//   int a = 0;
//   for (int i = 0; i < 5; i++)
//   {
//       int *temp = *(arr + i);
//       for (; temp < arr[5]; temp++)
//       {
//         *temp = a++;
//       }
//   }
//   for (int i = 0; i < 5; i++)
//   {
//       for (int j = 0; j < 5; j++)
//       {
//         printf("%d\t", arr[i][j]);
//       }
//   }
// }
// int a = 3;
// void test() {
//     int a = 1;
//     a += 1;
//     {
//         int a = a + 1;
//         printf("a = %d\n", a);
//     }
//     printf("a = %d\n", a);
// }
// int main(void) {
//     test();
//     printf("a= %d\n", a);
// }
// typedef union {
//     long l;
//     int i[5];
//     char c;
// } UNION;
// typedef struct {
//     int like;
//     UNION coin;
//     double collect;
// } STRUCT;
// int main(void) {
//     printf("sizeof (UNION) = %zu\n", sizeof(UNION)); 
//     printf("sizeof (STRUCT) = %zu\n", sizeof(STRUCT));
// }
// void Bubble_sort(int arr[], int size)
// {
// 	int j,i,tem;
// 	for (i = 0; i < size-1;i ++)//size-1是因为不用与自己比较，所以比的数就少一个
// 	{
// 		int count = 0;
// 		for (j = 0; j < size-1 - i; j++)	//size-1-i是因为每一趟就会少一个数比较
// 		{
// 			if (arr[j] > arr[j+1])//这是升序排法，前一个数和后一个数比较，如果前数大则与后一个数换位置
// 			{
// 				tem = arr[j];
// 				arr[j] = arr[j+1];
// 				arr[j+1] = tem;
// 				count = 1;
				
// 			}
// 		}
// 		if (count == 0)			//如果某一趟没有交换位置，则说明已经排好序，直接退出循环
// 				break;	
// 	}
 
// }
// int main()
// {
// 	int arr[10];
// 	int i;
	
// 	printf("请输入10个数\n");
// 	for (i = 0; i < 10; i++)		//接收用户的数值
// 	{
// 		scanf("%d", &arr[i]);
// 	}
// 	printf("排序前的数组>");
// 	for (i = 0; i < 10; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
 
// 	printf("\n排序后的数组>");
// 	Bubble_sort(arr, 10);
// 	for (i = 0; i < 10; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
 
// 	return 0;
// }
// char* convertAndMerge(char a[2][20]);
// int main(void)
// {
//   char words[2][20] = {"Welcome to Xiyou ", "Linux Group 2022"};
//   printf("%s\n", words[0]);
//   printf("%s\n", words[1]);
//   char *str = convertAndMerge(words);
//   printf("str = %s\n", str);
//   free(str);
// }
// char* convertAndMerge(char a[2][20])
// {
//   char* s=(char *)malloc(sizeof(char)*40);
//   strcpy(s,a[0]);
//   strcat(s,a[1]);
//   for(int i=0;i<40;i++)
//   {
//     if(s[i]>='a'&&s[i]<='z')
//     {
//       s[i]-=32;
//     }
//     else if(s[i]>='A'&&s[i]<='Z')
//     {
//       s[i]+=32;
//     }
//   }
//   return s;
// }
// int main(int argc, char **argv) {
//     printf("argc = %d\n", argc);
//     while (1) {
//         argc++;
//         if (argc < 0) {
//             printf("%s\n", (char *)argv[0]);
//             break;
//         }
//     }
// }
// int main(void) {
//     char s[] = "I love Linux\0\0\0";
//     int a = sizeof(s);
//     int b = strlen(s);
//     printf("%d %d\n", a, b);
// }
// struct test1 {
//     int a;
//     short b;
//     double c;
// };
// struct test2 {
//     short b;
//     int a;
//     double c;
// };
// int main(void) {
//     struct test1 t1;
//     struct test2 t2;
//     printf("sizeof(t1): %d\n", sizeof(t1));
//     printf("sizeof(t2): %d\n", sizeof(t2));
// }
// int func(int a[10][13]);
// int main(void) 
// {
//     int arr[10][13];
//     for (int i = 0; i < 10; i++) 
//     {
//         for (int j = 0; j < 13; j++) 
//         {
//             arr[i][j] = rand();
//         }
//     }
//     func(arr);
// }
// int func(int a[10][13])
// {
// 	for(int i=0;i<10;i++)
//     {
//         for(int j=0;j<13;j++)
//         {
//             printf("%d\t",a[i][j]);
//         }
//     }
// }
// int main(void) {
//     int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int(*b)[3] = a;
//     ++b;
//     b[1][1] = 10;
//     int *ptr = (int *)(&a + 1);
//     printf("%d %d %d \n", a[2][1], **(a + 1), *(ptr - 1));
// }
// char *convert(const char *s);
// int main(void) {
//     char *str = "XiyouLinux Group 2022";
//     char *temp = convert(str);
//     puts(temp);
//     free(temp);//释放空间
// }
// char *convert(const char *s)
// {
//   char* a=(char*)malloc(sizeof(char)*22);//分配空间
//   strcpy(a,s);//复制字符串
//   for(int i=0;i<40;i++)//翻转大小写
//   {
//     if(a[i]>='a'&&a[i]<='z')
//     {
//       a[i]-=32;
//     }
//     else if(a[i]>='A'&&a[i]<='Z')
//     {
//       a[i]+=32;
//     }
//   }
//   return a;
// }
// int main(int argc, char *argv[]) {
//     printf("argc = %d\n", argc);
//     for (int i = 0; i < argc; i++)
//         printf("%s\n", argv[i]);
// }
// #include<stdio.h>
// int main(int argc, char*argv[])
// {
//      int i=0;
//      while(argv[i]!=NULL)
//           printf("%s\n",argv[i++]);
//      return 0;
// }
// int *func1(void) {
//     static int n = 0;
//     n = 1;
//     return &n;
// }
// int *func2(void) {
//     int *p = (int *)malloc(sizeof(int));
//     *p = 3;
//     return p;
// }
// int *func3(void) {
//     int n = 4;
//     return &n;
// }
// int main(void) {
//     *func1() = 4;
//     *func2() = 5;
//     *func3() = 6;
// }
// int main(void) {
//     int data[] = {0x636c6557, 0x20656d6f, 0x78206f74,
//                   0x756f7969, 0x6e694c20, 0x67207875,
//                   0x70756f72, 0x32303220, 0x00000a31};
//     puts((const char*)data);
// }
// char* convertAndMerge(char a[2][20]);
// int main(void)
// {
//   char words[2][20] = {"Welcome to Xiyou ", "Linux Group 2022"};
//   printf("%s\n", words[0]);
//   printf("%s\n", words[1]);
//   char *str = convertAndMerge(words);
//   printf("str = %s\n", str);
  
// }
// char* convertAndMerge(char a[2][20])
// {
//   char* s;
//   strcpy(s,a[0]);
//   strcat(s,a[1]);
//   for(int i=0;i<40;i++)
//   {
//     if(s[i]>='a'&&s[i]<='z')
//     {
//       s[i]-=32;
//     }
//     else if(s[i]>='A'&&s[i]<='Z')
//     {
//       s[i]+=32;
//     }
//   }
//   return s;
// }
// int main(void)
// {
//   int a;
//   scanf("%d",&a);
//   double m=0;
//   if(a<=150)
//   {
//     m=0.4463*a;
//   }
//   else if(a>150&&a<=400)
//   {
//     m=0.4463*150+0.4663*(a-150);
//   }
//   else if(a>400)
//   {
//     m=0.4463*150+0.4663*250+0.5663*(a-400);
//   }
//   printf("%.1f",m);
// }
// int main(void)
// {
//   int ch=0;
//   while((ch=getchar())!=EOF)
//   {
//     printf("%c",ch);
//   }
// }
// int main(void)
// {
//   int n;
//   scanf("%d",&n);
//   char a[2*n-1][2*n-1];
//   for(int m=0;m<n;m++)
//   {
//     for(int i=m;i<2*n-1-m;i++)
//     {
//       for(int j=m;j<2*n-1-m;j++)
//       {
//         a[i][j]=65+m;
//       }
//     }
//   }
//   for(int i=0;i<2*n-1;i++)
//   {
//     for(int j=0;j<2*n-1;j++)
//     {
//       printf("%c",a[i][j]);
//     }
//     printf("\n");
//   }
// }
// int main(void)
// {
//   int n;
//   scanf("%d",&n);
//   int count;
//   if(n==0)
//   {
//     printf("32");
//   }
//   else if(n>0)
//   {
//     while(n>0)
//     {
//       n=n<<1;
//       count++;
//     }
//     printf("%d",count);
//   }
//   else
//   {
//     printf("0");
//   }
// }
// struct abcd
// {
//   char a;
//   int b;
//   char c;
//   int d;
//   char e;
// };
// int main(void)
// {
//   int m,n;
//   scanf("%d",&m);
//   scanf("%d",&n);
//   struct abcd abc[m][n];
//   for(int i=0;i<m;i++)
//   {
//     for(int j=0;j<n;j++)
//     {
//       abc[i][j].a='(';
//       abc[i][j].b=i+1;
//       abc[i][j].c=',';
//       abc[i][j].d=j+1;
//       abc[i][j].e=')';
//     }
//   }
//   for(int i=0;i<m;i++)
//   {
//     for(int j=0;j<n;j++)
//     {
//       printf("%c%d%c%d%c ",abc[i][j].a,abc[i][j].b,abc[i][j].c,abc[i][j].d,abc[i][j].e);
//     }
//     printf("\n");
//   }
// }
// int main(void)
// {
//   double a,c;
//   int b;
//   scanf("%lf %d %lf",&a,&b,&c);
//   double luo;
//   if(b==0)
//   {
//     luo=a*2.455;
//   }
//   else if(b==1)
//   {
//     luo=a*1.26;
//   }
//   if(luo>c)
//   {
//     printf("%.2f T_T",luo);
//   }
//   else if(luo<=c)
//   {
//     printf("%.2f ^_^",luo);
//   }
// }
// int main(void)
// {
// 	char a[100];
// 	int i=0;
// 	do
// 	{
// 		scanf("%c",&a[i]);
// 		i++;
// 	}
// 	while(a[i-1]!='.');
// 	int count=0;
// 	for(int j=0;j<i;j++)
// 	{
// 		if(a[j]!=32&&a[j]!=46)
// 		{
// 			count++;
// 		}
// 		else
// 		{
// 			if(count!=0)
// 			{
// 				printf("%d",count);
// 			if(a[j]!=46)
// 			{
// 				printf(" ");
// 			}
// 			count=0;
// 			}
// 		}
// 	}
// } 
// int main(void)
// {
// 	int x,n;
// 	scanf("%d %d",&x,&n);
// 	long long int m=0;
// 	for(int i=1;i<=n;i++)
// 	{
// 		switch(x)
// 		{
// 			case 1:
// 			case 2:
// 			case 3:
// 			case 4:
// 			case 5:m+=250;
// 			break;
// 			case 6:
// 			case 7:
// 			break;
// 			case 8:x=1;m+=250;
// 			break;
// 		}
// 		x+=1;
// 	}
// 	printf("%d",m);
// }
// int f(int a,int b);
// int main(void)
// {
// 	int a,b,c;
// 	scanf("%d %d %d",&a,&b,&c);
// 	double s1,s2,s3;
// 	if(a>b)
// 	{
// 		s1=b*1.0/a;
// 	}
// 	else
// 	{
// 		s1=a*1.0/b;
// 	}
// 	if(a>c)
// 	{
// 		s2=c*1.0/a;
// 	}
// 	else
// 	{
// 		s2=a*1.0/c;
// 	}
// 	if(c>b)
// 	{
// 		s3=b*1.0/c;
// 	}
// 	else
// 	{
// 		s3=c*1.0/b;
// 	}
// 	if(s1<s2&&s1<s3)
// 		if(a>=b)
// 		{
// 			printf("%d/%d",b/f(b,a),a/f(b,a));
// 		}
// 		else
// 		{
// 			printf("%d/%d",a/f(a,b),b/f(a,b));
// 		}
// 	if(s2<s1&&s2<s3)
// 		if(c>=a)
// 		{
// 			printf("%d/%d",a/f(a,c),c/f(a,c));
// 		}
// 		else
// 		{
// 			printf("%d/%d",c/f(c,a),a/f(c,a));
// 		}
// 	if(s3<s1&&s3<s2)
// 		if(c>=b)
// 		{
// 			printf("%d/%d",b/f(b,c),c/f(b,c));
// 		}
// 		else
// 		{
// 			printf("%d/%d",c/f(c,b),b/f(c,b));
// 		}
// }
// int f(int a,int b)
// {
// 	int i=a-1;
// 	while(a%i!=0||b%i!=0)
// 	{
// 		i--;
// 	}
// 	return i;
// }
// int main(void)
// {
// 	int a[10];
// 	for(int i=0;i<10;i++)
// 	{
// 		scanf("%d",&a[i]);
// 	}
// 	int h;
// 	scanf("%d",&h);
// 	int count=0;
// 	for(int i=0;i<10;i++)
// 	{
// 		if(a[i]<=h+30)
// 		{
// 			count++;
// 		}
// 	}
// 	printf("%d",count);
// }
// int main(void)
// {
// 	int a,b,c;
// 	scanf("%d %d %d",&a,&b,&c);
// 	char n[4];
// 	scanf("%s",n);
// 	if()
// 	{
// 		if(a>b&&b>c)
// 		{
// 			printf("%d %d %d",a,b,c);
// 		}
// 		else if(a>c&&c>b)
// 		{
// 			printf("%d %d %d",a,c,b);
// 		}
// 		else if(b>a&&a>c)
// 		{
// 			printf("%d %d %d",b,a,c);
// 		}
// 		else if(b>c&&c>a)
// 		{
// 			printf("%d %d %d",b,c,a);
// 		}
// 		else if(c>a&&a>b)
// 		{
// 			printf("%d %d %d",c,a,b);
// 		}
// 		else if(c>b&&b>a)
// 		{
// 			printf("%d %d %d",c,b,a);
// 		}
// 	}
// }
// int main(void)
// {
// 	int a;
// 	scanf("%d",&a);
// 	int count=0;
// 	while(a>1)
// 	{
// 		a/=2;
// 		count++;
// 	}
// 	printf("%d",count+1);
// }