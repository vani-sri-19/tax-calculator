#include<stdio.h>
#include<conio.h>
int main()
{
      float income = 0, hra=0, med=0, tra=0, ta=0,income2=0;
      int slab_code = 0;
      clrscr();
      printf(“INCOME TAX CALCULATION”);
      printf(“\n* Income tax is valid only for minimum annual income 95,000 Rs. and above *”);
      printf(“\nEnter gross salary per annum:”);
      scanf(“%f”,&income);
      printf(“\nEnter HRA per month\n(Rs.5,000 as per budget 2017):”);  
      scanf(“%f”,&hra);
      printf(“\nEnter Medical Allowance per month\n(Rs.1,500 as per budget 2017):”); 
      scanf(“%f”,&med);
      printf(“\nEnter Travel Allowance per month\n(Rs.800 as per budget 2017):”);
      scanf(“%f”,&tra);
      hra=hra*12;
      med=med*12;
      tra=tra*12;
      ta=hra+med+tra;
      income2=income-ta;
      printf(“\n\tgross salary p.a:\t\t%f”,income);
      printf(“\n\tHouse Rent Allowance p.a:\t%f”,hra);
      printf(“\n\tMedical Allowance p.a:\t\t%f”,med);
      printf(“\n\tTravel Allowance p.a:\t\t%f”,tra);
      printf(“\n\tTotal Exemption:\t\t%f”,ta);
      printf(“\n\tTaxable Salary:\t\t\t%f”,income2);
      if(income2<10000)
            slab_code=0;
      else if(income2>=10000 && income2<20000)
            slab_code=1;
      else if(income2>=20000 && income2<30000)
            slab_code=2;
      else if(income2>=30000 && income2<40000)
            slab_code=3;
      else if(income2>=40000 && income2<50000)
            slab_code=4;
      else 
            slab_code=5;
      printf(“\n\tSlab Code:\t\t\t%d”,slab_code);
      if(slab_code==0)
      {
           printf(“\n\tTax:\t\t\t\t NIL”);
           printf(“\n\tTax on income:\t\t\t 0 Rs”);
      }
      else if(slab_code==1)
      {
           printf(“\n\tTax:\t\t\t\t 10%”);
           printf(“\n\tTax on income:\t\t\t %f Rs”,(0.1*income2));
      }
      else if(slab_code==2)
      {
           printf(“\n\tTax:\t\t\t\t 15%”);
           printf(“\n\tTax on income:\t\t\t %f Rs”,(0.15*income2));
      }
      else if(slab_code==3||slab_code==4)
      {
           printf(“\n\tTax:\t\t\t\t 20%”);
          printf(“\n\tTax on income:\t\t\t %f Rs”,(0.2*income2));
      }
      else 
      {
           printf(“\n\tTax:\t\t\t\t 25%”);
           printf(“\n\tTax on income:\t\t\t%f Rs”,(0.25*income2));
      }
      getch();
      return 0;
}

