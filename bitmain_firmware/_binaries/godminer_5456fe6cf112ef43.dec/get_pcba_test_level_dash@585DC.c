int __fastcall get_pcba_test_level_dash(int a1, _DWORD *a2)
{
  int v2; // r5
  int v6; // r0
  int v7; // r0
  unsigned __int16 *v8; // r1
  int v9; // r2
  int v10; // r12
  int v11; // lr
  unsigned __int16 *i; // r3
  int v13; // r3
  int j; // r2
  int v15; // r3
  int v16; // r0
  int v17; // r0
  int v18; // [sp+48h] [bp-1068h] BYREF
  __int16 v19; // [sp+4Ch] [bp-1064h]
  _BYTE v20[32]; // [sp+50h] [bp-1060h] BYREF
  _BYTE v21[32]; // [sp+70h] [bp-1040h] BYREF
  _BYTE v22[32]; // [sp+90h] [bp-1020h] BYREF
  _BYTE v23[4096]; // [sp+B0h] [bp-1000h] BYREF

  v2 = *(_DWORD *)(a1 + 768);
  v19 = 0;
  v18 = 0;
  if ( v2 )
  {
LABEL_2:
    *a2 = v2;
    return 0;
  }
  v6 = dev_ctrl(a1);
  v7 = (*(int (__fastcall **)(_DWORD, int, int, int *))(v6 + 76))(*(_DWORD *)(a1 + 136), 52, 393216, &v18);
  if ( !v7 )
  {
    v8 = (unsigned __int16 *)&unk_137300;
    v9 = 700;
    v10 = (unsigned __int16)v18;
    v11 = HIWORD(v18);
    for ( i = (unsigned __int16 *)&unk_137300; ; v9 = i[2] )
    {
      if ( (unsigned __int16)v18 == v9
        && i[3] == HIWORD(v18)
        && *((unsigned __int8 *)i + 8) == (unsigned __int8)v19
        && *((unsigned __int8 *)i + 9) == HIBYTE(v19) )
      {
        v7 *= 5;
        v13 = *(_DWORD *)&aGlobalIdxInitD_1[2 * v7 + 160];
        *(_DWORD *)(a1 + 768) = v13;
        goto LABEL_13;
      }
      ++v7;
      i += 5;
      if ( v7 == 5 )
        break;
    }
    v13 = *(_DWORD *)(a1 + 768);
LABEL_13:
    if ( !v13 )
    {
      for ( j = 700; v10 != j || v8[3] != v11; j = v8[2] )
      {
        ++v13;
        v8 += 5;
        if ( v13 == 5 )
          goto LABEL_20;
      }
      v15 = *(_DWORD *)&aGlobalIdxInitD_1[10 * v13 + 160];
      *(_DWORD *)(a1 + 768) = v15;
      if ( v15 )
        goto LABEL_21;
LABEL_20:
      *(_DWORD *)(a1 + 768) = 5;
    }
LABEL_21:
    V_LOCK(v7);
    V_INT((int)v22, "chain");
    v16 = logfmt_raw((int)v23, 0x1000u);
    V_UNLOCK(v16);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dash/backend_dash.c",
      156,
      "get_pcba_test_level_dash",
      24,
      906,
      60,
      v23);
    v2 = *(_DWORD *)(a1 + 768);
    goto LABEL_2;
  }
  *a2 = -1;
  V_LOCK(v7);
  V_INT((int)v20, "chain");
  V_STR((int)v21, "error");
  v17 = logfmt_raw((int)v23, 0x1000u);
  V_UNLOCK(v17);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "get_pcba_test_level_dash",
    24,
    884,
    120,
    v23);
  return 6;
}
