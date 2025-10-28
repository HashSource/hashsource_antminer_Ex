void *machine_runtime_ctrl_rvn_2044()
{
  void *v0; // r0
  void *v1; // r4
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v6; // r1
  const char *v7; // r0
  _DWORD v8[30]; // [sp+0h] [bp-78h] BYREF

  memset(&v8[4], 0, 0x60u);
  v0 = calloc(1u, 0x78u);
  v1 = v0;
  if ( v0 )
  {
    LOWORD(v2) = 22840;
    LOWORD(v3) = 22840;
    HIWORD(v2) = (unsigned int)&loc_55AF4 >> 16;
    LOWORD(v4) = 12412;
    HIWORD(v3) = (unsigned int)&loc_55AF4 >> 16;
    HIWORD(v4) = (unsigned int)&loc_5314C >> 16;
    v8[0] = v2;
    v8[1] = v3;
    v8[2] = v4;
    LOWORD(v3) = 13504;
    LOWORD(v4) = 12896;
    HIWORD(v3) = (unsigned int)&loc_5363C >> 16;
    HIWORD(v4) = (unsigned int)&loc_533DC >> 16;
    v8[3] = start_voltage_monitor_base;
    LOWORD(v2) = 19000;
    v8[7] = v3;
    HIWORD(v2) = (unsigned int)&loc_54BF4 >> 16;
    LOWORD(v3) = 10224;
    v8[8] = v4;
    LOWORD(v4) = 13536;
    HIWORD(v3) = (unsigned int)&loc_528C0 >> 16;
    HIWORD(v4) = (unsigned int)&loc_5365C >> 16;
    v8[9] = v2;
    v8[10] = v3;
    v8[11] = v4;
    LOWORD(v3) = 18780;
    LOWORD(v4) = 18992;
    HIWORD(v3) = (unsigned int)&off_54B18 >> 16;
    HIWORD(v4) = (unsigned int)&loc_54BEC >> 16;
    v8[12] = start_mining_base;
    LOWORD(v2) = 14892;
    v8[13] = v3;
    HIWORD(v2) = (unsigned int)&loc_53BC4 >> 16;
    LOWORD(v3) = 10716;
    v8[14] = v4;
    LOWORD(v4) = -17684;
    HIWORD(v3) = (unsigned int)&loc_52AAC >> 16;
    HIWORD(v4) = (unsigned int)"sweep_matrix:\n%s" >> 16;
    v8[15] = v2;
    v8[16] = v3;
    v8[29] = v4;
    v8[19] = 35;
    v8[26] = 1145569280;
    v8[28] = 1065353216;
    v8[20] = 19200;
    v8[21] = 19200;
    v8[22] = 20;
    v8[24] = 1480;
    memcpy(v0, v8, 0x78u);
  }
  else
  {
    LOWORD(v6) = -18344;
    LOWORD(v7) = 28808;
    HIWORD(v6) = (unsigned int)".2f bias freq %.2f cur freq %.2f" >> 16;
    HIWORD(v7) = (unsigned int)"ailed err %zd %d" >> 16;
    printf(v7, v6);
  }
  return v1;
}
