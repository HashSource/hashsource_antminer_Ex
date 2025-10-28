unsigned int get_miner_sale_hashrate()
{
  double v0; // d0
  double v1; // d0
  int v2; // r0
  int v4; // r0
  double v5; // d0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  float v12[14]; // [sp+18h] [bp-12B4h] BYREF
  _BYTE v13[60]; // [sp+50h] [bp-127Ch] BYREF
  int v14; // [sp+1050h] [bp-27Ch] BYREF
  _QWORD v15[62]; // [sp+1054h] [bp-278h] BYREF
  unsigned int v16; // [sp+1244h] [bp-88h] BYREF
  int v17; // [sp+1248h] [bp-84h] BYREF
  char v18[12]; // [sp+124Ch] [bp-80h] BYREF
  double v19; // [sp+1258h] [bp-74h] BYREF
  double v20; // [sp+1260h] [bp-6Ch] BYREF
  double v21; // [sp+1268h] [bp-64h] BYREF
  FILE *stream; // [sp+1270h] [bp-5Ch]
  char *filename; // [sp+1274h] [bp-58h]
  double v24; // [sp+1278h] [bp-54h]
  double v25; // [sp+1280h] [bp-4Ch]
  int v26; // [sp+128Ch] [bp-40h]
  double v27; // [sp+1290h] [bp-3Ch]
  _DWORD *all_created_runtime; // [sp+1298h] [bp-34h]
  int v29; // [sp+129Ch] [bp-30h]
  double v30; // [sp+12A0h] [bp-2Ch]
  int v31; // [sp+12ACh] [bp-20h]
  int v32; // [sp+12B0h] [bp-1Ch]
  int n; // [sp+12B4h] [bp-18h]
  int m; // [sp+12B8h] [bp-14h]
  int k; // [sp+12BCh] [bp-10h]
  int j; // [sp+12C0h] [bp-Ch]
  int i; // [sp+12C4h] [bp-8h]

  v17 = 0;
  v29 = frontend_runtime_instance();
  all_created_runtime = get_all_created_runtime(&v17);
  v32 = 0;
  v16 = 1;
  v31 = 0;
  get_miner_elapsed_time();
  v27 = v0;
  v30 = 0.0;
  get_miner_6060info_status(v15);
  v20 = 0.0;
  v21 = 0.0;
  if ( opt_algo == 7 )
  {
    sub_3CF14(&v21);
    if ( v27 >= 3600.0 )
    {
      read_system_status_from_monitor((int)v12);
      v26 = frontend_runtime_instance();
      v25 = v12[5];
      V_LOCK();
      logfmt_raw(
        v13,
        0x1000u,
        0,
        "avg_hashrate: %lf, total_accept_rate: %f, total_hashrate: %lf",
        v25,
        total_accept_rate,
        v21);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/http_test.c",
        139,
        "get_miner_sale_hashrate",
        23,
        308,
        20,
        v13);
      if ( total_accept_rate * v25 >= v21 )
      {
        sub_3CC10(1, 0);
        v1 = v21;
        format_hashrate_double(*(const char **)(*(_DWORD *)(v26 + 72) + 16), &v20, v18);
        v24 = v1;
        v32 = (int)v20;
        v2 = sub_344EB8((int)v20, v16);
        v32 = v16 * v2;
        V_LOCK();
        logfmt_raw(v13, 0x1000u, 0, "sale_hashrate_integer: %d", v32);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/http_test.c",
          139,
          "get_miner_sale_hashrate",
          23,
          317,
          20,
          v13);
        return v32;
      }
      sub_3CC10(2, 0);
      strcpy((char *)&search_failed_info, "R:1");
    }
  }
  else
  {
    for ( i = 0; i < v17; ++i )
    {
      v4 = (*(int (__fastcall **)(_DWORD, double *, unsigned int *))(all_created_runtime[i] + 152))(
             all_created_runtime[i],
             &v19,
             &v16);
      v31 |= v4;
      v21 = v21 + v19;
    }
  }
  if ( opt_algo == 6 )
    v30 = 2700.0;
  else
    v30 = 0.0;
  if ( v27 - v30 >= 1.0 )
  {
    if ( v31 )
    {
      sub_3CC10(2, 0);
      strcpy((char *)&search_failed_info, "R:1");
    }
    if ( LOBYTE(v15[0]) )
    {
      sub_3CC10(2, 0);
      strcpy((char *)&search_failed_info, "P:1");
    }
    for ( j = 0; j <= 7; ++j )
    {
      if ( LOBYTE(v15[j + 3]) )
      {
        sub_3CC10(2, 0);
        snprintf((char *)&search_failed_info, 0x100u, "F%d:1", j);
      }
    }
    for ( k = 0; k <= 15; ++k )
    {
      if ( LOBYTE(v15[k + 27]) )
      {
        sub_3CC10(2, 0);
        snprintf((char *)&search_failed_info, 0x100u, "J%d:1", k);
      }
    }
    if ( opt_algo == 7 )
    {
      E11_dag_err_chain_cnt = 0;
      memset(line, 0, sizeof(line));
      memset(item, 0, sizeof(item));
      for ( m = 0; m < v17; ++m )
      {
        if ( *(_BYTE *)(all_created_runtime[m] + 1025) )
          E11_dag_err_chain[(unsigned __int8)++E11_dag_err_chain_cnt - 1] = m;
      }
      for ( n = 0; n < (unsigned __int8)E11_dag_err_chain_cnt; ++n )
      {
        sprintf(item, "%d ", E11_dag_err_chain[n]);
        strcat(line, item);
      }
      if ( E11_dag_err_chain_cnt == 1 )
      {
        sub_3CC10(48, E11_dag_err_chain[(unsigned __int8)E11_dag_err_chain_cnt - 1]);
      }
      else if ( (unsigned __int8)E11_dag_err_chain_cnt > 1u )
      {
        sub_3CC10(48, E11_dag_err_chain[(unsigned __int8)E11_dag_err_chain_cnt - 1]);
        snprintf((char *)&search_failed_info, 0x100u, " G%s:1", line);
      }
    }
    v5 = v21;
    format_hashrate_double(*(const char **)(*(_DWORD *)(v29 + 72) + 16), &v20, v18);
    v24 = v5;
    v32 = (int)v20;
    v6 = sub_344EB8((int)v20, v16);
    v32 = v16 * v6;
    if ( opt_algo == 6 )
    {
      v32 -= 50;
      if ( v32 <= 3729 )
      {
        if ( v32 <= 3629 )
        {
          if ( v32 <= 3529 )
          {
            if ( v32 <= 3429 )
            {
              if ( v32 <= 3329 )
              {
                if ( v32 <= 3229 )
                {
                  if ( v32 <= 3129 )
                  {
                    v7 = sub_344EB8(v32, v16);
                    v32 = v16 * v7;
                  }
                  else
                  {
                    v32 = 3180;
                  }
                }
                else
                {
                  v32 = 3280;
                }
              }
              else
              {
                v32 = 3380;
              }
            }
            else
            {
              v32 = 3480;
            }
          }
          else
          {
            v32 = 3580;
          }
        }
        else
        {
          v32 = 3680;
        }
      }
      else
      {
        v32 = 3780;
      }
    }
    else if ( opt_algo == 9 )
    {
      if ( v32 < 860 )
      {
        if ( v32 < 840 )
        {
          if ( v32 < 820 )
          {
            if ( v32 < 800 )
            {
              if ( v32 < 780 )
                v32 = v32 >= 660 || v32 <= 349 ? 0 : 350;
              else
                v32 = 780;
            }
            else
            {
              v32 = 800;
            }
          }
          else
          {
            v32 = 820;
          }
        }
        else
        {
          v32 = 840;
        }
      }
      else
      {
        v32 = 860;
      }
      filename = "/nvdata/sale_hash";
      stream = fopen("/nvdata/sale_hash", "r");
      if ( stream )
      {
        if ( _isoc99_fscanf(stream, "%d", &v14) == 1 )
        {
          V_LOCK();
          logfmt_raw(v13, 0x1000u, 0, "read value %d from /nvdata/sale_hash", v14);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/http_test.c",
            139,
            "get_miner_sale_hashrate",
            23,
            561,
            20,
            v13);
          v32 = v14;
        }
        else
        {
          V_LOCK();
          logfmt_raw(v13, 0x1000u, 0, "Failed to read the value from /nvdata/sale_hash");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/http_test.c",
            139,
            "get_miner_sale_hashrate",
            23,
            566,
            40,
            v13);
        }
        fclose(stream);
      }
    }
    if ( opt_algo == 1 )
    {
      if ( v32 <= 65999 )
      {
        if ( v32 <= 63499 )
        {
          if ( v32 <= 60499 )
          {
            if ( v32 <= 57999 )
            {
              v8 = sub_344EB8(v32, v16);
              v32 = v16 * v8;
            }
            else
            {
              v32 = 58000;
            }
          }
          else
          {
            v32 = 60500;
          }
        }
        else
        {
          v32 = 63500;
        }
      }
      else
      {
        v32 = (int)&elf_hash_bucket[5];
      }
    }
    if ( opt_algo == 2 )
    {
      if ( v32 <= 172999 )
      {
        if ( v32 <= 165999 )
        {
          v9 = sub_344EB8(v32, v16);
          v32 = v16 * v9;
        }
        else
        {
          v32 = 166000;
        }
      }
      else
      {
        v32 = 173000;
      }
    }
    if ( opt_algo == 5 )
    {
      if ( v32 <= 1859 )
      {
        if ( v32 <= 1769 )
        {
          v10 = sub_344EB8(v32, v16);
          return v16 * v10;
        }
        else
        {
          return 1770;
        }
      }
      else
      {
        return 1860;
      }
    }
    return v32;
  }
  else
  {
    sub_3CC10(0, 0);
    return v32;
  }
}
