int __fastcall valid_hex(const char *a1)
{
  _BYTE v4[16]; // [sp+1Ch] [bp-1010h] BYREF
  unsigned __int8 v5; // [sp+101Eh] [bp-Eh]
  unsigned __int8 v6; // [sp+101Fh] [bp-Dh]
  signed int i; // [sp+1020h] [bp-Ch]
  signed int v8; // [sp+1024h] [bp-8h]

  v6 = 0;
  if ( a1 )
  {
    v8 = strlen(a1);
    for ( i = 0; i < v8; ++i )
    {
      v5 = a1[i];
      if ( dword_35A9B0[v5] < 0 )
      {
        V_LOCK();
        logfmt_raw(v4, 0x1000u, 0, "Invalid charpassed to valid_hex");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/util.c",
          134,
          "valid_hex",
          9,
          227,
          20,
          v4);
        return v6;
      }
    }
    v6 = 1;
    return 1;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "Null string passed to valid_hex");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/util.c",
      134,
      "valid_hex",
      9,
      217,
      20,
      v4);
    return v6;
  }
}
