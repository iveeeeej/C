//Members: Jevi Bantiad, Silver Heyrana, Johny Roldan, Von Jushua Peje BSIT - 1D


#include<stdio.h>

int main()
{
    int choice1, choice2, choice3, quant, cashrev, ctr=0;
    float price, amt, pay, tra=0, change, amtpd[20], totalSales=0;
    char answer, answer2;
do{
    printf("................MINI MEDICAL RETAIL SHOP MANAGEMENT SYSTEM (MMRSMS)................\n\n");
    printf("WELCOME! What would you like to purchase?\n\n");


do{
    printf("All Products\n[1] - MEDICINE & TREATMENTS\n[2] - VITAMINS & SUPPLEMENTS\n[3] - MEDICAL SUPPLIES\n[4] - HEALTH MONITORING DEVICES\n[5] - PERSONAL & HOME HEALTHCARE\n");
    scanf("%d",&choice1);

    switch(choice1)
    {
    case 1:
    printf("MEDICINE & TREATMENTS:\n[1] - COUGH & COLD TREATMENTS\n[2] - DIGESTIVE HEALTH\n[3] - FIRST AID\n[4] - JOINT & MUSCLE PAIN RELIEF\n[5] - FEVER & FLU\n[6] - WOUND CARE & ANTISEPTIC\n");
    scanf("%d",&choice2);

    if(choice2==1)
    {
    printf("COUGH & COLD TREATMENTS:\n[1] Ambroxol\t\t. . . P02.00\n[2] Nasatapp\t\t. . . P08.67\n[3] Neozep Forte\t. . . P07.54\n[4] Solmux Advance\t. . . P16.50\n[5] Solvomox\t\t. . . P10.00\n");
    printf("\nItem: ");
    scanf("%d",&choice3);
    printf("Item Quantity: ");
    scanf("%d",&quant);

    if(choice3==1) price=2;
    if(choice3==2) price=8.67;
    if(choice3==3) price=7.54;
    if(choice3==4) price=16.50;
    if(choice3==5) price=10;

    break;
    }

    if(choice2==2)
    {
    printf("DIGESTIVE HEALTH:\n[1] Colace\t\t. . . P09.70\n[2] Domperidone\t\t. . . P04.00\n[3] Dulcolax\t\t. . . P02.50\n[4] Kremil S\t\t. . . P09.75\n[5] Loperamide\t\t. . . P08.00\n");
    printf("\nItem: ");
    scanf("%d",&choice3);
    printf("Item Quantity: ");
    scanf("%d",&quant);

    if(choice3==1) price=9.70;
    if(choice3==2) price=4;
    if(choice3==3) price=2.50;
    if(choice3==4) price=9.75;
    if(choice3==5) price=8;

    break;
    }

    if(choice2==3)
    {
    printf("FIRST AID:\n[1] Band Aid\t\t. . . P02.00\n[2] Bandage\t\t. . . P35.00\n[3] First Aid Kit\t. . . P495.00\n[4] Gauze\t\t. . . P05.50\n[5] Ice Bag\t\t. . . P165.00\n");
    printf("\nItem: ");
    scanf("%d",&choice3);
    printf("Item Quantity: ");
    scanf("%d",&quant);

    if(choice3==1) price=2;
    if(choice3==2) price=35;
    if(choice3==3) price=495;
    if(choice3==4) price=5.50;
    if(choice3==5) price=165;

    break;
    }

    if(choice2==4)
    {
    printf("JOINT & MUSCLE PAIN RELIEF:\n[1] Alaxan FR\t\t. . . P08.75\n[2] Celecoxib\t\t. . . P23.50\n[3] Diclofenac\t\t. . . P16.00\n[4] Ibuprofen\t\t. . . P12.25\n[5] Medicol Forte\t. . . P13.45\n");
    printf("\nItem: ");
    scanf("%d",&choice3);
    printf("Item Quantity: ");
    scanf("%d",&quant);

    if(choice3==1) price=8.75;
    if(choice3==2) price=23.50;
    if(choice3==3) price=16.00;
    if(choice3==4) price=12.25;
    if(choice3==5) price=13.25;

    break;
    }

    if(choice2==5)
    {
    printf("FEVER & FLU:\n[1] Bioflu\t\t. . . P09.00\n[2] Biogesic\t\t. . . P04.75\n[3] Decolgen Forte\t. . . P07.50\n[4] Rexidol Forte\t. . . P05.50\n[5] Saridon\t\t. . . P07.25\n");
    printf("\nItem: ");
    scanf("%d",&choice3);
    printf("Item Quantity: ");
    scanf("%d",&quant);

    if(choice3==1) price=9;
    if(choice3==2) price=4.75;
    if(choice3==3) price=7.50;
    if(choice3==4) price=5.50;
    if(choice3==5) price=7.25;

    break;
    }

    if(choice2==6)
    {
    printf("WOUND CARE & ANTISEPTIC:\n[1] Betadine\t\t. . . P91.50\n[2] Dettol\t\t. . . P268.00\n[3] Palmolive\t\t. . . P95.53\n[4] Riodine\t\t. . . P37.00\n[5] Savlon\t\t. . . P26.24\n");
    printf("\nItem: ");
    scanf("%d",&choice3);
    printf("Item Quantity: ");
    scanf("%d",&quant);

    if(choice3==1) price=91.50;
    if(choice3==2) price=268;
    if(choice3==3) price=95.53;
    if(choice3==4) price=37;
    if(choice3==5) price=26.24;

    break;
    }


    case 2:
    printf("VITAMINS & SUPPLEMENTS:\n[1] Conzace\t\t. . . P13.50\n[2] Centrum Advance\t. . . P13.70\n[3] Enervon\t\t. . . P07.00\n[4] Kirkland\t\t. . . P02.00\n[5] Revicon\t\t. . . P05.50\n");
    printf("\nItem: ");
    scanf("%d",&choice3);
    printf("Item Quantity: ");
    scanf("%d",&quant);

    if(choice3==1) price=13.50;
    if(choice3==2) price=13.70;
    if(choice3==3) price=7;
    if(choice3==4) price=2;
    if(choice3==5) price=5.50;

    break;

    case 3:
    printf("MEDICAL SUPPLIES:\n[1] Blades & Surgical Scissors\t. . . P450.00\n[2] Lancet\t\t\t. . . P78.00\n[3] Mask & Gloves\t\t. . . P289.00\n[4] Specimen Container\t\t. . . P25.50\n[5] Syringe & Needle\t\t. . . P400.00\n");
    printf("\nItem: ");
    scanf("%d",&choice3);
    printf("Item Quantity: ");
    scanf("%d",&quant);

    if(choice3==1) price=450;
    if(choice3==2) price=78;
    if(choice3==3) price=289;
    if(choice3==4) price=25.50;
    if(choice3==5) price=400;

    break;

    case 4:
    printf("HEALTH MONITORING DEVICES:\n[1] Pulse Oximeter\t. . . P385.00\n[2] Sphygmomanometer\t. . . P1580.00\n[3] Stethoscope\t\t. . . P543.00\n[4] Thermometer\t\t. . . P295.00\n[5] Weighing Scale\t. . . P1999.00\n");
    printf("\nItem: ");
    scanf("%d",&choice3);
    printf("Item Quantity: ");
    scanf("%d",&quant);

    if(choice3==1) price=385;
    if(choice3==2) price=1580;
    if(choice3==3) price=543;
    if(choice3==4) price=295;
    if(choice3==5) price=1999;

    break;

    case 5:
    printf("PERSONAL & HOME HEALTHCARE:\n[1] Cotton Rolls\t\t. . . P26.00\n[2] Deodorant\t\t\t. . . P79.00\n[3] Disinfectant Spray\t\t. . . P150.00\n[4] Ethyl Alcohol\t\t. . . P112.00\n[5] Mouthwash\t\t\t. . . P260.00\n[6] Nebulizer\t\t\t. . . P369.00\n[7] Shampoo\t\t\t. . . P197.00\n[8] Soap\t\t\t. . . P115.00\n[9] Toothbrush\t\t\t. . . P35.00\n[10] Toothpaste\t\t\t. . . P109.00\n");
    printf("\nItem: ");
    scanf("%d",&choice3);
    printf("Item Quantity: ");
    scanf("%d",&quant);

    if(choice3==1) price=26;
    if(choice3==2) price=79;
    if(choice3==3) price=150;
    if(choice3==4) price=112;
    if(choice3==5) price=260;
    if(choice3==6) price=369;
    if(choice3==7) price=197;
    if(choice3==8) price=115;
    if(choice3==9) price=35;
    if(choice3==10) price=109;

    break;
    }


    amt=quant*price;
    tra+=amt;

    printf("\nAmount: %.2f\t\t",amt);
    printf("Total Running Amount: %.2f\n\n\n",tra);

    printf("Make Another Purchase? [Y/N]  ");
    scanf("%s",&answer);
    printf("\n\n");


}while(answer=='YES' || answer=='Yes' || answer=='Y' || answer=='yes' || answer=='y');


    if(answer=='NO' || answer=='No' || answer=='N' || answer=='no' || answer=='n')
    {
    printf("Total Amount to be Paid: %.2f\t\t",tra);

    printf("Payment: ");
    scanf("%f",&pay);
    while(tra>pay)
    {
    printf("\nInsufficient Funds!\t\t\t");
    printf("Payment: ");
    scanf("%f",&pay);
    }

    change=pay-tra;

    printf("\nYour Change is: %.2f",change);

    printf("\n\n\nThank you for your Patronage! Have a Wonderful Day!\n\n");
    }

    amtpd[ctr]=tra;
    ctr++;
    tra=0;

    printf("Next Costumer Please! Press [P] to Proceed. Press [C] to Close the Shop\n");
    scanf("%s",&answer2);
    printf("\n");

}while(answer2=='P' || answer2=='p');

if(answer2=='C' || answer2=='c')
    {
    printf("\n\n\tSUMMARY OF TRANSACTIONS\n\n");
    printf("Customer No.\t\tAmount Paid\n");

    for(int a=0; a<ctr; a++)
    {
    printf("%d\t\t\t   %.2f\n", a+1, amtpd[a]);
    totalSales+=amtpd[a];
    }

    printf("\nTotal Sales: %.2f\n\n",totalSales);
    printf("GOODBYE!\n\n",totalSales);
    }

return 0;
}







