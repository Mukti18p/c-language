#include<stdio.h>
struct per
{
    char name[20];
    int day;
    char month[10];
    int year;
    float salary;
}a,b,c;
int main()
{
    scanf("%s %d %s %d %f",a.name,&a.day,a.month,&a.year,&a.salary);
    printf("%s\n %d\n %s \n%d \n%f\n",a.name,a.day,a.month,a.year,a.salary);

}