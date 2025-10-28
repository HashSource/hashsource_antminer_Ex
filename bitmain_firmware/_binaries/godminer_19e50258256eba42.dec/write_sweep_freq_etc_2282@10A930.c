void *write_sweep_freq_etc_2282()
{
  _BYTE v1[20]; // [sp+10h] [bp-1254h] BYREF
  char src[64]; // [sp+1010h] [bp-254h] BYREF
  char s[512]; // [sp+1050h] [bp-214h] BYREF
  FILE *stream; // [sp+1250h] [bp-14h]
  int k; // [sp+1254h] [bp-10h]
  int j; // [sp+1258h] [bp-Ch]
  int i; // [sp+125Ch] [bp-8h]

  memset(s, 0, sizeof(s));
  memset(src, 0, sizeof(src));
  stream = fopen("/nvdata/sweep_result_v2.txt", "w");
  if ( !stream )
    puts("Error opening /nvdata/sweep_result_v2.txt befor write!");
  for ( i = 0; i <= 17; ++i )
  {
    if ( sweep_freq_0[i] <= 3u )
      sweep_freq_0[i] = 0;
    else
      sweep_freq_0[i] -= 4;
    fprintf(stream, "%u\n", sweep_freq_0[i]);
  }
  fclose(stream);
  stream = fopen("/nvdata/sweep_result_v2.txt", "r");
  if ( !stream )
    puts("Error opening /nvdata/sweep_result_v2.txt after write!");
  for ( j = 0; j <= 17; ++j )
    _isoc99_fscanf(stream, "%u", &sweep_freq_0[j]);
  fclose(stream);
  for ( k = 0; k <= 17; ++k )
  {
    sprintf(src, "%u ", sweep_freq_0[k]);
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
    "write_sweep_freq_etc_2282",
    25,
    486,
    40,
    v1);
  printf("sweep_freq_0: %s\n", s);
  memset(s, 0, sizeof(s));
  return memset(src, 0, sizeof(src));
}
