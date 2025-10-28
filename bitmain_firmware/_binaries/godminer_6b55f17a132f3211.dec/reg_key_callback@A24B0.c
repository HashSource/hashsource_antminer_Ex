int __fastcall reg_key_callback(int a1)
{
  int v2; // r5
  _DWORD *v3; // r2
  int v4; // r3
  int v6; // r0
  int v8; // r0
  _BYTE v9[4096]; // [sp+810h] [bp-1000h] BYREF

  v2 = pthread_mutex_lock(&stru_177434);
  if ( v2 )
  {
    v2 = -1;
    V_LOCK(*(_DWORD *)"failed to api lock");
    v8 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7020/7020_ui.c",
      169,
      "reg_key_callback",
      16,
      418,
      100,
      v9);
  }
  else
  {
    v3 = &off_177450;
    v4 = 0;
    while ( *v3++ )
    {
      if ( ++v4 == 5 )
      {
        v2 = -2;
        V_LOCK(*(_DWORD *)" available");
        v6 = logfmt_raw((int)v9, 0x1000u);
        V_UNLOCK(v6);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/backend/device/hal/platform/7020/7020_ui.c",
          169,
          "reg_key_callback",
          16,
          434,
          100,
          v9);
        goto LABEL_7;
      }
    }
    dword_177430[v4 + 8] = a1;
LABEL_7:
    pthread_mutex_unlock(&stru_177434);
  }
  return v2;
}
