int __fastcall parse_arg(int result, char *s)
{
  int v3; // r0
  int v4; // lr
  int v5; // r0
  _DWORD *file; // r0
  _DWORD *v7; // r5
  int v8; // r0
  int v9; // r2
  int v10; // r0
  int v11; // r2
  int v12; // r0
  int v13; // r1
  int v14; // r0
  const char *v15; // r7
  char **v16; // r8
  size_t v17; // r6
  int v18; // r5
  const char *v19; // t1
  int v20; // r0
  int v21; // r3
  char *v22; // r4
  int v23; // r0
  unsigned int v24; // r5
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  unsigned int *v29; // r3
  unsigned int v30; // r2
  unsigned int v31; // r2
  int v32[23]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v33[4096]; // [sp+110h] [bp-1000h] BYREF

  if ( result == 117 )
  {
    result = set_user(s);
    if ( !result )
      return result;
    V_LOCK(result);
    v23 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v23);
    v11 = 420;
    v12 = g_zc;
    LOWORD(v13) = 1740;
    goto LABEL_48;
  }
  if ( result <= 117 )
  {
    if ( result == 99 )
    {
      file = (_DWORD *)json_load_file(s, 0, v32);
      v7 = file;
      if ( file && !*file )
      {
        parse_config((int)file);
        if ( v7[1] != -1 )
        {
          v29 = v7 + 1;
          __dmb(0xBu);
          do
          {
            v30 = __ldrex(v29);
            v31 = v30 - 1;
          }
          while ( __strex(v31, v29) );
          if ( !v31 )
            json_delete(v7);
        }
      }
      else
      {
        if ( v32[0] < 0 )
        {
          V_LOCK(file);
          v28 = logfmt_raw((int)v33, 0x1000u);
          V_UNLOCK(v28);
          v9 = 388;
        }
        else
        {
          V_LOCK(file);
          v8 = logfmt_raw((int)v33, 0x1000u);
          V_UNLOCK(v8);
          v9 = 390;
        }
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/god-miner.c",
          142,
          "parse_arg",
          9,
          v9,
          100,
          v33);
      }
      if ( default_config )
      {
        free((void *)default_config);
        default_config = 0;
      }
      result = (int)_strdup(s);
      default_config = result;
      return result;
    }
    if ( result <= 99 )
    {
      switch ( result )
      {
        case 'P':
          opt_protocol = 1;
          break;
        case 'a':
          v15 = "ckb_2040";
          v16 = off_130004;
          v17 = 8;
          v18 = 0;
          while ( 1 )
          {
            if ( v17 )
            {
              result = strncasecmp(s, v15, v17);
              if ( !result && !s[v17] )
                break;
            }
            if ( ++v18 == 12 )
            {
              V_LOCK(result);
              v20 = logfmt_raw((int)v33, 0x1000u);
              V_UNLOCK(v20);
              v11 = 371;
              v12 = g_zc;
              LOWORD(v13) = 1740;
              goto LABEL_48;
            }
            v19 = v16[1];
            ++v16;
            v15 = v19;
            result = strlen(v19);
            v17 = result;
          }
          opt_algo = v18;
          break;
        case 'F':
          fan_pwm_fixed = 1;
          break;
        default:
LABEL_8:
          V_LOCK(result);
          v3 = logfmt_raw((int)v33, 0x1000u);
          V_UNLOCK(v3);
          v4 = 493;
          goto LABEL_9;
      }
      return result;
    }
    if ( result == 111 )
    {
      result = set_url(s);
      if ( !result )
        return result;
      V_LOCK(result);
      v10 = logfmt_raw((int)v33, 0x1000u);
      V_UNLOCK(v10);
      v11 = 428;
      v12 = g_zc;
      LOWORD(v13) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroo"
                                      "t/tmp/release/build/godminer-origin_godminer-new/god-miner.c";
    }
    else
    {
      if ( result != 112 )
      {
        if ( result == 104 )
        {
          V_LOCK(104);
          v5 = logfmt_raw((int)v33, 0x1000u);
          V_UNLOCK(v5);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/god-miner.c",
            142,
            "parse_arg",
            9,
            480,
            40,
            v33);
          exit(0);
        }
        goto LABEL_8;
      }
      result = set_pass(s);
      if ( !result )
      {
        if ( *s )
        {
          v21 = (unsigned __int8)s[1];
          *s = 120;
          v22 = s + 1;
          if ( v21 )
          {
            do
              *v22++ = 0;
            while ( *v22 );
          }
        }
        return result;
      }
      V_LOCK(result);
      v26 = logfmt_raw((int)v33, 0x1000u);
      V_UNLOCK(v26);
      v11 = 407;
      v12 = g_zc;
      LOWORD(v13) = 1740;
    }
LABEL_48:
    HIWORD(v13) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/"
                                "release/build/godminer-origin_godminer-new/god-miner.c" >> 16;
    return zlog(v12, v13, 142, "parse_arg", 9, v11, 100, v33);
  }
  if ( result > 1033 )
  {
    if ( result == 1035 )
    {
      v24 = strtol(s, 0, 10);
      V_LOCK(v24);
      v25 = logfmt_raw((int)v33, 0x1000u);
      V_UNLOCK(v25);
      result = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/g"
                 "odminer-origin_godminer-new/god-miner.c",
                 142,
                 "parse_arg",
                 9,
                 470,
                 40,
                 v33);
      if ( v24 > 1 )
      {
        V_LOCK(result);
        v27 = logfmt_raw((int)v33, 0x1000u);
        V_UNLOCK(v27);
        return zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/g"
                 "odminer-origin_godminer-new/god-miner.c",
                 142,
                 "parse_arg",
                 9,
                 472,
                 100,
                 v33);
      }
      else
      {
        opt_custom_power_mode = v24;
      }
    }
    else if ( result >= 1035 )
    {
      if ( result != 1036 )
        goto LABEL_8;
    }
    else
    {
      result = strtol(s, 0, 10);
      if ( (unsigned int)result > 0x64 )
      {
        V_LOCK(result);
        v14 = logfmt_raw((int)v33, 0x1000u);
        V_UNLOCK(v14);
        v4 = 463;
LABEL_9:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/god-miner.c",
          142,
          "parse_arg",
          9,
          v4,
          100,
          v33);
        exit(1);
      }
      fan_pwm = result;
    }
  }
  else if ( result < 1032 )
  {
    switch ( result )
    {
      case 122:
        if ( opt_zlog_conf_file )
          free((void *)opt_zlog_conf_file);
        result = (int)_strdup(s);
        opt_zlog_conf_file = result;
        break;
      case 1030:
        opt_api_remote = 1;
        break;
      case 118:
        opt_version_path = (int)s;
        break;
      default:
        goto LABEL_8;
    }
  }
  return result;
}
