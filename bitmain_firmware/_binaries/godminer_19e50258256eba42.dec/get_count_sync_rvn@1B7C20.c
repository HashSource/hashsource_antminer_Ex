int __fastcall get_count_sync_rvn(int a1, unsigned __int8 a2)
{
  _BYTE v5[16]; // [sp+1Ch] [bp-1010h] BYREF
  int v6; // [sp+101Ch] [bp-10h]
  int i; // [sp+1020h] [bp-Ch]
  void *ptr; // [sp+1024h] [bp-8h]

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s...", "get_count_sync_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "get_count_sync_rvn",
    18,
    273,
    20,
    v5);
  ptr = malloc(0x1800u);
  v6 = sub_1B51AC(a1, a2, 202, ptr);
  for ( i = 0; i < v6; ++i )
  {
    V_LOCK();
    logfmt_raw(
      v5,
      0x1000u,
      0,
      "chip %02x core %02x reg %02x cnt %08x",
      *((unsigned __int8 *)ptr + 12 * i + 4),
      *((unsigned __int8 *)ptr + 12 * i + 8),
      *((unsigned __int16 *)ptr + 6 * i + 3),
      *((_DWORD *)ptr + 3 * i));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      171,
      "get_count_sync_rvn",
      18,
      279,
      20,
      v5);
  }
  free(ptr);
  return 0;
}
