int __fastcall pwm_uninit(int a1)
{
  int result; // r0
  int *v2; // r2
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r1
  _DWORD v7[2]; // [sp+10h] [bp-1808h] BYREF
  __int16 v8; // [sp+18h] [bp-1800h]
  char v9[4104]; // [sp+810h] [bp-1008h] BYREF

  if ( a1 > 2 )
  {
    LOWORD(v2) = 32188;
    HIWORD(v2) = (unsigned int)"failed!" >> 16;
    v3 = *v2;
    v4 = v2[1];
    v5 = v2[2];
    v7[0] = v3;
    v7[1] = v4;
    v8 = v5;
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v7);
    V_UNLOCK();
    LOWORD(v6) = 20236;
    HIWORD(v6) = (unsigned int)"uninit" >> 16;
    return zlog(g_zc, v6, 174, "pwm_uninit", 10, 41, 100, v9);
  }
  else
  {
    result = a1 - 1;
    dword_1B32D8[2 * result] = 0;
    LOBYTE(dword_1B32D8[2 * result + 1]) = 0;
  }
  return result;
}
