#include<stdio.h>

int main(){
    int opt=0;
    do
    {
        printf("\n\tChose an option\n1-BMI\n2-Motion\n3-Electrostatics\n4-Exit\n\n");
        scanf(" %d",&opt);
        switch (opt)
        {
        case 1:
        printf("Enter weight in pound: ");
            float a,b,c;
        scanf("%f",&a);
        printf("Enter height in inches: ");
        scanf("%f",&b);
        c = a*703.0/(b*b);
        if (c<15.0){
            printf("Starvation");
        }
        else if(c<17.5){
            printf("Anorexic");
        }
        else if (c<18.5){
            printf("Underweight");
        }
        else if(c>=18.5 && c<25.0){
            printf("Ideal");
        }
        else if(c>=25.0 && c<30.0){
            printf("Overweight");
        }
        else if(c>=30.0 && c<40.0){
            printf("Obese");
        }
        else{
            printf("Morbidly");
        }
            break;
        case 2:
            printf("\tMotion section: \n"); 
            int opt1;
        do
        {
            /* code */
        
            printf("\nChose an option \n1-Force/Mass/Acceleration:\n2-Velocity/Time/Distance\n3-Exit:\n  ");
            scanf("%d",&opt1);

            switch (opt1)
            {
            case 1:
                printf("Options are:\n1-Calculate Force\n2-Calculate Mass\n3-Calculate Acceleration\n4-For exit\n");
                int n;
                scanf("%d",&n);
                switch (n)
                {
                case 1:
                    printf("Enter mass: ");
                    float m,a,f;
                    scanf("%f",&m);
                    printf("Enter acceleration: ");
                    scanf("%f",&a);
                    printf("Force is: %.2f Newtons",m*a);
                    break;
                case 2:
                    printf("Enter acceleration: ");
                    // float a,f;
                    scanf("%f",&a);
                    printf("Enter force: ");
                    scanf("%f",&f);
                    printf("Mass is: %.2f kg",f/a);
                    break;
                case 3:
                    printf("Enter mass: ");
                    // float m,f;
                    scanf("%f",&m);
                    printf("Enter force: ");
                    scanf("%f",&f);
                    printf("Acceleration is: %.2f m/s^2",f/m);
                    break;
                case 4:
                break;
                default:
                    printf("Invalid option chosen!");
                    break;
                }
                break;
            case 2:
                printf("Options are:\n1-Calculate Velocity\n2-Calculate Time\n3-Calculate Distance:\n4-Exit\n ");
                int m;
                scanf("%d",&m);
                switch (m)
                {
                case 1:
                    printf("Enter Time: ");
                    float t,v,d;
                    scanf("%f",&t);
                    printf("Enter distance: ");
                    scanf("%f",&d);
                    printf("Velocity is: %.2f m/s",d/t);
                    break;
                case 2:
                    printf("Enter distance: ");
                    scanf("%f",&d);
                    printf("Enter velocity: ");
                    scanf("%f",&v);
                    printf("Time is: %.2f seconds",d/v);
                    break;
                case 3:
                    printf("Enter velocity: ");
                    scanf("%f",&v);
                    printf("Enter Time: ");
                    scanf("%f",&t);
                    printf("Distance is: %.2f meters",v*t);
                    break;


                default:
                    printf("Invalid input: ");
                    break;
                }
            case 3:
            break;
                // break;
            default:
                    printf("Invalid option chosen!");
                break;
            }
        } while (opt1!=3);
        break;

        case 3:
        printf("\tElectrostatics section");
        int opt2=0;
        do
        {
            /* code */
        
            printf("\nOptions are:\n1-Potential-Difference/Current/Resistance\n2-Charge/Capacitance/Potential\n3-Exit: \n");
            scanf("%d",&opt2);
            switch (opt2)
            {
            case 1:
                printf("Options are:\n1-Calculate potential difference:\n2-Calculate Current:\n3-Calculate Resistance:\n ");
                int e;
                scanf("%d",&e);
                switch (e)
                {
                case 1:
                    printf("Enter current: ");
                    float c,vd,r;
                    scanf("%f",&c);
                    printf("Enter Resistance: ");
                    scanf("%f",&r);
                    printf("Potential difference is : %.2f volts",c*r);
                    break;
                case 2:
                    printf("Enter Resistance: ");
                    scanf("%f",&r);
                    printf("Enter potential differnce: ");
                    scanf("%f",&vd);
                    printf("Current is : %.2f ampere",vd/r);
                    break;
                case 3:
                    printf("Enter current: ");
                    scanf("%f",&c);
                    printf("Enter potential differnce: ");
                    scanf("%f",&vd);
                    printf("Resistance is : %.2f ohms",vd/c);
                    break;
                    
                default:
                    // printf("Invalid option: ");
                    break;
                }
                break;
            case 2:
                printf("Options are:\n1-Calculate charge:\n2-Calculate Capacitance\n3-Calculate potential difference: ");
                scanf("%d",&opt2);
                switch (opt2)
                {
                case 1:
                    printf("Enter capacitance: ");
                    float q,c,p;
                    scanf("%f",&c);
                    printf("Enter potential difference: ");
                    scanf("%f",&p);
                    printf("Charges are: %.2f coloumb",c*p);
                    break;
                case 2:
                    printf("Enter potential difference: ");
                    scanf("%f",&p);
                    printf("Enter charqe: ");
                    scanf("%f",&q);
                    printf("Capacitance is: %.2f farad",q/p);
                    break;
                case 3:
                    printf("Enter charqe: ");
                    scanf("%f",&q);
                    printf("Enter capacitance: ");
                    scanf("%f",&c);
                    printf("Potential difference is: %.2f volts",q/c);
                    break;

                default:
                    printf("Wrong option:\n");
                    break;
                }
            case 3:
                break;
            default:
                break;
            }
        } while (opt2!=3);
        default:
                    // printf("Invalid option chosen!");
            break;
        }
    } while (opt!=4);
}