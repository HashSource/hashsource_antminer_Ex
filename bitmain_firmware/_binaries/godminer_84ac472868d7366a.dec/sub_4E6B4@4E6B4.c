int __fastcall sub_4E6B4(int a1)
{
  int all_created_runtime; // r5
  int v2; // r0
  int v3; // r0
  int result; // r0
  int v5; // r3
  char *v6; // r3
  __int64 v7; // r6
  __int64 v8; // r4
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r3
  int v14; // r6
  int v15; // r9
  int v16; // r5
  __int64 *v17; // r4
  __int64 *v18; // r5
  int v19; // r10
  __int64 v20; // t1
  int v21; // r0
  int v23; // [sp+1Ch] [bp-9Ch]
  _DWORD *v24; // [sp+20h] [bp-98h]
  int v25; // [sp+24h] [bp-94h]
  int v26; // [sp+30h] [bp-88h]
  int v27; // [sp+34h] [bp-84h]
  int v28; // [sp+4Ch] [bp-6Ch] BYREF
  char v29[32]; // [sp+50h] [bp-68h] BYREF
  char v30[32]; // [sp+70h] [bp-48h] BYREF
  _BYTE v31[16]; // [sp+90h] [bp-28h] BYREF
  char v32[4040]; // [sp+B8h] [bp+0h] BYREF
  _BYTE v33[4100]; // [sp+10B8h] [bp+1000h] BYREF

  v28 = 0;
  v27 = frontend_runtime_instance(a1);
  all_created_runtime = get_all_created_runtime(&v28);
  read_system_status_from_monitor((int)v31);
  format_hashrate_string(*(const char **)(v27 + 84), v29);
  v2 = format_hashrate_string(*(const char **)(v27 + 84), v30);
  V_LOCK(v2);
  v3 = logfmt_raw((int)v33, 0x1000u);
  V_UNLOCK(v3);
  result = zlog(
             g_hash_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/miner_util/miner_monitor/miner_monitor.c",
             161,
             "task_applog_printer",
             19,
             116,
             40,
             v33);
  if ( v28 > 0 )
  {
    v24 = (_DWORD *)(all_created_runtime - 4);
    v26 = 0;
    do
    {
      v5 = *(_DWORD *)(v24[1] + 136);
      ++v24;
      v6 = (char *)&unk_166540 + 208 * v5;
      v7 = *((_QWORD *)v6 + 7);
      v8 = *((_QWORD *)v6 + 9);
      format_hashrate_string(*(const char **)(v27 + 84), v29);
      v9 = format_hashrate_string(*(const char **)(v27 + 84), v30);
      v10 = dev_ctrl(v9);
      v11 = (*(int (__fastcall **)(_DWORD))(v10 + 40))(*(_DWORD *)(*v24 + 136));
      LODWORD(v7) = snprintf(
                      v32,
                      0x1000u,
                      "chain %d device %d alive chip count %d avg hashrate %s 30min avg hashrate %s hw %llu\n",
                      v11,
                      *(_DWORD *)(*v24 + 136),
                      (_DWORD)v7,
                      v29,
                      v30,
                      v8);
      v12 = snprintf(
              &v32[v7],
              4096 - v7,
              "wc %llu nc %llu chip status str %s detail:\n",
              *v24,
              *(_DWORD *)(*v24 + 248),
              *(_DWORD *)(*v24 + 252),
              *(_DWORD *)(*v24 + 256),
              *(_DWORD *)(*v24 + 260),
              HIDWORD(v7));
      v13 = *v24;
      v14 = v7 + v12;
      v25 = *(_DWORD *)(*v24 + 196);
      if ( v25 > 0 )
      {
        v15 = 0;
        v23 = 0;
        while ( 1 )
        {
          v16 = *(_DWORD *)(v13 + 264);
          v17 = (__int64 *)(v16 + v15);
          v15 += 48;
          v18 = (__int64 *)(v16 + v15);
          ++v23;
          v19 = v14 + snprintf(&v32[v14], 4096 - v14, "%d:");
          do
          {
            v20 = *v17++;
            v19 += snprintf(&v32[v19], 4096 - v19, " %llu", v20);
          }
          while ( v18 != v17 );
          v14 = v19 + 2;
          v12 = snprintf(&v32[v19], 4096 - v19, " /");
          if ( v23 == v25 )
            break;
          v13 = *v24;
        }
      }
      V_LOCK(v12);
      v21 = logfmt_raw((int)v33, 0x1000u);
      V_UNLOCK(v21);
      result = zlog(
                 g_hash_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_master/miner_util/miner_monitor/miner_monitor.c",
                 161,
                 "task_applog_printer",
                 19,
                 138,
                 40,
                 v33);
    }
    while ( v28 > ++v26 );
  }
  return result;
}
