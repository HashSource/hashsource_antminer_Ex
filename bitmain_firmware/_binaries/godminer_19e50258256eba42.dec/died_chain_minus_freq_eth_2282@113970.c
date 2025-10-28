int __fastcall died_chain_minus_freq_eth_2282(int a1, int a2, unsigned __int8 a3, unsigned __int16 a4)
{
  _BYTE v9[52]; // [sp+38h] [bp-10B4h] BYREF
  __int16 v10; // [sp+103Ah] [bp-B2h] BYREF
  _WORD s[18]; // [sp+103Ch] [bp-B0h] BYREF
  _DWORD v12[7]; // [sp+1060h] [bp-8Ch] BYREF
  int v13; // [sp+107Ch] [bp-70h]
  _DWORD v14[7]; // [sp+1080h] [bp-6Ch] BYREF
  int v15; // [sp+109Ch] [bp-50h]
  _DWORD v16[7]; // [sp+10A0h] [bp-4Ch] BYREF
  int v17; // [sp+10BCh] [bp-30h]
  int v18; // [sp+10C0h] [bp-2Ch]
  unsigned __int16 v19; // [sp+10C6h] [bp-26h]
  int j; // [sp+10C8h] [bp-24h]
  unsigned __int16 v21; // [sp+10CEh] [bp-1Eh]
  int i; // [sp+10D0h] [bp-1Ch]
  int k; // [sp+10D4h] [bp-18h]
  int m; // [sp+10D8h] [bp-14h]
  FILE *stream; // [sp+10DCh] [bp-10h]

  V_LOCK();
  sub_FBD60((int)v12, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v13,
    v12[0],
    v12[1],
    v12[2],
    v12[3],
    v12[4],
    v12[5],
    v12[6],
    v13,
    "%s...",
    "died_chain_minus_freq_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "died_chain_minus_freq_eth_2282",
    30,
    2082,
    60,
    v9);
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "ready to load died chain(%d)'s freqs", *(_DWORD *)(a1 + 272));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "died_chain_minus_freq_eth_2282",
    30,
    2084,
    60,
    v9);
  pthread_mutex_lock(&sweep_result_file_mutex);
  stream = 0;
  stream = fopen("/nvdata/sweep_result_v2.txt", "r");
  memset(s, 0, sizeof(s));
  if ( stream )
  {
    for ( i = 0; _isoc99_fscanf(stream, "%hu", &v10) == 1 && i <= 17; ++i )
      s[6 * (i / 6) + i % 6] = v10;
    fclose(stream);
    v19 = (unsigned int)((double)a4 / 12.5);
    v21 = 0;
    for ( j = 0; j < a3; ++j )
    {
      v18 = *(unsigned __int8 *)(a2 + j);
      v21 = s[6 * *(_DWORD *)(a1 + 272) + v18];
      if ( v21 <= (unsigned int)v19 )
      {
        V_LOCK();
        logfmt_raw(v9, 0x1000u, 0, "minus chain-%d, chip-%d, freq too much!! REFUSED.\n", *(_DWORD *)(a1 + 272), v18);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "died_chain_minus_freq_eth_2282",
          30,
          2125,
          60,
          v9);
      }
      else
      {
        v21 -= v19;
      }
      s[6 * *(_DWORD *)(a1 + 272) + v18] = v21;
    }
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "ready to change died chain(%d)'s freqs", *(_DWORD *)(a1 + 272));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "died_chain_minus_freq_eth_2282",
      30,
      2130,
      20,
      v9);
    stream = fopen("/nvdata/sweep_result_v2.txt", "w");
    if ( stream )
    {
      for ( k = 0; k <= 2; ++k )
      {
        for ( m = 0; m <= 5; ++m )
          fprintf(stream, "%hu\n", (unsigned __int16)s[6 * k + m]);
      }
      fclose(stream);
    }
    else
    {
      V_LOCK();
      sub_FBD60((int)v16, *(int *)(a1 + 272));
      logfmt_raw(
        v9,
        0x1000u,
        0,
        v17,
        v16[0],
        v16[1],
        v16[2],
        v16[3],
        v16[4],
        v16[5],
        v16[6],
        v17,
        "change failed, error: cannot open file");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "died_chain_minus_freq_eth_2282",
        30,
        2133,
        60,
        v9);
    }
  }
  else
  {
    V_LOCK();
    sub_FBD60((int)v14, *(int *)(a1 + 272));
    logfmt_raw(
      v9,
      0x1000u,
      0,
      v15,
      v14[0],
      v14[1],
      v14[2],
      v14[3],
      v14[4],
      v14[5],
      v14[6],
      v15,
      "load failed, error: cannot open file");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "died_chain_minus_freq_eth_2282",
      30,
      2090,
      60,
      v9);
  }
  pthread_mutex_unlock(&sweep_result_file_mutex);
  return 0;
}
