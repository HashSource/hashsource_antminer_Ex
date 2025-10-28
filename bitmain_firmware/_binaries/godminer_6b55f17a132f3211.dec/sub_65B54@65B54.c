int __fastcall sub_65B54(int a1, int a2, char a3)
{
  int v4; // r6
  _WORD *v5; // r10
  int v6; // r0
  _WORD *v7; // r4
  int v8; // r0
  int v9; // r0
  int (__fastcall *v10)(int, _DWORD *); // r3
  int result; // r0
  int v12; // r0
  int v13; // [sp+40h] [bp-1094h]
  int v14; // [sp+44h] [bp-1090h]
  char v15; // [sp+48h] [bp-108Ch]
  char v16; // [sp+50h] [bp-1084h]
  int v17; // [sp+5Ch] [bp-1078h] BYREF
  _DWORD v18[2]; // [sp+60h] [bp-1074h] BYREF
  int v19; // [sp+68h] [bp-106Ch]
  int v20; // [sp+6Ch] [bp-1068h]
  int v21; // [sp+70h] [bp-1064h] BYREF
  char v22[32]; // [sp+90h] [bp-1044h] BYREF
  int v23; // [sp+B0h] [bp-1024h] BYREF
  _BYTE v24[4100]; // [sp+D0h] [bp-1004h] BYREF

  v13 = a3 & 1;
  v17 = 0;
  if ( a2 == -1 || *(_DWORD *)(a1 + 292) < a2 )
  {
    v15 = 0;
    v16 = 1;
  }
  else
  {
    v16 = 0;
    v15 = *(_BYTE *)(*(_DWORD *)(a1 + 448) + a2);
  }
  v4 = 0;
  v19 = 0x10000;
  v18[1] = 0;
  v18[0] = 0;
  BYTE1(v19) = v15;
  v20 = 0;
  v5 = calloc(0xCu, 1u);
  v6 = (*(int (__fastcall **)(int, _DWORD *, int, _WORD *, int *))(a1 + 256))(a1, v18, 1, v5, &v17);
  if ( v17 <= 0 )
  {
    v14 = v13;
  }
  else
  {
    v7 = v5;
    v14 = v13;
    do
    {
      if ( v7[3] == 1 )
      {
        V_LOCK(v6);
        V_INT((int)&v21, "chain");
        v9 = logfmt_raw((int)v24, 0x1000u);
        V_UNLOCK(v9);
        v6 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmine"
               "r-origin_godminer-new/backend/chip_setting.c",
               149,
               "ChipSetting_same_nonce_DCR_1727",
               31,
               301,
               20,
               v24);
        v14 = v13 | *(_DWORD *)v7;
      }
      else
      {
        V_LOCK(v6);
        V_INT((int)v22, "chain");
        v8 = logfmt_raw((int)v24, 0x1000u);
        V_UNLOCK(v8);
        v6 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmine"
               "r-origin_godminer-new/backend/chip_setting.c",
               149,
               "ChipSetting_same_nonce_DCR_1727",
               31,
               305,
               100,
               v24);
      }
      ++v4;
      v7 += 6;
    }
    while ( v17 > v4 );
  }
  free(v5);
  HIWORD(v19) = 1;
  LOBYTE(v20) = -1;
  LOBYTE(v19) = v16;
  v10 = *(int (__fastcall **)(int, _DWORD *))(a1 + 232);
  BYTE1(v19) = v15;
  v18[0] = v14;
  result = v10(a1, v18);
  if ( result < 0 )
  {
    V_LOCK(result);
    V_INT((int)&v23, "chain");
    v12 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/chip_setting.c",
      149,
      "ChipSetting_same_nonce_DCR_1727",
      31,
      318,
      100,
      v24);
    return -1;
  }
  return result;
}
