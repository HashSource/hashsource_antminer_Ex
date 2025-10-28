int __fastcall set_hardware_type(int a1)
{
  char v4[2048]; // [sp+1Ch] [bp-1808h] BYREF
  _BYTE v5[8]; // [sp+81Ch] [bp-1008h] BYREF
  int v6; // [sp+181Ch] [bp-8h] BYREF

  v6 = 0;
  if ( platform_inited )
  {
    fpga_read(0, &v6);
    if ( a1 )
    {
      if ( a1 == 1 )
        v6 |= 0x80000000;
    }
    else
    {
      v6 &= ~0x80000000;
    }
    fpga_write(0, v6);
    return 0;
  }
  else
  {
    strcpy(v4, "platform not inited");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_common.c",
      180,
      "set_hardware_type",
      17,
      258,
      100,
      v5);
    return -2;
  }
}
