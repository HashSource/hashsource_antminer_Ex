void *machine_runtime_ctrl_zec_1746()
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
    LOWORD(v2) = 23176;
    LOWORD(v3) = 25180;
    HIWORD(v2) = (unsigned int)&loc_55C44 >> 16;
    LOWORD(v4) = 12412;
    HIWORD(v3) = (unsigned int)&loc_5643C >> 16;
    HIWORD(v4) = (unsigned int)&loc_5314C >> 16;
    v8[0] = v2;
    v8[1] = v3;
    v8[2] = v4;
    LOWORD(v3) = 12368;
    LOWORD(v4) = 25020;
    HIWORD(v3) = (unsigned int)&loc_53120 >> 16;
    HIWORD(v4) = (unsigned int)&loc_5639C >> 16;
    v8[3] = start_voltage_monitor_base;
    LOWORD(v2) = 12896;
    v8[6] = v3;
    HIWORD(v2) = (unsigned int)&loc_533DC >> 16;
    LOWORD(v3) = 19000;
    v8[7] = v4;
    LOWORD(v4) = 10224;
    HIWORD(v3) = (unsigned int)&loc_54BF4 >> 16;
    HIWORD(v4) = (unsigned int)&loc_528C0 >> 16;
    v8[8] = v2;
    v8[9] = v3;
    v8[10] = v4;
    LOWORD(v3) = 17332;
    LOWORD(v4) = 18780;
    HIWORD(v3) = (unsigned int)&loc_5454C >> 16;
    HIWORD(v4) = (unsigned int)&off_54B18 >> 16;
    v8[11] = set_frequency_with_voltage_zec;
    LOWORD(v2) = 18992;
    v8[12] = v3;
    HIWORD(v2) = (unsigned int)&loc_54BEC >> 16;
    LOWORD(v3) = 14892;
    v8[13] = v4;
    LOWORD(v4) = 10716;
    HIWORD(v3) = (unsigned int)&loc_53BC4 >> 16;
    v8[14] = v2;
    v8[15] = v3;
    HIWORD(v4) = (unsigned int)&loc_52AAC >> 16;
    v8[16] = v4;
    LOWORD(v4) = -17720;
    HIWORD(v4) = (unsigned int)":\n%s" >> 16;
    v8[21] = 3000000;
    v8[20] = "l";
    v8[25] = &loc_30D40;
    v8[29] = v4;
    v8[28] = 1065353216;
    v8[26] = 1147207680;
    v8[19] = 255;
    v8[22] = 22;
    v8[24] = 1400;
    memcpy(v0, v8, 0x78u);
  }
  else
  {
    LOWORD(v6) = -18368;
    LOWORD(v7) = 28784;
    HIWORD(v6) = (unsigned int)"req %.2f" >> 16;
    HIWORD(v7) = (unsigned int)"tum_recv_line recv failed detailed error %d" >> 16;
    printf(v7, v6);
  }
  return v1;
}
