void __fastcall __noreturn dram_bist_check_and_repair_rvn(int a1, int a2, char a3)
{
  _BYTE v6[61888]; // [sp+20h] [bp-F1E4h] BYREF
  int v7; // [sp+F1E0h] [bp-24h]
  int v8; // [sp+F1E4h] [bp-20h]
  int v9; // [sp+F1E8h] [bp-1Ch]
  int v10; // [sp+F1ECh] [bp-18h]
  int v11; // [sp+F1F0h] [bp-14h]
  int v12; // [sp+F1F4h] [bp-10h]
  char v13; // [sp+F1FAh] [bp-Ah]
  char v14; // [sp+F1FBh] [bp-9h]
  void *dest; // [sp+F1FCh] [bp-8h]

  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "%s work_mode[%d], chip-%d...", "dram_bist_check_and_repair_rvn", a2, (unsigned __int8)a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "dram_bist_check_and_repair_rvn",
    30,
    2590,
    40,
    v6);
  dest = malloc(0xCu);
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v7 = 255;
  v8 = 0;
  v11 = 0;
  v9 = 14448;
  memset(&v6[4096], 0, 0xE1C0u);
  v10 = 52;
  while ( 1 )
  {
    do
    {
      sleep(0xAu);
      v11 = sub_1B44A8(a1, 0, a3, 97, dest);
    }
    while ( v11 );
    V_LOCK();
    logfmt_raw(
      v6,
      0x1000u,
      0,
      "%s work_mode[%d] chip-%d revice ltc status error!",
      "dram_bist_check_and_repair_rvn",
      a2,
      (unsigned __int8)a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      171,
      "dram_bist_check_and_repair_rvn",
      30,
      2646,
      40,
      v6);
  }
}
