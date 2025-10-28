void *machine_runtime_ctrl_ks5_2382()
{
  void *v0; // r0
  void *v1; // r4
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v6; // r1
  const char *v7; // r0
  _DWORD v8[30]; // [sp+0h] [bp-7Ch] BYREF

  memset(&v8[4], 0, 0x60u);
  v0 = calloc(1u, 0x78u);
  v1 = v0;
  if ( v0 )
  {
    LOWORD(v2) = 4188;
    LOWORD(v3) = 4664;
    HIWORD(v2) = (unsigned int)&loc_510D4 >> 16;
    LOWORD(v4) = 12412;
    HIWORD(v3) = (unsigned int)&loc_512B0 >> 16;
    HIWORD(v4) = (unsigned int)&loc_5314C >> 16;
    v8[0] = v2;
    v8[1] = v3;
    v8[2] = v4;
    LOWORD(v3) = 7916;
    LOWORD(v4) = 13504;
    HIWORD(v3) = (unsigned int)&loc_51FBC >> 16;
    HIWORD(v4) = (unsigned int)&loc_5363C >> 16;
    v8[3] = start_voltage_monitor_base;
    LOWORD(v2) = 12896;
    v8[6] = v3;
    HIWORD(v2) = (unsigned int)&loc_533DC >> 16;
    LOWORD(v3) = 4436;
    v8[7] = v4;
    LOWORD(v4) = 10224;
    HIWORD(v3) = (unsigned int)&loc_511CC >> 16;
    HIWORD(v4) = (unsigned int)&loc_528C0 >> 16;
    v8[8] = v2;
    v8[9] = v3;
    v8[10] = v4;
    LOWORD(v3) = 4960;
    LOWORD(v4) = 18780;
    HIWORD(v3) = (unsigned int)&loc_513D8 >> 16;
    HIWORD(v4) = (unsigned int)&off_54B18 >> 16;
    v8[11] = set_frequency_with_voltage_ks5;
    LOWORD(v2) = 18992;
    v8[12] = v3;
    HIWORD(v2) = (unsigned int)&loc_54BEC >> 16;
    LOWORD(v3) = 14892;
    v8[13] = v4;
    LOWORD(v4) = 10716;
    HIWORD(v3) = (unsigned int)&loc_53BC4 >> 16;
    HIWORD(v4) = (unsigned int)&loc_52AAC >> 16;
    v8[14] = v2;
    v8[15] = v3;
    v8[16] = v4;
    LOWORD(v4) = -17696;
    HIWORD(v4) = (unsigned int)"l_freq: %d  sweep_matrix:\n%s" >> 16;
    v8[21] = 3000000;
    v8[20] = "l";
    v8[25] = &loc_30D40;
    v8[29] = v4;
    v8[28] = 1065353216;
    v8[26] = 1143930880;
    v8[19] = 35;
    v8[22] = 20;
    v8[24] = 1500;
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
