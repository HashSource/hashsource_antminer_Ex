int __fastcall valid_ascii(const char *a1)
{
  _BYTE v4[20]; // [sp+18h] [bp-1014h] BYREF
  unsigned __int8 v5; // [sp+101Bh] [bp-11h]
  signed int v6; // [sp+101Ch] [bp-10h]
  signed int i; // [sp+1020h] [bp-Ch]
  unsigned __int8 v8; // [sp+1027h] [bp-5h]

  v5 = 0;
  if ( a1 )
  {
    v6 = strlen(a1);
    if ( v6 )
    {
      for ( i = 0; i < v6; ++i )
      {
        v8 = a1[i];
        if ( v8 <= 0x1Fu || v8 > 0x7Eu )
        {
          V_LOCK();
          logfmt_raw(v4, 0x1000u, 0, "Invalid char passed to valid_ascii");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/util.c",
            134,
            "valid_ascii",
            11,
            257,
            20,
            v4);
          return v5;
        }
      }
      v5 = 1;
      return 1;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, "Zero length string passed to valid_ascii");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/util.c",
        134,
        "valid_ascii",
        11,
        248,
        20,
        v4);
      return v5;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "Null string passed to valid_ascii");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/util.c",
      134,
      "valid_ascii",
      11,
      242,
      20,
      v4);
    return v5;
  }
}
