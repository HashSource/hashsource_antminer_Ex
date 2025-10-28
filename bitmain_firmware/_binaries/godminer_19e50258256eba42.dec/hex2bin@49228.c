bool __fastcall hex2bin(_BYTE *a1, char *a2, int a3)
{
  _BYTE v8[12]; // [sp+20h] [bp-100Ch] BYREF
  char *endptr; // [sp+1020h] [bp-Ch] BYREF
  char nptr[4]; // [sp+1024h] [bp-8h] BYREF

  nptr[2] = 0;
  while ( *a2 && a3 )
  {
    if ( !a2[1] )
    {
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, "hex2bin str truncated");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/util.c",
        134,
        "hex2bin",
        7,
        150,
        100,
        v8);
      return 0;
    }
    nptr[0] = *a2;
    nptr[1] = a2[1];
    *a1 = strtol(nptr, &endptr, 16);
    if ( *endptr )
    {
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, "hex2bin failed on '%s'", nptr);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/util.c",
        134,
        "hex2bin",
        7,
        157,
        100,
        v8);
      return 0;
    }
    ++a1;
    a2 += 2;
    --a3;
  }
  return a3 == 0;
}
