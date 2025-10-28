int __fastcall sub_68284(int a1, char a2)
{
  int v2; // r6
  int v4; // r5
  _DWORD *v5; // r8
  _DWORD *v6; // r9
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r0
  int v10; // r3
  int v11; // r0
  int v12; // r4
  int v15; // [sp+40h] [bp-105Ch] BYREF
  int v16; // [sp+44h] [bp-1058h]
  _DWORD v17[2]; // [sp+48h] [bp-1054h] BYREF
  int v18; // [sp+50h] [bp-104Ch]
  int v19; // [sp+54h] [bp-1048h]
  _BYTE v20[32]; // [sp+58h] [bp-1044h] BYREF
  int v21; // [sp+78h] [bp-1024h] BYREF
  _BYTE v22[4100]; // [sp+98h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 304);
  v4 = 0;
  v18 = 1835009;
  v17[1] = 0;
  v17[0] = 0;
  LOWORD(v5) = (unsigned __int16)&g_zc;
  v19 = 0;
  v15 = 0;
  v6 = calloc(12 * v2, 1u);
  v7 = (*(int (__fastcall **)(int, _DWORD *, int, _DWORD *, int *))(a1 + 260))(a1, v17, v2, v6, &v15);
  if ( v15 > 0 )
  {
    v8 = v6;
    HIWORD(v5) = (unsigned int)&g_zc >> 16;
    do
    {
      while ( 1 )
      {
        ++v4;
        if ( *((_WORD *)v8 + 3) == 28 )
          break;
        v8 += 3;
        if ( v15 <= v4 )
          goto LABEL_7;
      }
      V_LOCK(v7);
      v8 += 3;
      V_INT((int)v20, "chain");
      v9 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v9);
      v7 = zlog(
             *v5,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/backend/chip_setting.c",
             153,
             "ChipSetting_pll_sel_DASH_1766",
             29,
             254,
             20,
             v22);
    }
    while ( v15 > v4 );
  }
  else
  {
    HIWORD(v5) = (unsigned int)&g_zc >> 16;
  }
LABEL_7:
  v10 = *v6;
  HIBYTE(v16) = *v6;
  BYTE2(v16) = BYTE1(v10);
  BYTE1(v16) = BYTE2(v10);
  LOBYTE(v16) = HIBYTE(v10);
  free(v6);
  v18 = 1835009;
  v17[0] = v16 & 0xFFFFFFFB | (4 * a2) & 4;
  V_LOCK(1);
  V_INT((int)&v21, "chain");
  v11 = logfmt_raw((int)v22, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_pll_sel_DASH_1766",
    29,
    266,
    40,
    v22);
  v12 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 240))(a1, v17);
  usleep(0x2710u);
  return v12;
}
