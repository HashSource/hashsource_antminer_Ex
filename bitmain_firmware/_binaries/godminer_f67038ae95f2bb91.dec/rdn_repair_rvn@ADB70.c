int __fastcall rdn_repair_rvn(int a1, int a2)
{
  int v4; // r4
  int v5; // r5
  int v6; // t1
  char v8[4096]; // [sp+10h] [bp-1000h] BYREF

  v4 = a2 - 4;
  V_LOCK();
  v5 = a2 + 204;
  logfmt_raw(v8, 0x1000u, 0, "%s...", "rdn_repair_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    174,
    "rdn_repair_rvn",
    14,
    3312,
    40,
    v8);
  sub_A3F90(a1, 222, 270532609);
  usleep(0x2710u);
  do
  {
    v6 = *(_DWORD *)(v4 + 4);
    v4 += 4;
    sub_A3F90(a1, 223, v6);
  }
  while ( v4 != v5 );
  usleep(0x2710u);
  sub_A3F90(a1, 222, 0);
  return 0;
}
