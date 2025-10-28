int __fastcall iic_read_reg(int a1, int a2, int a3, int a4, int a5)
{
  int reg; // r4
  int v11; // r0
  _BYTE v12[4080]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_16D214) )
  {
    reg = -4;
    V_LOCK(*(_DWORD *)"failed to i2c lock");
    v11 = logfmt_raw((int)v12, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_iic.c",
      168,
      "iic_read_reg",
      12,
      162,
      100,
      v12);
  }
  else
  {
    reg = i2c_read_reg(a1, a2, a3, a4, a5);
    pthread_mutex_unlock(&stru_16D214);
  }
  return reg;
}
