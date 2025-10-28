int __fastcall iic_write(int a1, int a2, int a3)
{
  int v6; // r4
  int v8; // r0
  _BYTE v9[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_16C200) )
  {
    v6 = -4;
    V_LOCK(*(_DWORD *)"failed to i2c lock");
    v8 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_iic.c",
      168,
      "iic_write",
      9,
      139,
      100,
      v9);
  }
  else
  {
    v6 = i2c_write(a1, a2, a3);
    pthread_mutex_unlock(&stru_16C200);
  }
  return v6;
}
