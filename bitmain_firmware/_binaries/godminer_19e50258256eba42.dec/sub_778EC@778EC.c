__int64 __fastcall sub_778EC(int a1)
{
  int v1; // s0
  int v2; // s1
  int v3; // r4
  _BYTE v6[16]; // [sp+24h] [bp-1050h] BYREF
  _BYTE v7[72]; // [sp+1024h] [bp-50h] BYREF

  bin2hex((int)v7, a1, 0x20u);
  V_LOCK();
  v3 = target_to_diff_zec(a1);
  target_to_double_diff_zec(a1);
  logfmt_raw(v6, 0x1000u, 0, "dump target: %s, diff %d, double diff %lf", v7, v3, v1, v2, v1, v2);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/frontend/frontend_zec/frontend_zec.c",
           164,
           "dump_target_diff_zec",
           20,
           305,
           20,
           v6);
}
