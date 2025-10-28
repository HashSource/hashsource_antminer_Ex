int __fastcall set_bt8d_control(int a1)
{
  int *v2; // r12
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r12
  int v8; // r1
  _DWORD v9[512]; // [sp+10h] [bp-1804h] BYREF
  char v10[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited[0] )
    return fpga_write(60, a1);
  LOWORD(v2) = 17944;
  HIWORD(v2) = (unsigned int)" end==================" >> 16;
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
  LOWORD(v8) = 17424;
  HIWORD(v8) = (unsigned int)"_control" >> 16;
  return zlog(g_zc, v8, 177, "set_bt8d_control", 16, 387, 100, v10);
}
