int __fastcall iic_write_reg(int a1, int a2, int a3, int a4, int a5)
{
  int v9; // r4
  int v11; // r0
  _BYTE v12[4080]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_177108) )
  {
    v9 = -4;
    V_LOCK(*(_DWORD *)"failed to i2c lock");
    v11 = logfmt_raw((int)v12, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7020/7020_iic.c",
      170,
      "iic_write_reg",
      13,
      185,
      100,
      v12);
  }
  else
  {
    v9 = i2c_write_reg(a1, a2, a3, a4, a5);
    pthread_mutex_unlock(&stru_177108);
  }
  return v9;
}
