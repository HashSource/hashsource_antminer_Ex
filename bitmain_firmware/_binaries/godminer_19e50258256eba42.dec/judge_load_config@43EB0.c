int __fastcall judge_load_config(const char *a1)
{
  char *v2; // r4
  const char *v3; // r0
  char *v4; // r4
  const char *v5; // r0
  char *v6; // r4
  const char *v7; // r0
  size_t v8; // r0
  const char *v9; // r0
  _BYTE v12[40]; // [sp+1Ch] [bp-1128h] BYREF
  _BYTE v13[92]; // [sp+101Ch] [bp-128h] BYREF
  int v14; // [sp+1078h] [bp-CCh] BYREF
  int v15; // [sp+1118h] [bp-2Ch]
  bool v16; // [sp+111Fh] [bp-25h]
  int v17; // [sp+1120h] [bp-24h]
  const json_t *v18; // [sp+1124h] [bp-20h]
  const json_t *v19; // [sp+1128h] [bp-1Ch]
  const json_t *v20; // [sp+112Ch] [bp-18h]
  const json_t *file; // [sp+1130h] [bp-14h]
  signed int i; // [sp+1134h] [bp-10h]

  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "start %s", "judge_load_config");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/pool.c",
    134,
    "judge_load_config",
    17,
    740,
    20,
    v12);
  v17 = 0;
  file = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  i = 0;
  if ( a1 )
  {
    file = json_load_file(a1, 0, (json_error_t *)v13);
    if ( file && !*(_DWORD *)file )
    {
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "%s: after json_load_file", "judge_load_config");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "judge_load_config",
        17,
        758,
        20,
        v12);
      v18 = json_object_get(file, "pools");
      if ( v18 && *(_DWORD *)v18 == 1 )
      {
        dword_5ACE70 = json_array_size(v18);
        for ( i = 0; ; ++i )
        {
          v8 = json_array_size(v18);
          if ( v8 <= i )
            break;
          v19 = json_array_get(v18, i);
          if ( !v19 )
            break;
          if ( *(_DWORD *)v19 )
            break;
          if ( i > 2 )
            break;
          v20 = json_object_get(v19, "url");
          if ( !v20 )
            break;
          if ( *(_DWORD *)v20 != 2 )
            break;
          v2 = &byte_5AC570[768 * i];
          v3 = json_string_value(v20);
          snprintf(v2, 0x100u, "%s", v3);
          v20 = json_object_get(v19, "user");
          if ( !v20 )
            break;
          if ( *(_DWORD *)v20 != 2 )
            break;
          v4 = &byte_5AC570[768 * i + 256];
          v5 = json_string_value(v20);
          snprintf(v4, 0x100u, "%s", v5);
          v20 = json_object_get(v19, "pass");
          if ( !v20 || *(_DWORD *)v20 != 2 )
            break;
          v6 = &byte_5AC570[768 * i + 512];
          v7 = json_string_value(v20);
          snprintf(v6, 0x100u, "%s", v7);
          V_LOCK();
          logfmt_raw(
            v12,
            0x1000u,
            0,
            "%s %s %s",
            &byte_5AC570[768 * i],
            &byte_5AC570[768 * i + 256],
            &byte_5AC570[768 * i + 512]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/pool.c",
            134,
            "judge_load_config",
            17,
            782,
            20,
            v12);
        }
        v17 &= ~1u;
        if ( total_pools == dword_5ACE70 )
        {
          for ( i = 0; i < total_pools; ++i )
          {
            if ( strcmp(*(const char **)(*(_DWORD *)(pools + 4 * i) + 12), &byte_5AC570[768 * i])
              || strcmp(*(const char **)(*(_DWORD *)(pools + 4 * i) + 16), &byte_5AC570[768 * i + 256])
              || strcmp(*(const char **)(*(_DWORD *)(pools + 4 * i) + 20), &byte_5AC570[768 * i + 512]) )
            {
              v17 |= 1u;
              break;
            }
          }
        }
        else
        {
          v17 |= 1u;
        }
      }
      else
      {
        v17 &= ~1u;
      }
      v20 = json_object_get(file, "bitmain-freq-level");
      if ( !v20 || *(_DWORD *)v20 != 2 )
        v17 &= ~2u;
      v20 = json_object_get(file, "bitmain-fan-ctrl");
      if ( v20 && *(_DWORD *)v20 == 5 || v20 && *(_DWORD *)v20 == 6 )
      {
        v16 = *(_DWORD *)v20 == 5;
        if ( v16 == fan_pwm_fixed )
        {
          v17 &= ~4u;
        }
        else
        {
          v17 |= 4u;
          fan_pwm_fixed = v16;
        }
      }
      else
      {
        v17 &= ~4u;
      }
      v20 = json_object_get(file, "bitmain-fan-pwm");
      if ( v20 && *(_DWORD *)v20 == 2 )
      {
        v9 = json_string_value(v20);
        v15 = atoi(v9);
        if ( v15 == fan_pwm )
        {
          v17 &= ~8u;
        }
        else
        {
          v17 |= 8u;
          fan_pwm = v15;
        }
      }
      else
      {
        v17 &= ~8u;
      }
      sub_41324((int)file);
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "ret = 0x%x", v17);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "judge_load_config",
        17,
        841,
        20,
        v12);
      return v17;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "%s: JSON decode of file '%s' failed %s", "judge_load_config", a1, &v14);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "judge_load_config",
        17,
        755,
        100,
        v12);
      return v17;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "%s: bad param", "judge_load_config");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/pool.c",
      134,
      "judge_load_config",
      17,
      749,
      100,
      v12);
    return v17;
  }
}
