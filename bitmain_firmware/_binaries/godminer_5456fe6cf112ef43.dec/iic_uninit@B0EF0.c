int __fastcall iic_uninit(int a1)
{
  int v3; // r0
  _BYTE v4[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_16C200) )
  {
    V_LOCK(*(_DWORD *)"failed to i2c lock");
    v3 = logfmt_raw((int)v4, 0x1000u);
    V_UNLOCK(v3);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/backend/device/hal/platform/zynqmp/zynqmp_iic.c",
             168,
             "iic_uninit",
             10,
             96,
             100,
             v4);
  }
  else
  {
    i2c_uninit(a1);
    return pthread_mutex_unlock(&stru_16C200);
  }
}
