int __fastcall get_work_mode_eth_2282(int a1)
{
  _BYTE v3[16]; // [sp+1Ch] [bp-1010h] BYREF
  int v4; // [sp+101Ch] [bp-10h]
  void *ptr; // [sp+1020h] [bp-Ch]
  int i; // [sp+1024h] [bp-8h]

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "get_work_mode_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "get_work_mode_eth_2282",
    22,
    659,
    20,
    v3);
  ptr = malloc(0x1440u);
  v4 = sub_1075C0(a1, 255, 28, ptr);
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
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "get_work_mode_eth_2282",
      22,
      665,
      20,
      v3);
  }
  if ( ptr )
    free(ptr);
  return 0;
}
