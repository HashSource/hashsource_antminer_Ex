int __fastcall pwm_init(unsigned int a1, int a2)
{
  int result; // r0
  int *v4; // r2
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int *v10; // lr
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r3
  int v19; // r1
  int v20; // [sp+10h] [bp-1804h] BYREF
  int v21; // [sp+14h] [bp-1800h]
  int v22; // [sp+18h] [bp-17FCh]
  int v23; // [sp+1Ch] [bp-17F8h]
  int v24; // [sp+20h] [bp-17F4h]
  int v25; // [sp+24h] [bp-17F0h]
  int v26; // [sp+28h] [bp-17ECh]
  char v27; // [sp+2Ch] [bp-17E8h]
  char v28[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited[0] )
  {
    if ( a1 > 1 )
    {
      LOWORD(v4) = 32188;
      HIWORD(v4) = (unsigned int)"failed!" >> 16;
      v5 = *v4;
      v6 = v4[1];
      v7 = v4[2];
      v20 = v5;
      v21 = v6;
      LOWORD(v22) = v7;
      V_LOCK();
      logfmt_raw(v28, 0x1000u, 0, &v20);
      V_UNLOCK();
      LOWORD(v8) = 20196;
      LOWORD(v9) = 20236;
      HIWORD(v8) = (unsigned int)"" >> 16;
      HIWORD(v9) = (unsigned int)"uninit" >> 16;
      zlog(g_zc, v9, 174, v8, 8, 30, 100, v28);
      return -3;
    }
    else
    {
      result = a1 + 1;
      dword_1B32D8[2 * a1] = a2;
      LOBYTE(dword_1B32D8[2 * a1 + 1]) = 1;
    }
  }
  else
  {
    LOWORD(v10) = 18000;
    HIWORD(v10) = (unsigned int)"fan_get_realtime_speed" >> 16;
    v11 = *v10;
    v12 = v10[1];
    v13 = v10[2];
    v14 = v10[3];
    v10 += 4;
    v20 = v11;
    v21 = v12;
    v22 = v13;
    v23 = v14;
    v15 = v10[1];
    v16 = v10[2];
    v17 = v10[3];
    v24 = *v10;
    v25 = v15;
    v26 = v16;
    v27 = v17;
    V_LOCK();
    logfmt_raw(v28, 0x1000u, 0, &v20);
    V_UNLOCK();
    LOWORD(v18) = 20196;
    LOWORD(v19) = 20236;
    HIWORD(v18) = (unsigned int)"" >> 16;
    HIWORD(v19) = (unsigned int)"uninit" >> 16;
    zlog(g_zc, v19, 174, v18, 8, 25, 100, v28);
    return -2;
  }
  return result;
}
