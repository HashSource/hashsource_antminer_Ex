int __fastcall sub_20514C(unsigned int a1, int a2)
{
  char v6[2048]; // [sp+18h] [bp-180Ch] BYREF
  _BYTE v7[12]; // [sp+818h] [bp-100Ch] BYREF
  int v8; // [sp+1818h] [bp-Ch]
  int v9; // [sp+181Ch] [bp-8h]

  v8 = -1;
  v9 = sub_204844(a1);
  if ( v9 )
  {
    snprintf(v6, 0x800u, "ui type = %d, port = %d, status = %d", a1, v9, a2);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_ui.c",
      176,
      "gpio_ctrl_ui",
      12,
      277,
      20,
      v7);
    if ( pthread_mutex_lock(&stru_C25E9C) )
    {
      strcpy(v6, "failed to api lock");
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_ui.c",
        176,
        "gpio_ctrl_ui",
        12,
        280,
        100,
        v7);
      return -1;
    }
    else
    {
      if ( a2 == 1 )
      {
        sub_204DE4(v9, (int *)dword_C25EB4);
        v8 = gpio_write(v9, 0);
      }
      else if ( a2 )
      {
        if ( a2 == 2 )
        {
          sub_204F18(v9, 200, (int *)dword_C25EB4);
        }
        else
        {
          strcpy(v6, "unsuported led status");
          V_LOCK();
          logfmt_raw(v7, 0x1000u, 0, v6);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_ui.c",
            176,
            "gpio_ctrl_ui",
            12,
            297,
            100,
            v7);
          v8 = -2;
        }
      }
      else
      {
        sub_204DE4(v9, (int *)dword_C25EB4);
        v8 = gpio_write(v9, 1);
      }
      pthread_mutex_unlock(&stru_C25E9C);
      return v8;
    }
  }
  else
  {
    strcpy(v6, "unsuported gpio port");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_ui.c",
      176,
      "gpio_ctrl_ui",
      12,
      273,
      100,
      v7);
    return -1;
  }
}
