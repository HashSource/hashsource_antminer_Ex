int __fastcall api_get_eeprom_sweep_freqs(int a1, void *dest)
{
  int v2; // r0
  int v4; // r1
  char *v5; // r3
  int v6; // r2
  float v7; // s13
  float v8; // s14
  int v9; // t1
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  char src[512]; // [sp+10h] [bp-1A00h] BYREF
  char s[2048]; // [sp+210h] [bp-1800h] BYREF
  _BYTE v17[4096]; // [sp+A10h] [bp-1000h] BYREF

  v2 = dword_16D578[a1 + 2];
  if ( dword_16D578[0] && *(_BYTE *)(dword_16D578[0] + 80) )
  {
    v4 = *(_DWORD *)(dword_16D578[0] + 4 * v2);
    v5 = src;
    v6 = v4 + 63;
    v7 = (float)*(unsigned __int16 *)(v4 + 60);
    v8 = (double)*(unsigned __int16 *)(v4 + 62) * 0.01;
    do
    {
      v9 = *(unsigned __int8 *)++v6;
      *(float *)v5 = v7 + (float)((float)v9 * v8);
      v5 += 4;
    }
    while ( s != v5 );
    if ( dest )
    {
      memcpy(dest, src, 0x200u);
      return 0;
    }
    else
    {
      v13 = snprintf(s, 0x800u, "%s: sweep_freqs is NULL\n", "api_get_eeprom_sweep_freqs");
      V_LOCK(v13);
      v14 = logfmt_raw((int)v17, 0x1000u);
      V_UNLOCK(v14);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "api_get_eeprom_sweep_freqs",
        26,
        1009,
        100,
        v17);
      return -2;
    }
  }
  else
  {
    v11 = snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.\n", "api_get_eeprom_sweep_freqs", v2);
    V_LOCK(v11);
    v12 = logfmt_raw((int)v17, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "api_get_eeprom_sweep_freqs",
      26,
      991,
      100,
      v17);
    return -1;
  }
}
