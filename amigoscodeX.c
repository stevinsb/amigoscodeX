#include<stdio.h>
float loc=23.794950;//Declaring a longitude value
float lat=86.381600;//Declaring a latitude value
//float oxy=0.48;
#include <stdlib.h>
#include <time.h>
//Package for time, ie random number generating function
float oxy()
{
    
  
        float num = (rand() %(100 - 10 + 1)) + 10;
        return num*0.01;
    
}



 typedef struct{
    float latitude;
    float longitude;
 }loc2;
typedef struct{
    char id[20];
    int password;
 }log2;



int main(){
    int flag=0;
    loc2 loc_mined[50];
    log2 login[50];
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
        if(loc_mined[i].latitude>loc-.0001&&loc_mined[i].latitude<loc+.0001 && loc_mined[i].longitude>lat-.0001&&loc_mined[i].longitude<lat+.0001 ){
            printf("Location previously mined, move to another location \n");
        }
        else
        printf("Proceed with mining in this location");
    }
}
if(oxy()>=0.4&&oxy()<=0.5)
{
 printf("engine running at optimum performance \n")
}
else if(oxy()>=0.1&&oxy()<=0.4)
{
    printf("engine running too rich,adjust air intake for providing more air\n")
}
else if(oxy()>=0.5&&oxy()<=1)
{
   printf("engine running too lean,adjust intake manifold for choking air flow\n") 
}
else{
    printf("sensor faulty");
}
// Mass Air Flow Sensor Condition checking
//Setting a value for maf reading
//assume it to be 2.5 g /sec
float g=2.5;
//condition for engine operation
if(g<1)
{
    printf("Air filter blocked\n"); 
}
else if(g>1&&g<3)
{
    printf("operation normal\n");
}
else 
printf("Sensor faulty");
/*Functions
API for Vex gps proximity sensing module 

Able to return value to the condition checking in code

Gps(const std::uint8_t port) explicit
Creates a GPS object for the given port.
Gps(const std::uint8_t port,
double xInitial,
double yInitial,
double headingInitial) explicit
Creates a GPS object for the given port.
Gps(const std::uint8_t port,
double xOffset,
double yOffset) explicit
Creates a GPS object for the given port.
Gps(const std::uint8_t port,
double xInitial,
double yInitial,
double headingInitial,
double xOffset,
double yOffset) explicit
Creates a GPS object for the given port.
std::int32_t initialize_full(double xInitial,
double yInitial,
double headingInitial,
double xOffset,
double yOffset) const virtual
Set the GPS's offset relative to the center of turning in meters, as well as its initial position.
std::int32_t set_offset(double xOffset,
double yOffset) const virtual
Set the GPS's offset relative to the center of turning in meters.
pros::gps_position_s_t get_offset() const virtual
Get the GPS's cartesian location relative to the center of turning/origin in meters.
std::int32_t set_position(double xInitial,
double yInitial,
double headingInitial) const virtual
Sets the robot's location relative to the center of the field in meters.
std::int32_t set_data_rate(std::uint32_t rate) const virtual
Set the GPS sensor's data rate in milliseconds, only applies to IMU on GPS.
double get_error() const virtual
Get the possible RMS (Root Mean Squared) error in meters for GPS position.
pros::gps_status_s_t get_status() const virtual
Gets the position and roll, yaw, and pitch of the GPS.
pros::gps_position_s_t get_position() const virtual
Gets the x and y position on the field of the GPS in meters.
double get_heading() const virtual
Get the heading in [0,360) degree values.
double get_heading_raw() const virtual
Get the heading in the max double value and min double value scale.
double get_rotation() const virtual
Gets the GPS sensor's elapsed rotation value.
std::int32_t set_rotation(double target) const virtual
Set the GPS sensor's rotation value to target value.
std::int32_t tare_rotation() const virtual
Tare the GPS sensor's rotation value.
pros::gps_gyro_s_t get_gyro_rate() const virtual
Get the GPS's raw gyroscope values.
pros::gps_accel_s_t get_accel() const virtual
Get the GPS's raw accelerometer values.
*/


//Based on value from input  do the following 

//function for proximity for vex gps
//Same for similar modules in same environment
//Range given in metres
 
//Let the output range be in r
const r=50;// in metres 
if(r>50)
{
    printf("Standby\n"); 
}
else if(r<50&&r>40)
{
    printf("Prepare to unload\n");
}
else if(r<30) {
printf("Prssurize hydraulic pumps and take slack");
}
//Max load in shovel
const max_tension=15;// value in metric tonnes
int x=16;// defining the inputted tension value, to be taken 
if(x<max_tension)
  printf("Inefficient operation");
else if(x==max_tension)
  printf("take care not to overload");
else if(x>max_tension)
  printf("!!!!Danger!!! LINE COULD BREAK")

// Taking input from ground proximity sensor
//This procedure is done to approximate the depth
// Similar principle of operation of GPSW systems in aircraft collision systems






}
