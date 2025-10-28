int __fastcall sub_3FF48(int a1, int a2, _DWORD *a3)
{
  double v3; // d0
  double v6; // r0
  int v7; // r0
  char *v8; // r6
  size_t v9; // r0
  _BYTE *v10; // lr
  unsigned int v11; // r1
  int v12; // r12
  int v13; // t1
  int v14; // r3
  int v15; // r2
  int v16; // r0
  int v17; // r0
  int v19; // r0
  _BYTE v20[32]; // [sp+18h] [bp-1020h] BYREF
  _BYTE v21[4096]; // [sp+38h] [bp-1000h] BYREF

  LODWORD(v6) = json_array_get(a3, 0);
  v7 = json_number_value(v6);
  if ( v3 == 0.0 )
  {
    V_LOCK(v7);
    v19 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      167,
      "stratum_set_diff_or_target_eth",
      30,
      837,
      100,
      v21);
    return 0;
  }
  else
  {
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
    (*(void (__fastcall **)(int))(a1 + 64))(a2 + 1488);
    v8 = (char *)abin2hex(a2 + 1488, 32);
    v9 = strlen(v8);
    hex2bin((int)v20, (unsigned __int8 *)v8, v9 >> 1);
    v10 = v20;
    v11 = 0;
LABEL_3:
    v13 = (char)*v10++;
    v12 = v13;
    v14 = 7;
    while ( 1 )
    {
      v15 = v12 >> v14--;
      if ( (v15 & 1) != 0 )
        break;
      v11 = (unsigned __int8)(v11 + 1);
      if ( v14 == -1 )
      {
        if ( v10 != v21 )
          goto LABEL_3;
        break;
      }
    }
    *(double *)(a2 + 1520) = (double)v11;
    *(double *)(a2 + 448) = (double)v11;
    *(double *)(a2 + 1808) = (double)v11;
    v16 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    V_LOCK(v16);
    v17 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      167,
      "stratum_set_diff_or_target_eth",
      30,
      877,
      40,
      v21);
    free(v8);
    return 1;
  }
}
