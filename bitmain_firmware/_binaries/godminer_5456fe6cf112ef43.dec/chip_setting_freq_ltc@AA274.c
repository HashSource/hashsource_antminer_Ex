int __fastcall chip_setting_freq_ltc(int a1, int a2, int a3)
{
  float v3; // s0
  int v4; // r3
  bool v5; // zf
  int v7; // r1
  int v8; // r4
  char v9; // r3
  unsigned int v10; // r2
  int v11; // r0
  unsigned int v12; // r7
  int v13; // r0
  int v14; // r0
  int v15; // r4
  _DWORD v17[2]; // [sp+10h] [bp-1014h] BYREF
  int v18; // [sp+18h] [bp-100Ch]
  int v19; // [sp+1Ch] [bp-1008h]
  _BYTE v20[4100]; // [sp+20h] [bp-1004h] BYREF

  v4 = 0;
  v5 = a2 == 0;
  v18 = 0;
  v17[1] = 0;
  v19 = 0;
  v17[0] = 0;
  if ( !a2 )
    v4 = *(_DWORD *)(a1 + 296);
  LOBYTE(v18) = a2;
  v7 = 7;
  if ( v5 )
    LOBYTE(v4) = *(_BYTE *)(v4 + a3);
  HIWORD(v18) = 8;
  BYTE1(v18) = v4;
  while ( 2 )
  {
    v8 = (unsigned __int8)v7;
    do
    {
      v9 = v8 - 1;
      v10 = (unsigned int)(float)((float)v8 * (float)((float)v7 * v3));
      v11 = v10 - 800;
      if ( v10 - 800 <= 0x640 )
      {
        v12 = v8 | 0xA0000100 | (16 * v7) | ((v10 / 0x19) << 16);
        v13 = sub_12CC58(25 * (v10 / 0x19), v7);
        v11 = sub_12CC58(v13, v8);
        goto LABEL_12;
      }
      v8 = (unsigned __int8)(v8 - 1);
    }
    while ( v9 );
    if ( --v7 )
      continue;
    break;
  }
  v12 = 0;
LABEL_12:
  v17[0] = v12;
  V_LOCK(v11);
  v14 = logfmt_raw((int)v20, 0x1000u);
  V_UNLOCK(v14);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/chip_setting_ltc.c",
    159,
    "chip_setting_freq_ltc",
    21,
    135,
    60,
    v20);
  v15 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v17);
  usleep(0x2710u);
  return v15;
}
