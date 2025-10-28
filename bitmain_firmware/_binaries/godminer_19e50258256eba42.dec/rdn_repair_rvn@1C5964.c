int __fastcall rdn_repair_rvn(int a1, int a2)
{
  _BYTE v5[8]; // [sp+1Ch] [bp-1008h] BYREF
  int i; // [sp+101Ch] [bp-8h]

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s...", "rdn_repair_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "rdn_repair_rvn",
    14,
    3312,
    40,
    v5);
  sub_1B4A74(a1, 222, 270532609);
  usleep(0x2710u);
  for ( i = 0; i <= 51; ++i )
    sub_1B4A74(a1, 223, *(_DWORD *)(a2 + 4 * i));
  usleep(0x2710u);
  sub_1B4A74(a1, 222, 0);
  return 0;
}
