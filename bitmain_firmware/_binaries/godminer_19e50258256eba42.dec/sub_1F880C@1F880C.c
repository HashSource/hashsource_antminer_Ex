int __fastcall sub_1F880C(int a1)
{
  int result; // r0
  char v3[2048]; // [sp+1Ch] [bp-1808h] BYREF
  _BYTE v4[8]; // [sp+81Ch] [bp-1008h] BYREF
  int v5; // [sp+181Ch] [bp-8h]

  v5 = 0;
  fpga_write(192, a1);
  if ( a1 >= 0 )
    return sub_1F87E0();
  while ( 1 )
  {
    result = sub_1F87E0();
    if ( result >= 0 )
      break;
    usleep(0x3E8u);
    if ( (unsigned int)++v5 > 0xBB8 )
    {
      strcpy(v3, "Error: set_BC_write_command timeout!");
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmin"
               "er-origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_common.c",
               180,
               "set_BC_write_command",
               20,
               785,
               100,
               v4);
    }
  }
  return result;
}
