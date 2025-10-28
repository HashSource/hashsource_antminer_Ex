int lcd_clear_result()
{
  int v1; // r0
  _BYTE v2[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_16D540) )
  {
    V_LOCK(*(_DWORD *)"failed to api lock");
    v1 = logfmt_raw((int)v2, 0x1000u);
    V_UNLOCK(v1);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/backend/device/hal/platform/zynqmp/zynqmp_ui.c",
             167,
             "lcd_clear_result",
             16,
             521,
             100,
             v2);
  }
  else
  {
    if ( dword_164BA0 > 0 )
      lcd_clear();
    return pthread_mutex_unlock(&stru_16D540);
  }
}
