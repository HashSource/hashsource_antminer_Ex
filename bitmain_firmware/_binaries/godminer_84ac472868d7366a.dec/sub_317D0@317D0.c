int __fastcall sub_317D0(const char *a1, int *a2)
{
  int result; // r0
  int v5; // r4
  int v6; // r0
  int v7; // r0
  char *endptr; // [sp+14h] [bp-1004h] BYREF
  _BYTE v9[4096]; // [sp+18h] [bp-1000h] BYREF

  result = strtol(a1, &endptr, 0);
  v5 = result;
  if ( *endptr || !*a1 )
  {
    V_LOCK(result);
    v6 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v6);
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/util.c",
               127,
               "opt_set_longval",
               15,
               453,
               100,
               v9);
    if ( (unsigned int)(v5 + 0x7FFFFFFF) <= 0xFFFFFFFD )
      goto LABEL_4;
  }
  else if ( (unsigned int)(result + 0x7FFFFFFF) <= 0xFFFFFFFD )
  {
LABEL_4:
    *a2 = v5;
    return result;
  }
  V_LOCK(result);
  v7 = logfmt_raw((int)v9, 0x1000u);
  V_UNLOCK(v7);
  result = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/util.c",
             127,
             "opt_set_longval",
             15,
             455,
             100,
             v9);
  *a2 = v5;
  return result;
}
