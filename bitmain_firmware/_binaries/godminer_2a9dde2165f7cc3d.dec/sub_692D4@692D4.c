int __fastcall sub_692D4(int a1, int a2)
{
  int v4; // r0
  int v5; // r2
  int v7; // r8
  __int64 v8; // r0
  int v9; // r0
  _BYTE v10[32]; // [sp+30h] [bp-1040h] BYREF
  int v11; // [sp+50h] [bp-1020h] BYREF
  _BYTE v12[4096]; // [sp+70h] [bp-1000h] BYREF

  if ( a2 == 700 )
  {
    v7 = 820;
LABEL_6:
    v8 = sub_12E934(*(_DWORD *)(a1 + 944), *(_DWORD *)(a1 + 948), a2, a2 >> 31);
    *(_QWORD *)(a1 + 944) = v8 * (int)*(float *)(a1 + 924);
    *(float *)(a1 + 924) = (float)a2;
    *(_DWORD *)(a1 + 928) = v7;
    V_LOCK(v8);
    V_INT((int)&v11, "chain");
    v9 = logfmt_raw((int)v12, 0x1000u);
    V_UNLOCK(v9);
    v5 = 989;
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
             176,
             "overclock_update_dash",
             21,
             v5,
             40,
             v12);
  }
  if ( a2 == 750 )
  {
    v7 = 830;
    goto LABEL_6;
  }
  V_LOCK(a1);
  V_INT((int)v10, "chain");
  v4 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v4);
  v5 = 991;
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmine"
           "r-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
           176,
           "overclock_update_dash",
           21,
           v5,
           40,
           v12);
}
