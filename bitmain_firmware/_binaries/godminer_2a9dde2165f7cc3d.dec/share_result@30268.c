int __fastcall share_result(int a1, int a2, char *a3, int a4)
{
  double v7; // d5
  double v8; // d7
  int v9; // r2
  __int64 v10; // kr10_8
  int v11; // r1
  _DWORD *v12; // r0
  int v13; // r0
  int v14; // r2
  double v16; // d5
  __int64 v17; // r2
  double v18; // d7
  double v19; // d6
  time_t v20; // r0
  __int64 v21; // r6
  _DWORD *v22; // r0
  int v23; // r0
  _BYTE v24[32]; // [sp+28h] [bp-1044h] BYREF
  _BYTE v25[32]; // [sp+48h] [bp-1024h] BYREF
  _BYTE v26[4100]; // [sp+68h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_1733B4);
  if ( a1 )
  {
    v16 = *(double *)(a4 + 1808);
    LODWORD(v17) = *(_DWORD *)(a4 + 1928);
    v18 = *(double *)(a4 + 1960) + v16;
    ++total_accepted;
    HIDWORD(v17) = *(_DWORD *)(a4 + 1932);
    v19 = total_diff_accepted + v16;
    *(_QWORD *)(a4 + 1928) = v17 + 1;
    *(double *)(a4 + 1960) = v18;
    total_diff_accepted = v19;
    v20 = time(0);
    v21 = *(_QWORD *)(a4 + 1808);
    *(_DWORD *)(a4 + 1616) = v20;
    *(_QWORD *)(a4 + 1624) = v21;
    pthread_mutex_unlock(&stru_1733B4);
    return 1;
  }
  else
  {
    v7 = *(double *)(a4 + 1808);
    v8 = total_diff_rejected + v7;
    v9 = total_rejected;
    v10 = *(_QWORD *)(a4 + 1936) + 1LL;
    *(double *)(a4 + 1968) = *(double *)(a4 + 1968) + v7;
    *(_DWORD *)(a4 + 1936) = v10;
    v11 = dword_18E404;
    total_diff_rejected = v8;
    *(_DWORD *)(a4 + 1940) = HIDWORD(v10);
    *(_QWORD *)&total_rejected = __PAIR64__(v11, v9) + 1;
    pthread_mutex_unlock(&stru_1733B4);
    if ( a3 )
    {
      v12 = sub_2F21C(a3);
      V_LOCK(v12);
      V_INT((int)v24, "poolno");
      v13 = logfmt_raw((int)v26, 0x1000u);
      V_UNLOCK(v13);
      v14 = 558;
    }
    else
    {
      v22 = sub_2F21C("NULL");
      V_LOCK(v22);
      V_INT((int)v25, "poolno");
      v23 = logfmt_raw((int)v26, 0x1000u);
      V_UNLOCK(v23);
      v14 = 561;
    }
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/pool.c",
      137,
      "share_result",
      12,
      v14,
      80,
      v26);
    return 1;
  }
}
