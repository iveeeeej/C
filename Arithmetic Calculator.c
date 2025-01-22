#include<stdio.h>

int main()
{
int choice1, choice2;
char answer;
printf("WELCOME User!\n");
do{
printf("How can I serve you?\n[1] - ARITHMETIC\n[2] - CONVERSION\n[3] - AREA\n[4] - PROFILE DATA\n[5] - EXIT\n");
scanf("%d",&choice1);

    if(choice1==5)
    {
    printf("Goodbye! Have a Nice Day!");
    break;
    }

    switch(choice1)
    {
    float n1, n2, n3, n4;
    int age, h, w, purok;
    char name[20], mname[20], lname[20], sex[10], brgy[20], city[20], cship[20], cs[10];
        case 1:
        printf("ARITHMETIC!\n[1] - ADDITON\n[2] - SUBTRACTION\n[3] - MULTIPLICATION\n[4] - DIVISION\n");
        scanf("%d",&choice2);

        if(choice2==1)
        {
        printf("Input nos.: \n");
        scanf("%f",&n1); scanf("%f",&n2);
        printf("SUM: %.2f\n",n1+n2);
            printf("Do you wish to CONTINUE Adding? [Y/N]\n");
            scanf("%s",&answer);
            while(answer=='YES' || answer=='Yes' || answer=='Y' || answer=='yes' || answer=='y')
            {
            printf("Input nos.: \n");
            scanf("%f",&n1); scanf("%f",&n2);
            printf("SUM: %.2f\n",n1+n2);
                printf("Do you wish to CONTINUE Adding? [Y/N]\n");
                scanf("%s",&answer);
            }
            if(answer=='NO' || answer=='No' || answer=='N' || answer=='no' || answer=='n');
            {
            break;
            }
        }

        if(choice2==2)
        {
        printf("Input nos.: \n");
        scanf("%f",&n1); scanf("%f",&n2);
        printf("DIFFERENCE: %.2f\n",n1-n2);
            printf("Do you wish to CONTINUE Subtracting? [Y/N]\n");
            scanf("%s",&answer);
            while(answer=='YES' || answer=='Yes' || answer=='Y' || answer=='yes' || answer=='y')
            {
            printf("Input nos.: \n");
            scanf("%f",&n1); scanf("%f",&n2);
            printf("DIFFERENCE: %.2f\n",n1-n2);
                printf("Do you wish to CONTINUE Subtracting? [Y/N]\n");
                scanf("%s",&answer);
            }
            if(answer=='NO' || answer=='No' || answer=='N' || answer=='no' || answer=='n')
            {
            break;
            }
        }

        if(choice2==3)
        {
        printf("Input nos.: \n");
        scanf("%f",&n1); scanf("%f",&n2);
        printf("Product: %.2f\n",n1*n2);
            printf("Do you wish to CONTINUE Multiplying? [Y/N]\n");
            scanf("%s",&answer);
            while(answer=='YES' || answer=='Yes' || answer=='Y' || answer=='yes' || answer=='y')
            {
            printf("Input nos.: \n");
            scanf("%f",&n1); scanf("%f",&n2);
            printf("Product: %.2f\n",n1*n2);
                printf("Do you wish to CONTINUE Multiplying? [Y/N]\n");
                scanf("%s",&answer);
            }
            if(answer=='NO' || answer=='No' || answer=='N' || answer=='no' || answer=='n')
            {
            break;
            }
        }

        if(choice2==4)
        {
        printf("Input nos.: \n");
        scanf("%f",&n1); scanf("%f",&n2);
        printf("Quotient: %.2f\n",n1/n2);
            printf("Do you wish to CONTINUE Dividing? [Y/N]\n");
            scanf("%s",&answer);
            while(answer=='YES' || answer=='Yes' || answer=='Y' || answer=='yes' || answer=='y')
            {
            printf("Input nos.: \n");
            scanf("%f",&n1); scanf("%f",&n2);
            printf("Quotient: %.2f\n",n1/n2);
                printf("Do you wish to CONTINUE Dividing? [Y/N]\n");
                scanf("%s",&answer);
            }
            if(answer=='NO' || answer=='No' || answer=='N' || answer=='no' || answer=='n')
            {
            break;
            }
        }

        case 2:
        printf("CONVERSION!\n[1] - Meter(s) - Kilometer(s)\n[2] - Foot/Feet - Inch(es)\n[3] - Celsius - Fahrenheit\n");
        scanf("%d",&choice2);

        if(choice2==1)
        {
        printf("Enter Meter(s): \n");
        scanf("%f",&n1);
        printf("%.2f Meter(s) is %.2f Kilometer(s)\n",n1, n1/10);
            printf("Do you wish to CONTINUE Conversion? [Y/N]\n");
            scanf("%s",&answer);
            while(answer=='YES' || answer=='Yes' || answer=='Y' || answer=='yes' || answer=='y')
            {
            printf("Enter Meter(s): \n");
            scanf("%f",&n1);
            printf("%.2f Meter(s) is %.2f Kilometer(s)\n",n1, n1/10);
            printf("Do you wish to CONTINUE Conversion? [Y/N]\n");
            scanf("%s",&answer);
            }
            if(answer=='NO' || answer=='No' || answer=='N' || answer=='no' || answer=='n')
            {
            break;
            }
        }

        if(choice2==2)
        {
        printf("Enter Foot/Feet: \n");
        scanf("%f",&n1);
        printf("%.2f Foot/Feet is %.2f Inch(es)\n",n1, n1*12);
            printf("Do you wish to CONTINUE Conversion? [Y/N]\n");
            scanf("%s",&answer);
            while(answer=='YES' || answer=='Yes' || answer=='Y' || answer=='yes' || answer=='y')
            {
            printf("Enter Foot/Feet: \n");
            scanf("%f",&n1);
            printf("%.2f Foot/Feet is %.2f Inch(es)\n",n1, n1*12);
            printf("Do you wish to CONTINUE Conversion? [Y/N]\n");
            scanf("%s",&answer);
            }
            if(answer=='NO' || answer=='No' || answer=='N' || answer=='no' || answer=='n')
            {
            break;
            }
        }

        if(choice2==3)
        {
        printf("Enter Celsius: \n");
        scanf("%f",&n1);
        printf("%.2f Celsius is %.2f Fahrenheit\n",n1, ((n1*9)/5)+32);
            printf("Do you wish to CONTINUE Conversion? [Y/N]\n");
            scanf("%s",&answer);
            while(answer=='YES' || answer=='Yes' || answer=='Y' || answer=='yes' || answer=='y')
            {
            printf("Enter Celsius: \n");
            scanf("%f",&n1);
            printf("%.2f Celsius is %.2f Fahrenheit\n",n1, ((n1*9)/5)+32);
            printf("Do you wish to CONTINUE Conversion? [Y/N]\n");
            scanf("%s",&answer);
            }
            if(answer=='NO' || answer=='No' || answer=='N' || answer=='no' || answer=='n')
            {
            break;
            }
        }

        case 3:
        printf("AREA!\n[1] - Circle\n[2] - Square\n[3] - Rectangle\n");
        scanf("%d",&choice2);

        if(choice2==1)
        {
        printf("Enter Radius: \n");
        scanf("%f",&n1);
        printf("Area of Circle is: %.2f\n",3.14*n1*n1);
            printf("Do you wish to CONTINUE Area? [Y/N]\n");
            scanf("%s",&answer);
            while(answer=='YES' || answer=='Yes' || answer=='Y' || answer=='yes' || answer=='y')
            {
            printf("Enter Radius: \n");
            scanf("%f",&n1);
            printf("Area of Circle is: %.2f\n",3.14*n1*n1);
            printf("Do you wish to CONTINUE Area? [Y/N]\n");
            scanf("%s",&answer);
            }
            if(answer=='NO' || answer=='No' || answer=='N' || answer=='no' || answer=='n')
            {
            break;
            }
        }

        if(choice2==2)
        {
        printf("Enter Sides: \n");
        scanf("%f",&n1); scanf("%f",&n2); scanf("%f",&n3); scanf("%f",&n4);
        printf("Area of Square is: %.2f\n",n1*n2*n3*n4);
            printf("Do you wish to CONTINUE Area? [Y/N]\n");
            scanf("%s",&answer);
            while(answer=='YES' || answer=='Yes' || answer=='Y' || answer=='yes' || answer=='y')
            {
            printf("Enter Sides: \n");
            scanf("%f",&n1); scanf("%f",&n2); scanf("%f",&n3); scanf("%f",&n4);
            printf("Area of Square is: %.2f\n",n1*n2*n3*n4);
            printf("Do you wish to CONTINUE Area? [Y/N]\n");
            scanf("%s",&answer);
            }
            if(answer=='NO' || answer=='No' || answer=='N' || answer=='no' || answer=='n')
            {
            break;
            }
        }

        if(choice2==3)
        {
        printf("Enter Length: \n");
        scanf("%f",&n1);
        printf("Enter Length: \n");
        scanf("%f",&n2);
        printf("Area of Rectangle is: %.2f\n",n1*n2);
            printf("Do you wish to CONTINUE Area? [Y/N]\n");
            scanf("%s",&answer);
            while(answer=='YES' || answer=='Yes' || answer=='Y' || answer=='yes' || answer=='y')
            {
            printf("Enter Length: \n");
            scanf("%f",&n1);
            printf("Enter Length: \n");
            scanf("%f",&n2);
            printf("Area of Rectangle is: %.2f\n",n1*n2);
            printf("Do you wish to CONTINUE Area? [Y/N]\n");
            scanf("%s",&answer);
            }
            if(answer=='NO' || answer=='No' || answer=='N' || answer=='no' || answer=='n')
            {
            break;
            }
        }

        case 4:
       do {
        printf("PROFILE DATA\nPlease Fill the Following\n");
        printf("First Name: \n");
        scanf("%s",&name);
        printf("Middle Name: \n");
        scanf("%s",&mname);
        printf("Last Name: \n");
        scanf("%s",&lname);
        printf("Age: \n");
        scanf("%d",&age);
        printf("Sex: \n");
        scanf("%s",&sex);
        printf("Purok #: \n");
        scanf("%d",&purok);
        printf("Barangay: \n");
        scanf("%s",&brgy);
        printf("City: \n");
        scanf("%s",&city);
        printf("Height(cm): \n");
        scanf("%d",&h);
        printf("Weight(kg): \n");
        scanf("%d",&w);
        printf("Citizenship: \n");
        scanf("%s",&cship);
        printf("Civil Status: \n");
        scanf("%s",&cs);

        printf("\n[PERSONAL DATA]\n");
        printf("Full Name: %s %s %s\n", name, mname, lname);
        printf("Address: Purok %d, %s, %s City\n", purok, brgy, city);
        printf("Age: %d\t\t\t",age); printf("Height: %d cm\n",h);
        printf("Sex: %s\t\t",sex); printf("Weight: %d kg\n",w);
        printf("Citizenship: %s\n",cship);
        printf("Civil Status: %s\n\n",cs);

        printf("Do you wish to CONTINUE PROFILES? [Y/N]\n");
        scanf("%s",&answer);
        }
        while(answer=='YES' || answer=='Yes' || answer=='Y' || answer=='yes' || answer=='y');
        if(answer=='NO' || answer=='No' || answer=='N' || answer=='no' || answer=='n')
        {
        break;
        }

        default:
        printf("INVALID!\n");
        break;
    }
}
while(answer=='NO' || answer=='No' || answer=='N' || answer=='no' || answer=='n');

return 0;
}







