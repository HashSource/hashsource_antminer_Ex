__int64 __fastcall sub_F8F90(int a1, unsigned __int8 a2)
{
  int v2; // r0
  _BYTE v6[12]; // [sp+18h] [bp-200Ch] BYREF
  _BYTE v7[12]; // [sp+1018h] [bp-100Ch] BYREF
  int v8; // [sp+2018h] [bp-Ch]
  unsigned int i; // [sp+201Ch] [bp-8h]

  v8 = 0;
  for ( i = 0; i <= 0xB3; ++i )
  {
    v2 = snprintf(&v7[v8], 4096 - v8, "%02x ", *(unsigned __int8 *)(a1 + i + 40));
    v8 += v2;
  }
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "dcr dump work jobid %s, work count %d", a1 + 8, a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
    171,
    "dump_work_dcr",
    13,
    86,
    20,
    v6);
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "dump work: %s", v7);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
           171,
           "dump_work_dcr",
           13,
           87,
           20,
           v6);
}
