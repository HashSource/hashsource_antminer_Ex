__int64 __fastcall sub_1EDB34(int a1, unsigned __int8 a2)
{
  _BYTE v5[48]; // [sp+1Ch] [bp-1130h] BYREF
  _BYTE v6[300]; // [sp+101Ch] [bp-130h] BYREF

  bin2hex((int)v6, a1 + 40, 0x8Cu);
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "dump_work_zec, job id %s, work count %d, work %s", a1 + 8, a2, v6);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
           171,
           "dump_work_zec",
           13,
           229,
           40,
           v5);
}
