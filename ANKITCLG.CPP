#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
protected:
int rollno;
char name[20];
public:
void getdataA(int a,char *b)
{
rollno=a;
strcpy(name,b);
}
};
class marks:public student
{
int m,n,c,total;
float avg;
public:
void getdataB(int a,int b,int d)
{
m=a;
n=b;
c=d;
}
void calculate()
{
total=m+n+c;
avg=(float)total/3;
}
void display()
{
cout<<"NAme="<<name<<endl;
cout<<"Rollno="<<rollno<<endl;
cout<<"Marks="<<total<<endl;
cout<<"Average="<<avg<<endl;
}
};
void main()
{
marks obj;
obj.getdataA(1,"Sam");
obj.getdataB(75,67,89);
obj.calculate();
obj.display();
getch();
}