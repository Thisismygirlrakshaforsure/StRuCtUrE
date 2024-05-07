#include<stdio.h>
#include<conio.h>
struct student
{
int roll;
char name[50];
int class;
}
obj[50];
void main()
{
  int i;
clrscr();
for(i=0; i<50; i++)
  printf("\n enter roll no");
scanf("%d",&obj [i].roll);
  printf("\n enter name");
scanf("%s",&obj [i].name);
  printf("\n enter class");
scanf("%d",&obj [i].class);
printf("\n Roll no. \t Name \t Class");
printf("\n %d \t %s \t %d", obj[i].roll, obj[i].name, obj[i].class);
}
getch();
}
