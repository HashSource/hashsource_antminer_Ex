int __fastcall tsensor_close(unsigned int a1)
{
  int v2; // r6
  int v3; // r5
  unsigned int v4; // r4
  int v5; // r0
  int v7; // r0
  int v8; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v10[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    v7 = snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    V_LOCK(v7);
    v8 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      171,
      "tsensor_close",
      13,
      91,
      100,
      v10);
    return -2147482111;
  }
  else
  {
    v2 = 16 * a1;
    v3 = 68 * a1;
    if ( byte_1775C8[68 * a1] )
    {
      v4 = 0;
      do
      {
        v5 = *(_DWORD *)&byte_1775C8[8 * v4 + 8 + v3];
        if ( v5 )
          iic_uninit(v5);
        v4 = (unsigned __int8)(v4 + 1);
      }
      while ( byte_1775C8[v3] > v4 );
    }
    return (int)memset(&byte_1775C8[4 * v2 + 4 * a1], 0, 0x44u);
  }
}
