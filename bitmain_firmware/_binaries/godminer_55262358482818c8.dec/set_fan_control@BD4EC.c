int __fastcall set_fan_control(int a1)
{
  int *v2; // r12
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r12
  int v8; // r1
  int v9; // [sp+14h] [bp-1804h] BYREF
  _DWORD v10[510]; // [sp+18h] [bp-1800h] BYREF
  char v11[4096]; // [sp+818h] [bp-1000h] BYREF

  v9 = 0;
  if ( platform_inited[0] )
  {
    fpga_write(132, a1);
    return fpga_read(132, &v9);
  }
  else
  {
    LOWORD(v2) = 17944;
    HIWORD(v2) = (unsigned int)" end==================" >> 16;
    v3 = *v2;
    v4 = v2[1];
    v5 = v2[2];
    v6 = v2[3];
    v7 = v2[4];
    v10[0] = v3;
    v10[1] = v4;
    v10[2] = v5;
    v10[3] = v6;
    v10[4] = v7;
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    LOWORD(v8) = 17424;
    HIWORD(v8) = (unsigned int)"_control" >> 16;
    return zlog(g_zc, v8, 177, "set_fan_control", 15, 346, 100, v11);
  }
}
