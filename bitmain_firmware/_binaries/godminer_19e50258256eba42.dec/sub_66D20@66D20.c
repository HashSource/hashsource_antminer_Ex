int __fastcall sub_66D20(int a1, int a2, const json_t *a3)
{
  double v3; // d0
  double v4; // r0
  size_t v6; // r0
  int v8; // [sp+Ch] [bp-1060h]
  _BYTE v11[64]; // [sp+2Ch] [bp-1040h] BYREF
  _BYTE v12[32]; // [sp+102Ch] [bp-40h] BYREF
  char *s; // [sp+104Ch] [bp-20h]
  double v14; // [sp+1050h] [bp-1Ch]
  int j; // [sp+1058h] [bp-14h]
  int i; // [sp+105Ch] [bp-10h]
  unsigned __int8 v17; // [sp+1063h] [bp-9h]
  int v18; // [sp+1064h] [bp-8h]

  v18 = a2 + 456;
  LODWORD(v4) = json_array_get(a3, 0);
  json_number_value(v4);
  v14 = v3;
  if ( v3 == 0.0 )
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "Stratum set target: invalid parameters");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "stratum_set_diff_or_target_eth_2282",
      35,
      880,
      100,
      v11);
    return 0;
  }
  else
  {
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
    (*(void (__fastcall **)(int))(a1 + 64))(v18 + 1032);
    s = (char *)abin2hex(a2 + 1488, 0x20u);
    v6 = strlen(s);
    hex2bin(v12, s, v6 >> 1);
    v17 = 0;
    for ( i = 0; i <= 31; ++i )
    {
      for ( j = 7; j >= 0; --j )
      {
        if ( (((char)v12[i] >> j) & 1) != 0 )
          goto LABEL_10;
        ++v17;
      }
    }
LABEL_10:
    *(double *)(v18 + 1064) = (double)v17;
    *(_QWORD *)(a2 + 448) = *(_QWORD *)(v18 + 1064);
    *(_QWORD *)(a2 + 1808) = *(_QWORD *)(a2 + 448);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    V_LOCK();
    logfmt_raw(
      v11,
      0x1000u,
      0,
      "set diff %f, generated target is %s, targetdiff %lf",
      v14,
      s,
      v8,
      *(_DWORD *)(v18 + 1064),
      *(_DWORD *)(v18 + 1068));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "stratum_set_diff_or_target_eth_2282",
      35,
      929,
      40,
      v11);
    free(s);
    return 1;
  }
}
