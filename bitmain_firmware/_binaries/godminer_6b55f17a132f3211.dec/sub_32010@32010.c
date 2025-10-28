int __fastcall sub_32010(const char *a1, int *a2)
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
               "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmine"
               "r-origin_godminer-new/util.c",
               133,
               "opt_set_longval",
               15,
               462,
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
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-"
             "origin_godminer-new/util.c",
             133,
             "opt_set_longval",
             15,
             464,
             100,
             v9);
  *a2 = v5;
  return result;
}
