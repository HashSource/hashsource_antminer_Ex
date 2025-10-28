int sub_C1F20()
{
  int v0; // r4
  _BYTE v3[16]; // [sp+14h] [bp-1010h] BYREF
  size_t nmemb; // [sp+1014h] [bp-10h]

  nmemb = *(_DWORD *)(dword_C27388 + 92);
  v0 = dword_C27388;
  *(_DWORD *)(v0 + 84) = calloc(nmemb, 0x18u);
  if ( *(_DWORD *)(dword_C27388 + 84) )
    return 0;
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "calloc sensor failed!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_alloc_sensor",
    13,
    98,
    100,
    v3);
  return -1;
}
