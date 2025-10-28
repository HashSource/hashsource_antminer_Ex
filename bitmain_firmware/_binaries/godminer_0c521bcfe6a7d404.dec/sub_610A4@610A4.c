unsigned int *__fastcall sub_610A4(unsigned int *result)
{
  float v1; // s0
  int v2; // r8
  float v3; // s11
  int v4; // r10
  int v5; // r9
  int v6; // lr
  int v7; // r5
  float v8; // s6
  float v9; // s15
  int v10; // r3
  int v11; // r4
  float v12; // s16
  int v14; // r0
  int v15; // [sp+2Ch] [bp-1008h]
  _BYTE v16[4100]; // [sp+30h] [bp-1004h] BYREF

  v2 = 2;
  v15 = 2;
  *result = -1068236443;
  while ( 1 )
  {
    v3 = (float)v2;
    v4 = 0;
    v5 = 0;
    while ( 2 )
    {
      v6 = v5 + 1;
      v7 = v5;
      v8 = (float)(v5 + 1);
      do
      {
        v9 = (float)(v7 + 1);
        v10 = (int)(float)((float)((float)((float)((float)(v8 * v1) * v9) * v3) / 25.0) * 100.0);
        v11 = v10 / 100;
        if ( v10 % 100 > 50 )
          ++v11;
        if ( (unsigned int)(v11 - 16) <= 0xEA )
        {
          v12 = (float)((float)v11 * 25.0) / v3;
          if ( (v2 != 1 || v12 <= 3125.0) && v12 <= 3200.0 && v12 >= 2000.0 )
          {
            *result = v7 & 7 | (v2 << 8) | 0xC0000000 | v4 | (v11 << 16) | ((v12 > 2400.0) << 28);
            if ( fabsf((float)((float)(v12 / v8) / v9) - v1) < 3.0 )
            {
              V_LOCK(result);
              v14 = logfmt_raw((int)v16, 0x1000u);
              V_UNLOCK(v14);
              return (unsigned int *)zlog(
                                       g_zc,
                                       "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildro"
                                       "ot/tmp/release/build/godminer-origin_godminer-new/backend/chip_setting.c",
                                       153,
                                       "inferred_plldivider",
                                       19,
                                       538,
                                       20,
                                       v16);
            }
          }
        }
      }
      while ( v7-- != 0 );
      v4 += 16;
      ++v5;
      if ( v6 != 8 )
        continue;
      break;
    }
    v2 = 1;
    if ( v15 == 1 )
      return result;
    v15 = 1;
  }
}
