int __fastcall sub_55D28(int a1, int a2)
{
  int v4; // r0
  int v5; // r2
  int v7; // r7
  int v8; // r0
  float v9; // s14
  int v10; // r0
  int v11; // r0
  _BYTE v12[32]; // [sp+30h] [bp-1044h] BYREF
  _BYTE v13[32]; // [sp+50h] [bp-1024h] BYREF
  _BYTE v14[4100]; // [sp+70h] [bp-1004h] BYREF

  if ( a2 == 700 )
  {
    v7 = 820;
LABEL_6:
    v8 = sub_12DE68(*(_DWORD *)(a1 + 780));
    v9 = *(float *)(a1 + 768);
    *(_DWORD *)(a1 + 772) = v7;
    *(float *)(a1 + 768) = (float)a2;
    v10 = (int)v9 * v8;
    *(_DWORD *)(a1 + 780) = v10;
    V_LOCK(v10);
    V_INT((int)v13, "chain");
    v11 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v11);
    v5 = 460;
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/backend/backend_ckb/backend_ckb.c",
             154,
             "overclock_update_ckb",
             20,
             v5,
             60,
             v14);
  }
  if ( a2 == 750 )
  {
    v7 = 830;
    goto LABEL_6;
  }
  V_LOCK(a1);
  V_INT((int)v12, "chain");
  v4 = logfmt_raw((int)v14, 0x1000u);
  V_UNLOCK(v4);
  v5 = 462;
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/backend_ckb/backend_ckb.c",
           154,
           "overclock_update_ckb",
           20,
           v5,
           60,
           v14);
}
