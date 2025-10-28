int __fastcall parse_arg(int result, char *s1)
{
  int v3; // r0
  unsigned int v4; // r5
  int v5; // r0
  int v6; // r0
  _DWORD *file; // r0
  _DWORD *v8; // r5
  int v9; // r0
  int v10; // r2
  const char *v11; // r7
  char **v12; // r8
  size_t v13; // r6
  int v14; // r5
  const char *v15; // t1
  int v16; // r0
  int v17; // r0
  int v18; // r0
  unsigned int *v19; // r3
  unsigned int v20; // r2
  unsigned int v21; // r2
  int v22; // r0
  int v23[23]; // [sp+14h] [bp-1114h] BYREF
  _BYTE v24[4120]; // [sp+110h] [bp-1018h] BYREF

  if ( result == 117 )
    return result;
  if ( result <= 117 )
  {
    if ( result == 99 )
    {
      file = (_DWORD *)json_load_file(s1, 0, v23);
      v8 = file;
      if ( file && !*file )
      {
        parse_config((int)file);
        if ( v8[1] != -1 )
        {
          v19 = v8 + 1;
          __dmb(0xBu);
          do
          {
            v20 = __ldrex(v19);
            v21 = v20 - 1;
          }
          while ( __strex(v21, v19) );
          if ( !v21 )
            json_delete(v8);
        }
      }
      else
      {
        if ( v23[0] < 0 )
        {
          V_LOCK(file);
          v18 = logfmt_raw((int)v24, 0x1000u);
          V_UNLOCK(v18);
          v10 = 388;
        }
        else
        {
          V_LOCK(file);
          v9 = logfmt_raw((int)v24, 0x1000u);
          V_UNLOCK(v9);
          v10 = 390;
        }
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/god-miner.c",
          138,
          "parse_arg",
          9,
          v10,
          100,
          v24);
      }
      if ( default_config )
      {
        free((void *)default_config);
        default_config = 0;
      }
      result = (int)_strdup(s1);
      default_config = result;
      return result;
    }
    if ( result > 99 )
    {
      if ( result == 104 )
      {
        V_LOCK(104);
        v6 = logfmt_raw((int)v24, 0x1000u);
        V_UNLOCK(v6);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/god-miner.c",
          138,
          "parse_arg",
          9,
          480,
          40,
          v24);
        exit(0);
      }
      if ( result >= 104 )
      {
        result -= 111;
        if ( (unsigned int)result <= 1 )
          return result;
      }
    }
    else
    {
      switch ( result )
      {
        case 'P':
          opt_protocol = 1;
          return result;
        case 'a':
          v11 = "ckb_2040";
          v12 = off_123A00;
          v13 = 8;
          v14 = 0;
          while ( 1 )
          {
            if ( v13 )
            {
              result = strncasecmp(s1, v11, v13);
              if ( !result && !s1[v13] )
                break;
            }
            if ( ++v14 == 10 )
            {
              V_LOCK(result);
              v16 = logfmt_raw((int)v24, 0x1000u);
              V_UNLOCK(v16);
              return zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build"
                       "/godminer-origin_godminer-new/god-miner.c",
                       138,
                       "parse_arg",
                       9,
                       371,
                       100,
                       v24);
            }
            v15 = v12[1];
            ++v12;
            v11 = v15;
            result = strlen(v15);
            v13 = result;
          }
          opt_algo = v14;
          return result;
        case 'F':
          fan_pwm_fixed = 1;
          return result;
      }
    }
LABEL_8:
    V_LOCK(result);
    v3 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/god-miner.c",
      138,
      "parse_arg",
      9,
      493,
      100,
      v24);
    exit(1);
  }
  if ( result > 1033 )
  {
    if ( result == 1035 )
    {
      v4 = strtol(s1, 0, 10);
      V_LOCK(v4);
      v5 = logfmt_raw((int)v24, 0x1000u);
      V_UNLOCK(v5);
      result = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmi"
                 "ner-origin_godminer-new/god-miner.c",
                 138,
                 "parse_arg",
                 9,
                 470,
                 40,
                 v24);
      if ( v4 > 1 )
      {
        V_LOCK(result);
        v17 = logfmt_raw((int)v24, 0x1000u);
        V_UNLOCK(v17);
        return zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmi"
                 "ner-origin_godminer-new/god-miner.c",
                 138,
                 "parse_arg",
                 9,
                 472,
                 100,
                 v24);
      }
      else
      {
        opt_custom_power_mode = v4;
      }
      return result;
    }
    if ( result < 1035 )
    {
      result = strtol(s1, 0, 10);
      if ( (unsigned int)result > 0x64 )
      {
        V_LOCK(result);
        v22 = logfmt_raw((int)v24, 0x1000u);
        V_UNLOCK(v22);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/god-miner.c",
          138,
          "parse_arg",
          9,
          463,
          100,
          v24);
        exit(1);
      }
      fan_pwm = result;
      return result;
    }
    if ( result == 1036 )
      return result;
    goto LABEL_8;
  }
  if ( result < 1032 )
  {
    switch ( result )
    {
      case 122:
        if ( opt_zlog_conf_file )
          free((void *)opt_zlog_conf_file);
        result = (int)_strdup(s1);
        opt_zlog_conf_file = result;
        break;
      case 1030:
        opt_api_remote = 1;
        break;
      case 118:
        opt_version_path = (int)s1;
        break;
      default:
        goto LABEL_8;
    }
  }
  return result;
}
