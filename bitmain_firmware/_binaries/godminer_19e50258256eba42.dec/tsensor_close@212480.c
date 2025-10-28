int __fastcall tsensor_close(unsigned int a1)
{
  int v1; // r3
  char v4[8]; // [sp+1Ch] [bp-1808h] BYREF
  _BYTE v5[8]; // [sp+81Ch] [bp-1008h] BYREF
  unsigned __int8 i; // [sp+181Fh] [bp-5h]

  if ( a1 <= 0xF )
  {
    for ( i = 0; i < (unsigned int)byte_C26090[68 * a1]; ++i )
    {
      if ( *(_DWORD *)&byte_C26090[68 * a1 + 8 + 8 * i] )
        iic_uninit(*(_DWORD *)&byte_C26090[68 * a1 + 8 + 8 * i]);
    }
    memset(&byte_C26090[68 * a1], 0, 0x44u);
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
      "tsensor_close",
      13,
      91,
      100,
      v5);
    return -2147482111;
  }
  return v1;
}
