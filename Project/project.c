#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("clear");
    printf("\n");
    printf("|=|============================|=|\n");
    printf("|=|                            |=|\n");
    printf("|=|  1.Coke           14 Baht  |=|\n");
    printf("|=|                            |=|\n");
    printf("|=|  2.Pepsi          14 Baht  |=|\n");
    printf("|=|                            |=|\n");
    printf("|=|  3.Fanta          13 Baht  |=|\n");
    printf("|=|                            |=|\n");
    printf("|=|  4.Lays            5 Baht  |=|\n");
    printf("|=|                            |=|\n");
    printf("|=|  5.Pocky           7 Baht  |=|\n");
    printf("|=|                            |=|\n");
    printf("|=|  6.Oreo            5 Baht  |=|\n");
    printf("|=|                            |=|\n");
    printf("|=|  7.C-Vitt         10 Baht  |=|\n");
    printf("|=|                            |=|\n");
    printf("|=|  8.Doritos        15 Baht  |=|\n");
    printf("|=|                            |=|\n");
    printf("|=|  9.M&M             3 Baht  |=|\n");
    printf("|=|                            |=|\n");
    printf("|=|============================|=|\n");
    printf("|=|  | 1 2 3 |        |-----|  |=|\n");
    printf("|=|  | 4 5 6 |        | VVV |  |=|\n");
    printf("|=|  | 7 8 9 |        |-----|  |=|\n");
    printf("|=|============================|=|\n");
    printf("\n");
  
    int item;
    int num, money;
    int price = 0;
    printf("( เลือก 0 เมื่อเลือกสิ่งที่ต้องการครบแล้วในหน้าเลือกรหัสสินค้า )\n");
    while(1){
        printf("\nเลือกรหัสสินค้า : ");
        scanf("%d",&item);
        if(item == 1){
            printf("คุณเลือก Coke จำนวน : ");
            scanf("%d",&num);
            price += (14*num);
            }
        else if(item == 2){
           printf("คุณเลือก Pepsi จำนวน : ");
            scanf("%d",&num);
            price += (14*num);
            }
        else if(item == 3){
            printf("คุณเลือก Fanta จำนวน : ");
            scanf("%d",&num);
            price += (13*num);
            }
        else if(item == 4){
            printf("คุณเลือก Lays จำนวน : ");
            scanf("%d",&num);
            price += (5*num);
            }
        else if(item == 5){
            printf("คุณเลือก Pocky จำนวน : ");
            scanf("%d",&num);
            price += (7*num);
            }
        else if(item == 6){
            printf("คุณเลือก Oreo จำนวน : ");
            scanf("%d",&num);
            price += (5*num);
            }
        else if(item == 7){
            printf("คุณเลือก C-Vitt จำนวน : ");
            scanf("%d",&num);
            price += (10*num);
            }
        else if(item == 8){
            printf("คุณเลือก Doritos จำนวน : ");
            scanf("%d",&num);
            price += (15*num);
            }
        else if(item == 9){
            printf("คุณเลือก M&M จำนวน : ");
            scanf("%d",&num);
            price += (3*num);
            }
        else if(item == 0){
            if(price == 0){
            printf("\nโปรดเลือกสินค้าก่อนที่จะชำระเงิน !\n");
            }
            else if(price != 0){
            printf("\n------------------------------");
            break;
            }
            }
        else{
          printf("\nโปรดใส่รหัสให้ถูกต้อง !\n");
        }
        }
  
  printf("\n\nรวมราคาสินค้า : %d บาท\n",price);

  int paid;
  int change;
  
  while(1){
  printf("\nใส่เงิน : ");
  scanf("%d",&paid);
    if(paid > price){
    change = paid - price;
    printf("\n------------------------------\n");
    printf("\nเงินทอนทั้งหมด : %d บาท\n",change);
    printf("\n------------------------------\n");
    
      if(change >= 1000){
          printf("\nแบงค์ 1000 บาท : %d ใบ", change/1000);
          change = change % 1000;
      }
        
      if(change >= 500){
          printf("\nแบงค์ 500 บาท : %d ใบ", change/500);
          change = change % 500;
      }
        
      if(change >= 100){
          printf("\nแบงค์ 100 บาท : %d ใบ", change/100);
          change = change % 100;
      }
        
      if(change >= 50){
          printf("\nแบงค์ 50 บาท : %d ใบ", change/50);
          change = change % 50;
      }
        
      if(change >= 20){
          printf("\nแบงค์ 20 บาท : %d ใบ", change/20);
          change = change % 20;
      }
        
      if(change >= 10){
          printf("\nเหรียญ 10 บาท : %d เหรียญ", change/10);
          change = change % 10;
      }
        
      if(change >= 5){
          printf("\nเหรียญ 5 บาท : %d เหรียญ", change/5);
          change = change % 5;
      }
        
      if(change >= 2){
          printf("\nเหรียญ 2 บาท : %d เหรียญ", change/2);
          change = change % 2;
      }
        
      if(change >= 1){
          printf("\nเหรียญ 1 บาท : %d เหรียญ", change);
      }
      printf("\n\n==============================");
      break;
    }
  else if(paid == price){
    printf("\n------------------------------\n\n");
    printf("เงินพอดีจำนวนสินค้า ขอบคุณที่อุดหนุน");
    printf("\n\n==============================");
    break;
  }
  else{
    printf("\nเงินไม่พอ โปรดใส่เงินใหม่ !\n");
  }
}
  return 0;
}