int __fastcall sub_8A7B4(int a1, char a2)
{
  int v3; // r5
  _DWORD *v4; // r11
  int v5; // r0
  _DWORD *v6; // r9
  _DWORD *v7; // r6
  int v8; // r0
  int v9; // r3
  int v10; // r0
  int v11; // r0
  int v12; // r4
  int v15; // [sp+48h] [bp-105Ch] BYREF
  int v16; // [sp+4Ch] [bp-1058h]
  _DWORD v17[2]; // [sp+50h] [bp-1054h] BYREF
  int v18; // [sp+58h] [bp-104Ch]
  int v19; // [sp+5Ch] [bp-1048h]
  _BYTE v20[32]; // [sp+60h] [bp-1044h] BYREF
  int v21; // [sp+80h] [bp-1024h] BYREF
  _BYTE v22[4100]; // [sp+A0h] [bp-1004h] BYREF

  v6 = *(_DWORD **)(a1 + 304);
  v3 = 0;
  v18 = 1835009;
  v17[1] = 0;
  v17[0] = 0;
  v19 = 0;
  v15 = 0;
  v4 = calloc(12 * (_DWORD)v6, 1u);
  v5 = (*(int (__fastcall **)(int, _DWORD *, _DWORD *, _DWORD *, int *))(a1 + 260))(a1, v17, v6, v4, &v15);
  LOWORD(v6) = (unsigned __int16)&g_zc;
  if ( v15 > 0 )
  {
    HIWORD(v6) = (unsigned int)&g_zc >> 16;
    v7 = v4;
    do
    {
      while ( 1 )
      {
        ++v3;
        if ( *((_WORD *)v7 + 3) == 28 )
          break;
        v7 += 3;
        if ( v15 <= v3 )
          goto LABEL_7;
      }
      V_LOCK(v5);
      v7 += 3;
      V_INT((int)v20, "chain");
      v8 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v8);
      v5 = zlog(
             *v6,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/backend/chip_setting.c",
             153,
             "ChipSetting_pll_sel_KDA_2110",
             28,
             254,
             20,
             v22);
    }
    while ( v15 > v3 );
  }
  else
  {
    HIWORD(v6) = (unsigned int)&g_zc >> 16;
  }
LABEL_7:
  v9 = *v4;
  HIBYTE(v16) = *v4;
  BYTE2(v16) = BYTE1(v9);
  BYTE1(v16) = BYTE2(v9);
  LOBYTE(v16) = HIBYTE(v9);
  free(v4);
  v18 = 1835009;
  v17[0] = v16 & 0xFFFFFFFB | (4 * a2) & 4;
  V_LOCK(v10);
  V_INT((int)&v21, "chain");
  v11 = logfmt_raw((int)v22, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    *v6,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_pll_sel_KDA_2110",
    28,
    266,
    40,
    v22);
  v12 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 240))(a1, v17);
  usleep(0x2710u);
  return v12;
}
