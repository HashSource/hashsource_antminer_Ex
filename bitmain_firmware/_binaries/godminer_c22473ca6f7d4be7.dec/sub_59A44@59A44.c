int __fastcall sub_59A44(int a1)
{
  float v1; // s0
  signed int v2; // r1
  signed int v4; // r4
  char v5; // r3
  unsigned int v6; // r2
  float v7; // s17
  unsigned int v8; // r7
  int v9; // r0
  int v10; // r4
  int v12; // [sp+10h] [bp-1014h] BYREF
  int v13; // [sp+14h] [bp-1010h]
  int v14; // [sp+18h] [bp-100Ch]
  int v15; // [sp+1Ch] [bp-1008h]
  char v16[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = 7;
  v14 = 524289;
  v15 = 0;
  v13 = 0;
  while ( 2 )
  {
    v4 = (unsigned __int8)v2;
    do
    {
      v5 = v4 - 1;
      v6 = (unsigned int)(float)((float)v4 * (float)((float)v2 * v1));
      if ( v6 - 800 <= 0x640 )
      {
        v8 = v4 | 0xC0000100 | (16 * v2) | ((v6 / 0x19) << 16);
        v9 = sub_12CAD0(25 * (v6 / 0x19), v2);
        v7 = (float)sub_12CAD0(v9, v4);
        goto LABEL_8;
      }
      v4 = (unsigned __int8)(v4 - 1);
    }
    while ( v5 );
    if ( --v2 )
      continue;
    break;
  }
  v7 = 0.0;
  v8 = 0;
LABEL_8:
  V_LOCK();
  logfmt_raw(v16, 0x1000u, 0, "set freq: %.2f, expected freq: %.2f", v7, v1, v8, v13, v14, v15);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_freq_DASH",
    21,
    288,
    20,
    v16);
  v10 = (*(int (__fastcall **)(int, int *))(a1 + 156))(a1, &v12);
  usleep(0x2710u);
  return v10;
}
