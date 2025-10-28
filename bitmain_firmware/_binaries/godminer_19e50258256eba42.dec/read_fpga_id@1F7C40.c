__int64 __fastcall read_fpga_id(char *a1)
{
  char v3[12]; // [sp+18h] [bp-180Ch] BYREF
  _BYTE v4[12]; // [sp+818h] [bp-100Ch] BYREF
  int v5; // [sp+1818h] [bp-Ch] BYREF
  int v6; // [sp+181Ch] [bp-8h] BYREF

  v6 = 0;
  v5 = 0;
  fpga_read(240, &v6);
  fpga_read(244, &v5);
  sprintf(a1, "%08x%08x", v5, v6);
  snprintf(v3, 0x800u, "%x %x", v6, v5);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/device/hal/platform/7007e11/7007e11_common.c",
           180,
           "read_fpga_id",
           12,
           380,
           100,
           v4);
}
