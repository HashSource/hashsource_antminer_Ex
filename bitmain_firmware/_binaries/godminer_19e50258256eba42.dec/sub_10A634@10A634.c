__int64 __fastcall sub_10A634(int a1)
{
  int v1; // r5
  double v2; // r0
  int v3; // r0
  _BYTE v6[60]; // [sp+38h] [bp-127Ch] BYREF
  _BYTE v7[8]; // [sp+1038h] [bp-27Ch] BYREF
  char src[64]; // [sp+1040h] [bp-274h] BYREF
  char s[512]; // [sp+1080h] [bp-234h] BYREF
  _DWORD v10[7]; // [sp+1280h] [bp-34h] BYREF
  int v11; // [sp+129Ch] [bp-18h]
  int i; // [sp+12A0h] [bp-14h]
  unsigned __int8 v13; // [sp+12A7h] [bp-Dh]

  memset(s, 0, sizeof(s));
  memset(src, 0, sizeof(src));
  v13 = 6 * *(_DWORD *)(a1 + 272);
  if ( api_get_eeprom_fmt_version(*(_DWORD *)(a1 + 272)) == 4
    && !api_get_eeprom_sweep_result(*(_DWORD *)(a1 + 264), v7, 6u) )
  {
    for ( i = 0; i <= 5; ++i )
    {
      sweep_freq_0[v13 + i] = v7[i];
      sprintf(src, "%u ", sweep_freq_0[i]);
      strcat(s, src);
    }
  }
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "sweep_freq_0: %s", s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "sweep_eeprom_read_etc_2282",
    26,
    439,
    40,
    v6);
  printf("sweep_freq_0: %s\n", s);
  memset(s, 0, sizeof(s));
  memset(src, 0, sizeof(src));
  V_LOCK();
  sub_FBD60((int)v10, *(int *)(a1 + 272));
  v1 = *(_DWORD *)(a1 + 272);
  LODWORD(v2) = a1;
  v3 = sub_109638(v2);
  logfmt_raw(
    v6,
    0x1000u,
    0,
    v11,
    v10[0],
    v10[1],
    v10[2],
    v10[3],
    v10[4],
    v10[5],
    v10[6],
    v11,
    "[%s] hashrate for chain-%d: %dM",
    "sweep_eeprom_read_etc_2282",
    v1,
    v3);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
           171,
           "sweep_eeprom_read_etc_2282",
           26,
           445,
           100,
           v6);
}
