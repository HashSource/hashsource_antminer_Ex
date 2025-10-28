__int64 __fastcall sub_15EB70(int a1, unsigned __int8 a2)
{
  int v2; // r0
  _BYTE v6[12]; // [sp+18h] [bp-200Ch] BYREF
  _BYTE v7[12]; // [sp+1018h] [bp-100Ch] BYREF
  int v8; // [sp+2018h] [bp-Ch]
  unsigned int i; // [sp+201Ch] [bp-8h]

  v8 = 0;
  for ( i = 0; i <= 0xFF; ++i )
  {
    v2 = snprintf(&v7[v8], 4096 - v8, "%02x ", *(unsigned __int8 *)(a1 + i + 40));
    v8 += v2;
  }
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "hns dump work jobid %s, work count %d", a1 + 8, a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_hns_2130/backend_hns_2130.c",
    171,
    "dump_work_hns",
    13,
    90,
    60,
    v6);
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "dump work: %s", v7);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
           171,
           "dump_work_hns",
           13,
           91,
           60,
           v6);
}
