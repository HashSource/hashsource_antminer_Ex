unsigned int *__fastcall sub_1C98A0(unsigned int *result)
{
  float v1; // s0
  _BYTE v2[40]; // [sp+34h] [bp-1028h] BYREF
  float v3; // [sp+1034h] [bp-28h]
  int v4; // [sp+1038h] [bp-24h]
  float v5; // [sp+103Ch] [bp-20h]
  float v6; // [sp+1040h] [bp-1Ch]
  int k; // [sp+1044h] [bp-18h]
  int j; // [sp+1048h] [bp-14h]
  int v9; // [sp+104Ch] [bp-10h]
  int i; // [sp+1050h] [bp-Ch]
  float v11; // [sp+1054h] [bp-8h]

  v6 = 0.0;
  v11 = 0.0;
  v9 = 32;
  j = 0;
  k = 0;
  *result = -1068236443;
  for ( i = 2; i > 0; --i )
  {
    for ( j = 0; j <= 7; ++j )
    {
      for ( k = j; k >= 0; --k )
      {
        v5 = (float)((float)((float)((float)((float)(j + 1) * v1) * (float)(k + 1)) * (float)i) / 25.0) * 100.0;
        if ( (int)v5 % 100 <= 50 )
          v9 = (int)v5 / 100;
        else
          v9 = (int)v5 / 100 + 1;
        v6 = (float)((float)v9 * 25.0) / (float)i;
        if ( v9 <= 250 && v9 > 15 && (i != 1 || v6 <= 3125.0) && v6 <= 3200.0 && v6 >= 2000.0 )
        {
          v4 = v6 > 2400.0;
          v11 = (float)((float)((float)((float)v9 * 25.0) / (float)i) / (float)(j + 1)) / (float)(k + 1);
          *result = (v4 << 28)
                  | (v9 << 16) & 0xFFF0000
                  | ((_WORD)i << 8) & 0x3F00
                  | (16 * (_BYTE)j) & 0x70
                  | k & 7
                  | 0xC0000000;
          v3 = fabsf(v11 - v1);
          if ( v3 < 3.0 )
          {
            V_LOCK();
            logfmt_raw(
              v2,
              0x1000u,
              0,
              "target_freq:%.2f actual_freq:%.2f,vco:%.2f fbdiv:%d refdiv:%d postdiv1:%d, postdiv2:%d",
              v1,
              v11,
              v6,
              v9,
              i,
              j,
              k);
            V_UNLOCK();
            return (unsigned int *)zlog(
                                     g_zc,
                                     "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tm"
                                     "p/release/build/godminer-origin_godminer-new/backend/chip_setting.c",
                                     150,
                                     "inferred_plldivider",
                                     19,
                                     636,
                                     20,
                                     v2);
          }
          v11 = 0.0;
        }
      }
    }
  }
  return result;
}
