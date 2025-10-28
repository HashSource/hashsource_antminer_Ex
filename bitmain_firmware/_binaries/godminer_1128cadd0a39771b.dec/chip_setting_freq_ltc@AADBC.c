int __fastcall chip_setting_freq_ltc(int a1, int a2, int a3)
{
  float v3; // s0
  int v4; // r3
  int v6; // r5
  int v7; // r12
  int v8; // r4
  char v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r7
  int v12; // r0
  int v13; // r0
  int v14; // r4
  _DWORD v16[2]; // [sp+10h] [bp-1014h] BYREF
  int v17; // [sp+18h] [bp-100Ch]
  int v18; // [sp+1Ch] [bp-1008h]
  _BYTE v19[4100]; // [sp+20h] [bp-1004h] BYREF

  v4 = 0;
  v17 = 0;
  v6 = a1;
  v16[1] = 0;
  v7 = 7;
  v18 = 0;
  v16[0] = 0;
  if ( !a2 )
    v4 = *(_DWORD *)(a1 + 304);
  LOBYTE(v17) = a2;
  if ( !a2 )
    LOBYTE(v4) = *(_BYTE *)(v4 + a3);
  HIWORD(v17) = 8;
  BYTE1(v17) = v4;
  while ( 2 )
  {
    v8 = (unsigned __int8)v7;
    do
    {
      v9 = v8 - 1;
      v10 = (unsigned int)(float)((float)v8 * (float)((float)v7 * v3));
      if ( v10 - 800 <= 0x960 )
      {
        v11 = v8 | 0xA0000100 | ((v10 / 0x19) << 16) | (16 * v7);
        v12 = sub_12DE60(25 * (v10 / 0x19));
        a1 = sub_12DE60(v12);
        goto LABEL_12;
      }
      v8 = (unsigned __int8)(v8 - 1);
    }
    while ( v9 );
    if ( --v7 )
      continue;
    break;
  }
  v11 = 0;
LABEL_12:
  v16[0] = v11;
  if ( a2 )
  {
    V_LOCK(a1);
    v13 = logfmt_raw((int)v19, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ltc/chip_setting_ltc.c",
      159,
      "chip_setting_freq_ltc",
      21,
      150,
      60,
      v19);
  }
  v14 = (*(int (__fastcall **)(int, _DWORD *))(v6 + 164))(v6, v16);
  usleep(0x2710u);
  return v14;
}
