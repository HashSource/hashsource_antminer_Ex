int __fastcall lcd_uninit(int a1)
{
  int result; // r0
  int *v2; // r12
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r12
  int v8; // r1
  _DWORD v9[512]; // [sp+10h] [bp-1804h] BYREF
  char v10[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( !dword_1B404C )
    return 0;
  result = close(a1);
  if ( result )
  {
    LOWORD(v2) = 32420;
    HIWORD(v2) = (unsigned int)"!!" >> 16;
    v3 = *v2;
    v4 = v2[1];
    v5 = v2[2];
    v6 = v2[3];
    v7 = v2[4];
    v9[0] = v3;
    v9[1] = v4;
    v9[2] = v5;
    v9[3] = v6;
    v9[4] = v7;
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    LOWORD(v8) = 32204;
    HIWORD(v8) = (unsigned int)"lcd_clear" >> 16;
    zlog(g_zc, v8, 174, "lcd_uninit", 10, 147, 100, v10);
    result = -1;
  }
  dword_1B404C = 0;
  return result;
}
