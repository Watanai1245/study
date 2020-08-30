#include <stdio.h>
#include <stdlib.h>
int f[9]={16,23,26,30,33,37,40,44,59};
struct BTS {
        int x;
        int y;
    }station;
void BTSstation()
{
    printf("\tBTS Skytrain station\n");
    printf("Type -->[1] คูคต\n");
    printf("Type -->[2] แยก คปอ.\n");
    printf("Type -->[3] พิพิธภัณฑ์กองทัพอากาศ\n");
    printf("Type -->[4] โรงพยาบาลภูมิพลอดุลยเดช\n");
    printf("Type -->[5] สะพานใหม่\n");
    printf("Type -->[6] สายหยุด\n");
    printf("Type -->[7] พหลโยธิน 59\n");
    printf("Type -->[8] วัดพระศรีมหาธาตุ\n");
    printf("Type -->[9] กรมทหารราบที่ 11\n");
    printf("Type -->[10] บางบัว\n");
    printf("Type -->[11] กรมป่าไม้\n");
    printf("Type -->[12] มหาวิทยาลัยเกษตรศาสตร์\n");
    printf("Type -->[13] เสนานิคม\n");
    printf("Type -->[14] รัชโยธิน\n");
    printf("Type -->[15] พหลโยธิน 24\n");
    printf("Type -->[16] ห้าแยกลาดพร้าว\n");
    printf("Type -->[17] หมอชิต\n");
    printf("Type -->[18] สะพานควาย\n");
    printf("Type -->[19] เสนาร่วม\n");
    printf("Type -->[20] อารีย์\n");
    printf("Type -->[21] สนามเป้า\n");
    printf("Type -->[22] อนุสาวรีย์ชัยสมรภูมิ\n");
    printf("Type -->[23] พญาไท\n");
    printf("Type -->[24] ราชเทวี\n");
    printf("Type -->[25] สยาม\n");
    printf("Type -->[26] ชิดลม\n");
    printf("Type -->[27] เพลินจิต\n");
    printf("Type -->[28] นานา\n");
    printf("Type -->[29] อโศก\n");
    printf("Type -->[30] พร้อมพงษ์\n");
    printf("Type -->[31] ทองหล่อ\n");
    printf("Type -->[32] เอกมัย\n");
    printf("Type -->[33] พระโขนง\n");
    printf("Type -->[34] อ่อนนุช\n");
    printf("Type -->[35] บางจาก\n");
    printf("Type -->[36] ปุณณวิถี\n");
    printf("Type -->[37] อุดมสุข\n");
    printf("Type -->[38] บางนา\n");
    printf("Type -->[39] แบริ่ง\n");
    printf("Type -->[40] สำโรง\n");
    printf("Type -->[41] ปู่เจ้า\n");
    printf("Type -->[42] ช้างเอราวัณ\n");
    printf("Type -->[43] โรงเรียนนายเรือ\n");
    printf("Type -->[44] ปากน้ำ\n");
    printf("Type -->[45] ศรีนครินทร์\n");
    printf("Type -->[46] แพรกษา\n");
    printf("Type -->[47] สายลวด\n");
    printf("Type -->[48] เคหะฯ\n");
}
void face()
{
    if(labs(station.x-station.y)==1) { printf("Your fare is %d baht",f[0]); }
    else if(labs(station.x-station.y)==2) { printf("Your fare is %d baht",f[1]); }
    else if(labs(station.x-station.y)==3) { printf("Your fare is %d baht",f[2]); }
    else if(labs(station.x-station.y)==4) { printf("Your fare is %d baht",f[3]); }
    else if(labs(station.x-station.y)==5) { printf("Your fare is %d baht",f[4]); }
    else if(labs(station.x-station.y)==6) { printf("Your fare is %d baht",f[5]); }
    else if(labs(station.x-station.y)==7) { printf("Your fare is %d baht",f[6]); }
    else if(labs(station.x-station.y)==8 || labs(station.x-station.y)==9) { printf("Your fare is %d baht",f[7]); }
    else if(labs(station.x-station.y)>=10) { printf("Your fare is %d baht",f[8]); }
    printf("\n");
}
int main ()
{
    BTSstation();
    printf("Enter Departure station : ");
    scanf("%d",&station.x);
    printf("Enter Terminal : ");
    scanf("%d",&station.y);
    face ();
    return(0);
}
