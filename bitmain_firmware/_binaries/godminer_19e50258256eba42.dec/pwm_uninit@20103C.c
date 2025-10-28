int __fastcall pwm_uninit(int result)
{
  char v1[2048]; // [sp+18h] [bp-1804h] BYREF
  int v2; // [sp+818h] [bp-1004h] BYREF

  if ( result - 1 <= 1 )
  {
    *((_DWORD *)&unk_C25B8C + 2 * result - 2) = 0;
    *((_BYTE *)&unk_C25B8C + 8 * result - 4) = 0;
  }
  else
  {
    strcpy(v1, "bad param");
    V_LOCK();
    logfmt_raw(&v2, 0x1000u, 0, v1);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_pwm.c",
             177,
             "pwm_uninit",
             10,
             41,
             100,
             &v2);
  }
  return result;
}
