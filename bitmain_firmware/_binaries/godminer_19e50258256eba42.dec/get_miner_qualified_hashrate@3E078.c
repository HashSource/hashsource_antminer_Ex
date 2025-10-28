unsigned int get_miner_qualified_hashrate()
{
  double v0; // d0
  _BYTE v2[20]; // [sp+10h] [bp-1094h] BYREF
  _BYTE v3[20]; // [sp+1010h] [bp-94h] BYREF
  float v4; // [sp+1024h] [bp-80h]
  float v5; // [sp+1028h] [bp-7Ch]
  double v6; // [sp+1038h] [bp-6Ch]
  int v7; // [sp+1048h] [bp-5Ch] BYREF
  char v8[12]; // [sp+104Ch] [bp-58h] BYREF
  double v9; // [sp+1058h] [bp-4Ch] BYREF
  double v10; // [sp+1060h] [bp-44h] BYREF
  double v11; // [sp+1068h] [bp-3Ch]
  int v12; // [sp+1070h] [bp-34h]
  int v13; // [sp+1074h] [bp-30h]
  int v14; // [sp+1078h] [bp-2Ch]
  _DWORD *all_created_runtime; // [sp+107Ch] [bp-28h]
  double v16; // [sp+1080h] [bp-24h]
  double v17; // [sp+1088h] [bp-1Ch]
  int i; // [sp+1094h] [bp-10h]
  int j; // [sp+1098h] [bp-Ch]
  int v20; // [sp+109Ch] [bp-8h]

  v20 = 0;
  v7 = 0;
  all_created_runtime = get_all_created_runtime(&v7);
  read_system_status_from_monitor((int)v3);
  v14 = frontend_runtime_instance();
  if ( opt_algo == 7 )
  {
    sub_3CF14(&v10);
    v0 = v10;
  }
  else
  {
    v0 = v6;
  }
  format_hashrate_double(*(const char **)(*(_DWORD *)(v14 + 72) + 16), &v9, v8);
  v16 = v0;
  if ( opt_algo == 7 )
    v17 = v16 * v4;
  else
    v17 = v16 * v5;
  v10 = v10 * v16;
  v13 = (int)v17;
  v12 = (int)v9;
  get_miner_elapsed_time();
  v11 = v0;
  if ( opt_algo != 7 )
  {
    if ( v11 >= 1200.0 )
    {
      if ( v11 <= 1200.0 || v13 >= v12 )
        v20 = 1;
      else
        v20 = 2;
    }
    else
    {
      v20 = 0;
    }
    goto LABEL_26;
  }
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "avg_hashrate-sale_hashrate: %lf-%lf", total_accept_rate * v17, v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/http_test.c",
    139,
    "get_miner_qualified_hashrate",
    28,
    685,
    20,
    v2);
  E11_dag_err_chain_cnt = 0;
  memset(line, 0, sizeof(line));
  memset(item, 0, sizeof(item));
  for ( i = 0; i < v7; ++i )
  {
    if ( *(_BYTE *)(all_created_runtime[i] + 1025) )
      E11_dag_err_chain[(unsigned __int8)++E11_dag_err_chain_cnt - 1] = i;
  }
  for ( j = 0; j < (unsigned __int8)E11_dag_err_chain_cnt; ++j )
  {
    sprintf(item, "%d ", E11_dag_err_chain[j]);
    strcat(line, item);
  }
  if ( E11_dag_err_chain_cnt == 1 )
  {
    sub_3CC10(48, E11_dag_err_chain[(unsigned __int8)E11_dag_err_chain_cnt - 1]);
    V_LOCK();
    logfmt_raw(
      v2,
      0x1000u,
      0,
      "dag gen check fail for chain-%d",
      E11_dag_err_chain[(unsigned __int8)E11_dag_err_chain_cnt - 1]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/http_test.c",
      139,
      "get_miner_qualified_hashrate",
      28,
      703,
      40,
      v2);
  }
  else
  {
    if ( (unsigned __int8)E11_dag_err_chain_cnt <= 1u )
    {
LABEL_26:
      sub_3CC10(v20, 0);
      return get_miner_sale_hashrate();
    }
    sub_3CC10(48, E11_dag_err_chain[(unsigned __int8)E11_dag_err_chain_cnt - 1]);
    snprintf((char *)&search_failed_info, 0x100u, "G%s:1", line);
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "dag gen check fail for chain-%s", line);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/http_test.c",
      139,
      "get_miner_qualified_hashrate",
      28,
      708,
      40,
      v2);
  }
  return get_miner_sale_hashrate();
}
