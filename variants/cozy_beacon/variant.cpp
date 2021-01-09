/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"

const uint32_t g_ADigitalPinMap[] = {
  2, // 0 ALS_ADC / AIN0
  3, // 1 Sound Detection / AIN1
  7, // 2 IN2
  8, // 3 INT1
  9, // 4 AD0
  10, // 5 FSYNC
  16, // 6 SOUND SWITCH
  17, // 7 LED
  18, // 8 SDA
  19, // 9 SCL
  20, // 10 INT_APS
  21, // 11 SW / RESET
  22, // 12 RX 
  23, // 13 TX
  24, // 14 MISO
  25, // 15 MOSI
  26, // 16 SCK
  27, // 17 SS
};
