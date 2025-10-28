int sub_B3474()
{
  int v0; // r5
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v5; // r0
  _DWORD v6[2]; // [sp+10h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  _BYTE v8[4096]; // [sp+818h] [bp-1000h] BYREF

  v6[1] = "sh";
  v6[0] = 0;
  pthread_mutex_lock(&power_mutex);
  v0 = iic_init((int)v6);
  pthread_mutex_unlock(&power_mutex);
  if ( v0 < 0 )
    return v0;
  dword_18D948 = v0;
  dword_18D94C = 1;
  memset(&unk_18D960, 0, 0xC0u);
  v1 = bitmain_power_version();
  v0 = v1;
  if ( v1 >= 0 )
  {
    dword_18D950 = v1;
    v2 = snprintf(s, 0x800u, "power open power_version = 0x%x", v1);
    V_LOCK(v2);
    v0 = 0;
    v3 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      176,
      "bitmain_power_open",
      18,
      644,
      40,
      v8);
    return v0;
  }
  strcpy(s, "power open power_version < 0 will close power");
  V_LOCK(*(_DWORD *)"l close power");
  v5 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
    176,
    "bitmain_power_open",
    18,
    639,
    40,
    v8);
  if ( dword_18D948 && dword_18D94C )
    return v0;
  sub_B30F8();
  return v0;
}
