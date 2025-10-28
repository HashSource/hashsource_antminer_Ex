int __fastcall POWER_CRC16(int a1, int a2)
{
  int v2; // r3
  int v3; // lr
  int v4; // r1
  int v5; // r2
  int v6; // r12
  int v7; // t1
  int v8; // r0

  if ( !a2 )
    return 0xFFFF;
  v2 = 255;
  LOWORD(v3) = 4512;
  v4 = a1 + (unsigned __int16)(a2 - 1);
  v5 = a1 - 1;
  v6 = 255;
  do
  {
    v7 = *(unsigned __int8 *)++v5;
    HIWORD(v3) = (unsigned int)"ildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/zynqmp/zynqmp_lcd.c" >> 16;
    v8 = v3 + (v2 ^ v7);
    v2 = *(unsigned __int8 *)(v8 + 512) ^ v6;
    v6 = *(unsigned __int8 *)(v8 + 768);
  }
  while ( v4 != v5 );
  return v2 | (v6 << 8);
}
