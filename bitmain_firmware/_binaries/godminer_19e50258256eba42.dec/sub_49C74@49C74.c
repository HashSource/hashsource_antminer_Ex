int __fastcall sub_49C74(const char *a1, int *a2, int a3, int a4)
{
  int result; // r0
  _BYTE v9[12]; // [sp+20h] [bp-100Ch] BYREF
  char *endptr; // [sp+1020h] [bp-Ch] BYREF
  int v11; // [sp+1024h] [bp-8h]

  result = strtol(a1, &endptr, 0);
  v11 = result;
  if ( *endptr || !*a1 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "'%s' is not a number", a1);
    V_UNLOCK();
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmin"
               "er-origin_godminer-new/util.c",
               134,
               "opt_set_longval",
               15,
               351,
               100,
               v9);
  }
  if ( v11 == 0x7FFFFFFF || v11 == 0x80000000 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "'%s' is out of range", a1);
    V_UNLOCK();
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmin"
               "er-origin_godminer-new/util.c",
               134,
               "opt_set_longval",
               15,
               353,
               100,
               v9);
  }
  if ( v11 < a3 && v11 > a4 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "'%s' is out of range", a1);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/util.c",
             134,
             "opt_set_longval",
             15,
             357,
             100,
             v9);
  }
  else
  {
    *a2 = v11;
  }
  return result;
}
