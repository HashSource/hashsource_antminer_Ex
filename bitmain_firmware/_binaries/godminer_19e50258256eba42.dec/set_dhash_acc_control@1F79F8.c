__int64 __fastcall set_dhash_acc_control(int a1)
{
  char v3[4]; // [sp+18h] [bp-1804h] BYREF
  int v4; // [sp+818h] [bp-1004h] BYREF

  fpga_write(256, a1);
  snprintf(v3, 0x800u, "set DHASH_ACC_CONTROL is 0x%x", a1);
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/device/hal/platform/7007e11/7007e11_common.c",
           180,
           "set_dhash_acc_control",
           21,
           344,
           40,
           &v4);
}
