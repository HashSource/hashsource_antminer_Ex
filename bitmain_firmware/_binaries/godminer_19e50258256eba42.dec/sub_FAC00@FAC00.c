__int64 __fastcall sub_FAC00(int a1, int a2, unsigned int a3)
{
  _BYTE v5[48]; // [sp+24h] [bp-1170h] BYREF
  _BYTE v6[364]; // [sp+1024h] [bp-170h] BYREF

  bin2hex((int)v6, a2, a3);
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s %s", a1, v6);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
           171,
           "dump_d",
           6,
           504,
           60,
           v5);
}
