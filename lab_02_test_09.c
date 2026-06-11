#include <stdio.h>

int main()
{
    int salary; 
    float gsalary,hra, da;
    printf("Enter basic salary: ");
    scanf("%d", &salary);

    if (salary <= 10000)
    {
        hra = salary * (20.0 / 100);

        da = salary * (80.0 / 100);
        gsalary = (float)(salary + hra + da);
        printf("Gross salary: %.2f",gsalary);
    }
    else if(salary<2000){
        hra = salary * (25.0 / 100);

        da = salary * (90.0 / 100);
        gsalary = (float)(salary + hra + da);
        printf("Gross salary: %.2f",gsalary);
    }
    else if(salary>2000){
        hra = salary * (30.0 / 100);

        da = salary * (95.0 / 100);
        gsalary = (float)(salary + hra + da);
        printf("Gross salary: %.2f",gsalary);
    }
    return 0;
}