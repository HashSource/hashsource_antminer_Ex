int __fastcall sub_221190(_BYTE *a1)
{
  unsigned int v2; // r3
  char v5[12]; // [sp+18h] [bp-180Ch] BYREF
  _BYTE v6[12]; // [sp+818h] [bp-100Ch] BYREF
  unsigned int v7; // [sp+1818h] [bp-Ch] BYREF
  unsigned int v8; // [sp+181Ch] [bp-8h]

  v7 = 0;
  v8 = 0;
  do
  {
    fpga_read(1336, &v7);
    snprintf(v5, 0x800u, "read status r = 0x%04x", v7);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, v5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
      177,
      "wait4i2c_data",
      13,
      179,
      20,
      v6);
    if ( v7 >> 31 == 1 )
    {
      *a1 = v7;
      return 1;
    }
    usleep(0x3E8u);
    v2 = v8++;
  }
  while ( v2 <= 0xBB7 );
  return 0;
}
