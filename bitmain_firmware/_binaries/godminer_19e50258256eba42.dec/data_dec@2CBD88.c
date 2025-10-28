int __fastcall data_dec(unsigned int *a1, unsigned int a2, unsigned __int8 a3, unsigned __int8 a4)
{
  char v7; // [sp+18h] [bp-100Ch]
  int v8; // [sp+20h] [bp-1004h] BYREF

  v7 = a2;
  if ( a3 == 1 )
  {
    if ( (a2 & 7) != 0 )
    {
      V_LOCK();
      logfmt_raw(&v8, 0x1000u, 0, "decode xxtea input data length %% 8 must be 0, but now is %d", v7 & 7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/xxtea.c",
        150,
        "data_dec",
        8,
        112,
        100,
        &v8);
      return 0;
    }
    else
    {
      xxtea_decode(a1, a2 >> 2, (int)&xxtea_key + 16 * a4);
      return 1;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(&v8, 0x1000u, 0, "algorithm_type is %d, but not support it", a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/common/general/xxtea.c",
      150,
      "data_dec",
      8,
      119,
      100,
      &v8);
    return 0;
  }
}
