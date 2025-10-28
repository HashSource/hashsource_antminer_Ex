int __fastcall get_count_sync_eth_2282(int a1, unsigned __int8 a2)
{
  _BYTE v5[16]; // [sp+1Ch] [bp-1010h] BYREF
  int v6; // [sp+101Ch] [bp-10h]
  void *ptr; // [sp+1020h] [bp-Ch]
  int i; // [sp+1024h] [bp-8h]

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s...", "get_count_sync_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "get_count_sync_eth_2282",
    23,
    644,
    20,
    v5);
  ptr = malloc(0x1440u);
  v6 = sub_1075C0(a1, a2, 202, ptr);
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
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "get_count_sync_eth_2282",
      23,
      650,
      20,
      v5);
  }
  if ( ptr )
    free(ptr);
  return 0;
}
