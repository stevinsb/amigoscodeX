#include<stdio.h>
float loc=23.794950;//Declaring a longitude value
float lat=86.381600;//Declaring a latitude value
float oxy=0.48;
#include <stdlib.h>
#include <time.h>
//Package for time, ie random number generating function



 typedef struct{
    float latitude;
    float longitude;
 }loc;
typedef struct{
   char id[];
    int password;
 }log;



int main(){
    int flag=0;
    loc loc_mined[50];
    log login[50];
    loc_mined[0].latitude=23.794940;
    loc_mined[0].longitude=86.381640;
    loc_mined[1].latitude=23.79480;
    loc_mined[1].longitude=86.38170;
    loc_mined[2].latitude=23.79510;
    loc_mined[2].longitude=86.381690;
    login[0].id="bccl user1";
    login[0].password=100071;
   login[1].id="bccl user2";
    login[1].password=100073;
   login[2].id="bccl user3";
    login[2].password=100074;
    int i=0;
    for(i=0;i<3;i++){
        if( login[i].id==loginid && login[i].password==loginpassword ){
            printf("Login successful \n");
            flag++;
            break;
        }
        
    }
if(flag==0)
{
    printf("Login failed \n");
}
else{
    for(i=0;i<3;i++){
        if(loc_mined[i].latitude>loc-.0001||loc_mined[i].latitude<loc+.0001 && loc_mined[i].longitude>lat-.0001||loc_mined[i].longitude<lat+.0001 ){
            printf("Location previously mined, move to another location \n");
        }
        else
        printf("Proceed with mining in this location");
    }
}
}