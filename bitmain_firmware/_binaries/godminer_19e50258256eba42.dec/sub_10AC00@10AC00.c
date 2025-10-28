void *sub_10AC00()
{
  _BYTE v1[16]; // [sp+14h] [bp-1250h] BYREF
  char src[64]; // [sp+1014h] [bp-250h] BYREF
  char s[512]; // [sp+1054h] [bp-210h] BYREF
  FILE *stream; // [sp+1254h] [bp-10h]
  int j; // [sp+1258h] [bp-Ch]
  int i; // [sp+125Ch] [bp-8h]

  memset(s, 0, sizeof(s));
  memset(src, 0, sizeof(src));
  stream = fopen("/nvdata/sweep_result_v2.txt", "r");
  if ( !stream )
    puts("Error opening /nvdata/sweep_result_v2.txt");
  for ( i = 0; i <= 17; ++i )
    _isoc99_fscanf(stream, "%u", &sweep_freq_0[i]);
  fclose(stream);
  for ( j = 0; j <= 17; ++j )
  {
    sprintf(src, "%u ", sweep_freq_0[j]);
    strcat(s, src);
  }
  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "sweep_freq_0: %s", s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "read_sweep_freq_etc_2282",
    24,
    511,
    40,
    v1);
  printf("sweep_freq_0: %s\n", s);
  memset(s, 0, sizeof(s));
  return memset(src, 0, sizeof(src));
}
