int __fastcall share_result(int a1, int a2, char *a3, double *a4)
{
  unsigned int v4; // r3
  int v5; // r1
  int v7; // [sp+14h] [bp-10A8h]
  _BYTE v11[44]; // [sp+50h] [bp-106Ch] BYREF
  _DWORD v12[6]; // [sp+1050h] [bp-6Ch] BYREF
  __int64 v13; // [sp+1068h] [bp-54h]
  _DWORD v14[6]; // [sp+1070h] [bp-4Ch] BYREF
  __int64 v15; // [sp+1088h] [bp-34h]
  int v16; // [sp+1090h] [bp-2Ch]
  int v17; // [sp+1094h] [bp-28h]
  int v18; // [sp+1098h] [bp-24h]
  char *needle; // [sp+109Ch] [bp-20h]

  pthread_mutex_lock(&stru_5AC548);
  ++total_submit;
  V_LOCK();
  logfmt_raw(v11, 0x1000u, 0, "total_submit: %u", total_submit);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/pool.c",
    134,
    "share_result",
    12,
    552,
    20,
    v11);
  if ( a1 )
  {
    ++total_accepted;
    total_diff_accepted = a4[226] + total_diff_accepted;
    ++*((_QWORD *)a4 + 241);
    a4[245] = a4[245] + a4[226];
    *((_DWORD *)a4 + 404) = time(0);
    a4[203] = a4[226];
  }
  else
  {
    needle = "Low difficulty";
    V_LOCK();
    sub_4138C((int)v12, *(int *)a4);
    logfmt_raw(
      v11,
      0x1000u,
      0,
      HIDWORD(v13),
      v12[0],
      v12[1],
      v12[2],
      v12[3],
      v12[4],
      v12[5],
      v13,
      "reject reason: %s, id: %d",
      a3,
      id_val_tmp);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/pool.c",
      134,
      "share_result",
      12,
      565,
      20,
      v11);
    v18 = id_val_tmp % 10;
    v17 = id_val_tmp / 10 % 10;
    if ( strstr(a3, needle) )
    {
      ++reject_nonce_cnt[6 * v17 + v18];
      if ( (unsigned int)total_submit > 0xC8 )
      {
        reject_nonce_rate[6 * v17 + v18] = (float)((float)reject_nonce_cnt[6 * v17 + v18]
                                                 / (float)(unsigned int)total_submit)
                                         * 100.0;
        V_LOCK();
        logfmt_raw(
          v11,
          0x1000u,
          0,
          "reject_nonce_cnt[%d][%d] - reject_nonce_rate[%d][%d]: %u - %.2f",
          v17,
          v18,
          v17,
          v18,
          reject_nonce_cnt[6 * v17 + v18],
          v7,
          reject_nonce_rate[6 * v17 + v18]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/pool.c",
          134,
          "share_result",
          12,
          574,
          20,
          v11);
      }
      total_diff_rejected = a4[226] + total_diff_rejected;
      a4[246] = a4[246] + a4[226];
      ++*((_QWORD *)a4 + 242);
      ++total_rejected;
    }
    needle = "stale work";
    if ( strstr(a3, "stale work") )
    {
      ++*(_QWORD *)&total_stale;
      ++*((_DWORD *)a4 + 410);
      a4[227] = a4[227] + a4[226];
      total_diff_stale = a4[226] + total_diff_stale;
    }
  }
  pthread_mutex_unlock(&stru_5AC548);
  if ( !a1 )
  {
    v16 = *((_DWORD *)a4 + 484);
    if ( a3 )
    {
      sub_41758((unsigned __int8 *)a3);
    }
    else
    {
      sub_41758("NULL");
      v4 = v16;
      if ( v16 < 1 )
        v4 = 1;
      sub_34514C(v16 % 10 + v16 % 100 + v16 % 1000 + v16 % 10000, v4);
      if ( !v5 )
      {
        V_LOCK();
        sub_4138C((int)v14, *(int *)a4);
        logfmt_raw(
          v11,
          0x1000u,
          0,
          HIDWORD(v15),
          v14[0],
          v14[1],
          v14[2],
          v14[3],
          v14[4],
          v14[5],
          v15,
          "reject reason:: NULL");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/pool.c",
          134,
          "share_result",
          12,
          600,
          80,
          v11);
      }
    }
  }
  return 1;
}
