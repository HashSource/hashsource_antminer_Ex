__int64 __fastcall sub_181C80(int a1, int a2, unsigned __int8 a3)
{
  int v3; // r0
  int v4; // r0
  _BYTE v8[16]; // [sp+24h] [bp-2010h] BYREF
  _BYTE v9[16]; // [sp+1024h] [bp-1010h] BYREF
  unsigned int i; // [sp+2024h] [bp-10h]
  int v11; // [sp+2028h] [bp-Ch]
  int v12; // [sp+202Ch] [bp-8h]

  v12 = 0;
  v11 = a1;
  for ( i = 0; i < 0x124; ++i )
  {
    v3 = snprintf(&v9[v12], 4096 - v12, "%02x", *(unsigned __int8 *)(v11 + i));
    v12 += v3;
  }
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "dump packet %s", v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kda_2110/backend_kda_2110.c",
    171,
    "dump_work_kda",
    13,
    84,
    20,
    v8);
  v12 = 0;
  for ( i = 0; i <= 0x11D; ++i )
  {
    v4 = snprintf(&v9[v12], 4096 - v12, "%02x", *(unsigned __int8 *)(a2 + i + 72));
    v12 += v4;
  }
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "kda dump work jobid %s, work count %d", a2 + 8, a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kda_2110/backend_kda_2110.c",
    171,
    "dump_work_kda",
    13,
    90,
    20,
    v8);
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "dump work: %s", v9);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
           171,
           "dump_work_kda",
           13,
           91,
           20,
           v8);
}
