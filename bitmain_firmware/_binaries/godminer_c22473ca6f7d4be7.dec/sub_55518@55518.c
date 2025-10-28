int __fastcall sub_55518(int a1, unsigned int a2)
{
  int v4; // r2
  int v6; // r7
  unsigned int v7; // r0
  float v8; // s14
  _DWORD v9[7]; // [sp+30h] [bp-1044h] BYREF
  int v10; // [sp+4Ch] [bp-1028h]
  _DWORD v11[7]; // [sp+50h] [bp-1024h] BYREF
  int v12; // [sp+6Ch] [bp-1008h]
  char v13[4100]; // [sp+70h] [bp-1004h] BYREF

  if ( a2 == 700 )
  {
    v6 = 820;
LABEL_6:
    v7 = *(_DWORD *)(a1 + 772) / a2;
    v8 = *(float *)(a1 + 760);
    *(_DWORD *)(a1 + 764) = v6;
    *(float *)(a1 + 760) = (float)(int)a2;
    *(_DWORD *)(a1 + 772) = (int)v8 * v7;
    V_LOCK();
    V_INT((int)v11, "chain", *(int *)(a1 + 140));
    logfmt_raw(
      v13,
      0x1000u,
      0,
      v12,
      v11[0],
      v11[1],
      v11[2],
      v11[3],
      v11[4],
      v11[5],
      v11[6],
      v12,
      "overclock freq %d voltage %d",
      (int)*(float *)(a1 + 760),
      *(_DWORD *)(a1 + 764));
    V_UNLOCK();
    v4 = 460;
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/backend/backend_ckb/backend_ckb.c",
             154,
             "overclock_update_ckb",
             20,
             v4,
             60,
             v13);
  }
  if ( a2 == 750 )
  {
    v6 = 830;
    goto LABEL_6;
  }
  V_LOCK();
  V_INT((int)v9, "chain", *(int *)(a1 + 140));
  logfmt_raw(
    v13,
    0x1000u,
    0,
    v10,
    v9[0],
    v9[1],
    v9[2],
    v9[3],
    v9[4],
    v9[5],
    v9[6],
    v10,
    "cannot overclock with freq %d",
    a2);
  V_UNLOCK();
  v4 = 462;
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/backend_ckb/backend_ckb.c",
           154,
           "overclock_update_ckb",
           20,
           v4,
           60,
           v13);
}
