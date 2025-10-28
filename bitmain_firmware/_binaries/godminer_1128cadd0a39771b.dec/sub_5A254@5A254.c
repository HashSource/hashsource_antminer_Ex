int __fastcall sub_5A254(int a1)
{
  float v1; // s0
  int v2; // r1
  int v4; // r4
  char v5; // r3
  unsigned int v6; // r2
  int v7; // r0
  unsigned int v8; // r7
  int v9; // r0
  int v10; // r0
  int v11; // r4
  _DWORD v13[4]; // [sp+10h] [bp-1014h] BYREF
  _BYTE v14[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = 7;
  v13[2] = 524289;
  v13[3] = 0;
  v13[1] = 0;
  while ( 2 )
  {
    v4 = (unsigned __int8)v2;
    do
    {
      v5 = v4 - 1;
      v6 = (unsigned int)(float)((float)v4 * (float)((float)v2 * v1));
      v7 = v6 - 800;
      if ( v6 - 800 <= 0x640 )
      {
        v8 = v4 | 0xC0000100 | (16 * v2) | ((v6 / 0x19) << 16);
        v9 = sub_12E0D8(25 * (v6 / 0x19), v2);
        v7 = sub_12E0D8(v9, v4);
        goto LABEL_8;
      }
      v4 = (unsigned __int8)(v4 - 1);
    }
    while ( v5 );
    if ( --v2 )
      continue;
    break;
  }
  v8 = 0;
LABEL_8:
  v13[0] = v8;
  V_LOCK(v7);
  v10 = logfmt_raw((int)v14, 0x1000u);
  V_UNLOCK(v10);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_freq_DASH",
    21,
    311,
    20,
    v14);
  v11 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 164))(a1, v13);
  usleep(0x2710u);
  return v11;
}
