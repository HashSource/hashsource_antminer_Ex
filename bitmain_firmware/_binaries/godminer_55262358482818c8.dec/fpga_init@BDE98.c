int fpga_init()
{
  int v1; // r0
  int *v2; // lr
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // lr
  int v8; // r1
  const char *v9; // r2
  int v10; // r1
  _DWORD s[4]; // [sp+10h] [bp-1800h] BYREF
  __int16 v12; // [sp+20h] [bp-17F0h]
  char v13; // [sp+22h] [bp-17EEh]
  char v14[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_1B327C )
    return 0;
  LOWORD(v1) = 18484;
  HIWORD(v1) = (unsigned int)"atform/7020/7020_fpga.c" >> 16;
  dword_1B3280 = open64(v1);
  if ( dword_1B3280 < 0 )
  {
    LOWORD(v9) = 18496;
    HIWORD(v9) = (unsigned int)"7020_fpga.c" >> 16;
    snprintf((char *)s, 0x800u, v9, dword_1B3280);
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v10) = 18308;
    HIWORD(v10) = (unsigned int)"fpga_addr_hal failed!" >> 16;
    zlog(g_zc, v10, 175, "fpga_init", 9, 40, 100, v14);
    return -1;
  }
  else
  {
    LOWORD(v2) = 18528;
    HIWORD(v2) = (unsigned int)" open failed. fd = %d" >> 16;
    v3 = *v2;
    v4 = v2[1];
    v5 = v2[2];
    v6 = v2[3];
    v7 = v2[4];
    s[0] = v3;
    s[1] = v4;
    s[2] = v5;
    s[3] = v6;
    v12 = v7;
    v13 = BYTE2(v7);
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v8) = 18308;
    HIWORD(v8) = (unsigned int)"fpga_addr_hal failed!" >> 16;
    zlog(g_zc, v8, 175, "fpga_init", 9, 44, 20, v14);
    dword_1B327C = 1;
    return 0;
  }
}
