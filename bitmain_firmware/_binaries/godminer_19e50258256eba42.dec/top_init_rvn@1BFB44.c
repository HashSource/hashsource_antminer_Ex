int __fastcall top_init_rvn(int a1)
{
  _BYTE v3[20]; // [sp+30h] [bp-1054h] BYREF
  _DWORD v4[7]; // [sp+1030h] [bp-54h] BYREF
  int v5; // [sp+104Ch] [bp-38h]
  _DWORD v6[7]; // [sp+1050h] [bp-34h] BYREF
  int v7; // [sp+106Ch] [bp-18h]
  int v8; // [sp+1074h] [bp-10h]

  V_LOCK();
  sub_1A9DE8((int)v4, *(int *)(a1 + 272));
  logfmt_raw(v3, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "%s start", "top_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "top_init_rvn",
    12,
    2283,
    60,
    v3);
  if ( !sub_1BCB00(a1) )
  {
    reset_chip_reg_rvn(a1);
    sleep(0xAu);
    v8 = *(_DWORD *)(a1 + 864);
    *(_DWORD *)(a1 + 468) = sub_1BC6AC(*(_DWORD *)(a1 + 528), 8u);
    (*(void (__fastcall **)(int, _DWORD, int))(a1 + 288))(a1, *(_DWORD *)(a1 + 528), 8);
    sub_1BCB00(a1);
    setup_clk_rvn(a1);
    set_baud_rvn(a1, &stru_1C200);
    set_misc_ctrl_rvn(a1);
    cache_and_dag_gen_rvn(a1);
    while ( 1 )
      ;
  }
  V_LOCK();
  sub_1A9DE8((int)v6, *(int *)(a1 + 272));
  logfmt_raw(
    v3,
    0x1000u,
    0,
    v7,
    v6[0],
    v6[1],
    v6[2],
    v6[3],
    v6[4],
    v6[5],
    v6[6],
    v7,
    "check asic num failed",
    "top_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "top_init_rvn",
    12,
    2287,
    100,
    v3);
  return 12;
}
