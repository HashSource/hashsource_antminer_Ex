int __fastcall get_work_mode_rvn(int a1)
{
  _BYTE v3[16]; // [sp+1Ch] [bp-1010h] BYREF
  int v4; // [sp+101Ch] [bp-10h]
  int i; // [sp+1020h] [bp-Ch]
  void *ptr; // [sp+1024h] [bp-8h]

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "get_work_mode_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "get_work_mode_rvn",
    17,
    287,
    20,
    v3);
  ptr = malloc(0x1800u);
  v4 = sub_1B51AC(a1, 255, 28, ptr);
  for ( i = 0; i < v4; ++i )
  {
    V_LOCK();
    logfmt_raw(
      v3,
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
      "get_work_mode_rvn",
      17,
      293,
      20,
      v3);
  }
  free(ptr);
  return 0;
}
