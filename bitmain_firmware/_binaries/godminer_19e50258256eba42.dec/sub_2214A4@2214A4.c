int __fastcall sub_2214A4(_BYTE *a1, int a2)
{
  unsigned int v3; // r3
  char v7[12]; // [sp+18h] [bp-180Ch] BYREF
  _BYTE v8[12]; // [sp+818h] [bp-100Ch] BYREF
  unsigned int v9; // [sp+1818h] [bp-Ch] BYREF
  unsigned int v10; // [sp+181Ch] [bp-8h]

  v9 = 0;
  v10 = 0;
  do
  {
    if ( a2 == 4 )
    {
      fpga_read(48, &v9);
    }
    else if ( a2 )
    {
      if ( a2 == 1 )
      {
        fpga_read(1348, &v9);
      }
      else if ( a2 == 2 )
      {
        fpga_read(1352, &v9);
      }
      else
      {
        fpga_read(1336, &v9);
      }
    }
    else
    {
      fpga_read(1344, &v9);
    }
    snprintf(v7, 0x800u, "read status r = 0x%04x", v9);
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
      177,
      "wait4i2c_eeprom_e11",
      19,
      227,
      20,
      v8);
    if ( HIWORD(v9) == 1 )
    {
      *a1 = v9;
      return 1;
    }
    usleep(0x1388u);
    v3 = v10++;
  }
  while ( v3 <= 0xBB7 );
  return 0;
}
