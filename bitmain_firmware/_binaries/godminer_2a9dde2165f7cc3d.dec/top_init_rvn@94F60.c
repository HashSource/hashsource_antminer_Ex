int __fastcall top_init_rvn(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r2
  int v5; // r3
  int v6; // r1
  int result; // r0
  int v8; // r0
  _BYTE v9[32]; // [sp+28h] [bp-1040h] BYREF
  _BYTE v10[32]; // [sp+48h] [bp-1020h] BYREF
  _BYTE v11[4096]; // [sp+68h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)v9, "chain");
  v2 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    174,
    "top_init_rvn",
    12,
    2044,
    60,
    v11);
  v3 = sub_939D8((_DWORD *)a1);
  if ( v3 )
  {
    V_LOCK(v3);
    V_INT((int)v10, "chain");
    v8 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
      174,
      "top_init_rvn",
      12,
      2048,
      100,
      v11);
    return 12;
  }
  else
  {
    set_reset_rvn(a1);
    set_core_reset_rvn(a1);
    set_inactive_rvn(a1);
    set_ticketmask_rvn(a1, *(_DWORD *)(a1 + 400));
    v4 = 0;
    v5 = *(_DWORD *)(a1 + 456) - 1;
    do
      *(_BYTE *)++v5 = v4++;
    while ( v4 != 8 );
    v6 = *(_DWORD *)(a1 + 456);
    *(_DWORD *)(a1 + 396) = 1;
    (*(void (__fastcall **)(int, int))(a1 + 232))(a1, v6);
    sub_939D8((_DWORD *)a1);
    result = 0;
    if ( !*(_BYTE *)(a1 + 428) )
      *(_DWORD *)(a1 + 432) = (int)*(float *)(a1 + 924);
  }
  return result;
}
