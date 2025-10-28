int lcd_clear_result()
{
  int v1; // r0
  _BYTE v2[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_18D844) )
  {
    V_LOCK(*(_DWORD *)"failed to api lock");
    v1 = logfmt_raw((int)v2, 0x1000u);
    V_UNLOCK(v1);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/backend/device/hal/platform/7020/7020_ui.c",
             173,
             "lcd_clear_result",
             16,
             521,
             100,
             v2);
  }
  else
  {
    if ( dword_171CEC > 0 )
      lcd_clear();
    return pthread_mutex_unlock(&stru_18D844);
  }
}
