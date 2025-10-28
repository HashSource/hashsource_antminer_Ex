unsigned int __fastcall BM_CRC16_WITH_KEY(unsigned __int8 *a1, int a2, unsigned int a3)
{
  int v3; // r12
  unsigned __int8 *v4; // r1
  int v5; // t1

  if ( a2 )
  {
    LOWORD(v3) = 4512;
    v4 = &a1[a2];
    do
    {
      v5 = *a1++;
      HIWORD(v3) = (unsigned int)"ildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/zynqmp/zynqmp_lcd.c" >> 16;
      a3 = (unsigned __int16)(*(_WORD *)(v3 + 2 * (v5 ^ (a3 >> 8))) ^ ((_WORD)a3 << 8));
    }
    while ( a1 != v4 );
  }
  return a3;
}
