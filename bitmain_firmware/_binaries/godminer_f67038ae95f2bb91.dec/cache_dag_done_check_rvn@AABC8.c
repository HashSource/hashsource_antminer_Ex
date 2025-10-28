int __fastcall cache_dag_done_check_rvn(int a1, int a2, int a3)
{
  __int16 v3; // r5
  int v5; // r4
  void *src; // [sp+44h] [bp-1058h]
  void *dest; // [sp+54h] [bp-1048h]
  _DWORD v11[2]; // [sp+68h] [bp-1034h] BYREF
  int v12; // [sp+70h] [bp-102Ch]
  int v13; // [sp+74h] [bp-1028h]
  char v14[4100]; // [sp+98h] [bp-1004h] BYREF

  v3 = a2;
  V_LOCK();
  logfmt_raw(v14, 0x1000u, 0, "%s...", "cache_dag_done_check_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    174,
    "cache_dag_done_check_rvn",
    24,
    2656,
    40,
    v14);
  dest = malloc(0x1800u);
  do
  {
    sleep(0xAu);
    v5 = *(_DWORD *)(a1 + 424);
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "%s core_no %d", "ChipSetting_get_cache_done_status_rvn_RVN", v5 << 6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/chip_setting.c",
      153,
      "ChipSetting_get_cache_done_status_rvn_RVN",
      41,
      1847,
      40,
      v14);
    v11[0] = 0;
    v11[1] = 0;
    v12 = 0;
    v13 = 0;
    src = calloc(768 * v5, 1u);
    HIWORD(v12) = v3;
    (*(void (__fastcall **)(int, _DWORD *, int))(a1 + 300))(a1, v11, v5 << 6);
    if ( dest )
      memcpy(dest, src, 768 * v5);
    free(src);
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "%s resp_num: %d, work_mode: %d", "cache_dag_done_check_rvn", 0, a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      174,
      "cache_dag_done_check_rvn",
      24,
      2671,
      40,
      v14);
  }
  while ( a2 != 73 );
  return 0;
}
