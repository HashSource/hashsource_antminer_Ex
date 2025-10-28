int sub_B1704()
{
  int v1; // r3
  _BYTE v3[216]; // [sp+10h] [bp-11DCh] BYREF
  int v4; // [sp+E8h] [bp-1104h] BYREF
  const void *dest[55]; // [sp+10E8h] [bp-104h] BYREF
  int v6; // [sp+11C4h] [bp-28h] BYREF
  void *ptr; // [sp+11C8h] [bp-24h]
  _DWORD *all_created_runtime; // [sp+11CCh] [bp-20h]
  signed int k; // [sp+11D0h] [bp-1Ch]
  int j; // [sp+11D4h] [bp-18h]
  int i; // [sp+11D8h] [bp-14h]
  int v12; // [sp+11DCh] [bp-10h]
  size_t nmemb; // [sp+11E0h] [bp-Ch]
  int v14; // [sp+11E4h] [bp-8h]

  v6 = 0;
  v14 = 0x7FFFFFFF;
  all_created_runtime = get_all_created_runtime(&v6);
  nmemb = 0;
  v12 = 0;
  for ( i = 0; i < v6; ++i )
  {
    read_status_from_monitor(dest, all_created_runtime[i]);
    nmemb += (size_t)dest[6];
  }
  ptr = calloc(nmemb, 4u);
  if ( ptr )
  {
    for ( j = 0; j < v6; ++j )
    {
      read_status_from_monitor(v3, all_created_runtime[j]);
      memcpy(dest, v3, 0xD8u);
      memcpy((char *)ptr + 4 * v12, dest[0], 4 * (int)dest[6]);
      v12 += (int)dest[6];
    }
    for ( k = 0; k < (int)nmemb; ++k )
    {
      v1 = *((_DWORD *)ptr + k);
      if ( v14 < v1 )
        v1 = v14;
      v14 = v1;
    }
    free(ptr);
    dword_59B1F0 = v14;
    V_LOCK();
    logfmt_raw(&v4, 0x1000u, 0, "min temp pcb: %d", v14);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/set_pwm_by_temp.c",
      156,
      "get_min_pcb_temp",
      16,
      214,
      20,
      &v4);
    return v14;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "temp_in_pcb");
    return dword_59B1F0;
  }
}
