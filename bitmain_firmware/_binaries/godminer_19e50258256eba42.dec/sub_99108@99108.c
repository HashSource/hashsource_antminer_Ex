_DWORD *sub_99108()
{
  _DWORD *result; // r0
  _BYTE v1[16]; // [sp+14h] [bp-1010h] BYREF
  int v2; // [sp+1014h] [bp-10h] BYREF
  int i; // [sp+1018h] [bp-Ch]
  _DWORD *v4; // [sp+101Ch] [bp-8h]

  v2 = 0;
  result = get_all_created_runtime(&v2);
  v4 = result;
  for ( i = 0; i < v2; ++i )
  {
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, "chain[%d] %s", i, v4[i] + 356);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "show_backend_info",
      17,
      78,
      20,
      v1);
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, "chain[%d] %x", i, *(_DWORD *)(v4[i] + 364));
    V_UNLOCK();
    result = (_DWORD *)zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/bu"
                         "ild/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                         166,
                         "show_backend_info",
                         17,
                         79,
                         20,
                         v1);
  }
  return result;
}
