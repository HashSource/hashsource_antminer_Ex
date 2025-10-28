int sub_C1D38()
{
  _BYTE v2[8]; // [sp+14h] [bp-1008h] BYREF
  size_t nmemb; // [sp+1014h] [bp-8h]

  nmemb = dword_C27368;
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "chain_num %d", nmemb);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_alloc_chain",
    12,
    81,
    20,
    v2);
  dword_C27388 = (int)calloc(nmemb, 0x78u);
  if ( dword_C27388 )
    return 0;
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "malloc %d chain_t failed", nmemb);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_alloc_chain",
    12,
    86,
    100,
    v2);
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "Sweep error string = %s.", "M:1");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_alloc_chain",
    12,
    87,
    100,
    v2);
  return -1;
}
