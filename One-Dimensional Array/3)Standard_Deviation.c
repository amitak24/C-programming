/*Write a Program that calculates the standard deviation of 10
data using arrays*/
#include <stdio.h>
#include <math.h>

double calculateSD(double data[]);
int main()
{
    double data[10];
    
    printf("Enter The Elements:\n");
    for(int i=0;i<10;++i)
    {
        scanf("%lf",&data[i]);
    }
    
    printf("Standard Deviation is:%.2lf",calculateSD(data));
    return 0;
}
double calculateSD(double data[])
{
    double sum=0.0,mean,sd=0.0;
    for(int i=0;i<10;++i)
    {
        sum+=data[i];
    }
    mean=sum/10;
    for(int i=0;i<10;++i)
    {
        sd+=pow(data[i]-mean,2);
    }
    return sqrt(sd/10);
}