int __fastcall get_pcba_test_level_ckb(int a1, _DWORD *a2)
{
  int v2; // r4
  int v6; // r0
  unsigned __int16 *v7; // r1
  int v8; // r2
  int v9; // r0
  int v10; // r12
  unsigned __int16 *i; // r3
  int v12; // r3
  int j; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r0
  int v17; // [sp+48h] [bp-106Ch] BYREF
  __int16 v18; // [sp+4Ch] [bp-1068h]
  _BYTE v19[32]; // [sp+50h] [bp-1064h] BYREF
  _BYTE v20[32]; // [sp+70h] [bp-1044h] BYREF
  _BYTE v21[32]; // [sp+90h] [bp-1024h] BYREF
  _BYTE v22[4100]; // [sp+B0h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 768);
  v18 = 0;
  v17 = 0;
  if ( v2 )
  {
LABEL_2:
    *a2 = v2;
    return 0;
  }
  v6 = dev_ctrl(a1);
  if ( (*(int (__fastcall **)(_DWORD, int, int, int *))(v6 + 76))(*(_DWORD *)(a1 + 136), 52, 393216, &v17) )
  {
    v7 = (unsigned __int16 *)&unk_1367D4;
    v8 = 700;
    v9 = (unsigned __int16)v17;
    v10 = HIWORD(v17);
    for ( i = (unsigned __int16 *)&unk_1367D4; ; v8 = i[2] )
    {
      if ( (unsigned __int16)v17 == v8
        && i[3] == HIWORD(v17)
        && *((unsigned __int8 *)i + 8) == (unsigned __int8)v18
        && *((unsigned __int8 *)i + 9) == HIBYTE(v18) )
      {
        v12 = *(_DWORD *)&aChipsettingTic[10 * v2 + 220];
        *(_DWORD *)(a1 + 768) = v12;
        goto LABEL_13;
      }
      ++v2;
      i += 5;
      if ( v2 == 5 )
        break;
    }
    v12 = *(_DWORD *)(a1 + 768);
LABEL_13:
    if ( !v12 )
    {
      for ( j = 700; v9 != j || v7[3] != v10; j = v7[2] )
      {
        ++v12;
        v7 += 5;
        if ( v12 == 5 )
          goto LABEL_20;
      }
      v14 = *(_DWORD *)&aChipsettingTic[10 * v12 + 220];
      *(_DWORD *)(a1 + 768) = v14;
      if ( v14 )
        goto LABEL_21;
LABEL_20:
      *(_DWORD *)(a1 + 768) = 5;
    }
LABEL_21:
    V_LOCK(v9);
    V_INT((int)v21, "chain");
    v15 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ckb/backend_ckb.c",
      154,
      "get_pcba_test_level_ckb",
      23,
      520,
      60,
      v22);
    v2 = *(_DWORD *)(a1 + 768);
    goto LABEL_2;
  }
  *a2 = -1;
  V_LOCK(0);
  V_INT((int)v19, "chain");
  V_STR((int)v20, "error");
  v16 = logfmt_raw((int)v22, 0x1000u);
  V_UNLOCK(v16);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ckb/backend_ckb.c",
    154,
    "get_pcba_test_level_ckb",
    23,
    498,
    120,
    v22);
  return 6;
}
