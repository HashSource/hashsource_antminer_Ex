int __fastcall sub_213004(unsigned int a1, unsigned __int8 a2)
{
  char v4[8]; // [sp+1Ch] [bp-1808h] BYREF
  _BYTE v5[8]; // [sp+81Ch] [bp-1008h] BYREF
  unsigned __int8 i; // [sp+181Fh] [bp-5h]

  if ( a1 <= 0xF )
  {
    if ( byte_C26090[68 * a1] )
    {
      for ( i = 0; i < (unsigned int)byte_C26090[68 * a1]; ++i )
      {
        if ( a2 == byte_C26090[68 * a1 + 4 + 8 * i] )
          return i;
      }
      return -2147482112;
    }
    else
    {
      return -2147482112;
    }
  }
  else
  {
    snprintf(v4, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      172,
      "find_index",
      10,
      208,
      100,
      v5);
    return -2147482111;
  }
}
