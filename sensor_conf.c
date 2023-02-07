#ifndef __BNO055_H_
#define __BNO055_H_
#include <stdint.h>

enum AccelRange {
  AFS_2G,
  AFS_4G,
  AFS_8G = 0b10,
  AFS_16G
};

enum AccelBandwith {
  ABW_7Hz,
  ABW_15Hz,
  ABW_31Hz,
  ABW_62Hz,
  ABW_125Hz,
  ABW_250Hz,
  ABW_500Hz = 0b110,
  ABW_1000Hz
};

enum PwrMode {
  Pwr_Normal= 0,
  Pwr_Suspend,
  Pwr_LowPower1,
  Pwr_Standby,
  Pwr_LowPower2,
  Pwr_DeepSuspend
};

#include<stdio.h>
#include <inttypes.h>

const uint8_t AccelRange = AFS_8G;
const uint8_t AccelMode = Pwr_Normal;
const uint8_t AccelBandwith = ABW_500Hz;

void decimalToBinary(int num) {   
    if (num == 0) {
        printf("0");
        return;
    }
   
   int binaryNum[32]; 
   int i=0;
   
   for ( ;num > 0; ){
      binaryNum[i++] = num % 2;
      num /= 2;
   }
   
   for (int j = i-1; j >= 0; j--)
      printf("%d", binaryNum[j]);
}

void _config(void) {


    uint8_t accelConf = (AccelRange << 0) | (AccelMode << 5) | (AccelBandwith << 2);
    printf("Accel range (decimal): %d\n", accelConf);
    printf("Accel range (hexadecimal): %x\n", accelConf);
    int d = accelConf;
    printf("Accel range (binary): ");
    decimalToBinary(d);
}

int main()
{
    _config();
}

#endif 