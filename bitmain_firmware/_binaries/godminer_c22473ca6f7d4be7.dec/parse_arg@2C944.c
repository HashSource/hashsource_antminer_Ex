int __fastcall parse_arg(int result, char *s)
{
  int v3; // lr
  double *file; // r0
  double *v5; // r5
  int v6; // r2
  int v7; // r5
  int v8; // r2
  int v9; // r0
  int v10; // r1
  const char *v11; // r7
  char **v12; // r8
  size_t v13; // r6
  int v14; // r5
  const char *v15; // t1
  int v16; // r5
  int v17; // r5
  int v18; // r3
  char *v19; // r4
  unsigned int *v20; // r3
  unsigned int v21; // r2
  unsigned int v22; // r2
  int v23[23]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v24[160]; // [sp+70h] [bp-10A0h] BYREF
  char v25[4096]; // [sp+110h] [bp-1000h] BYREF

  if ( result == 117 )
  {
    result = set_user(s);
    v16 = result;
    if ( !result )
      return result;
    V_LOCK();
    logfmt_raw(v25, 0x1000u, 0, "%s", v16);
    V_UNLOCK();
    v8 = 472;
    v9 = g_zc;
    LOWORD(v10) = -4392;
    goto LABEL_47;
  }
  if ( result <= 117 )
  {
    if ( result == 99 )
    {
      file = json_load_file(s, 0, (char *)v23);
      v5 = file;
      if ( file && !*(_DWORD *)file )
      {
        parse_config(file);
        if ( *((_DWORD *)v5 + 1) != -1 )
        {
          v20 = (unsigned int *)v5 + 1;
          __dmb(0xBu);
          do
          {
            v21 = __ldrex(v20);
            v22 = v21 - 1;
          }
          while ( __strex(v22, v20) );
          if ( !v22 )
            json_delete(v5);
        }
      }
      else
      {
        if ( v23[0] < 0 )
        {
          V_LOCK();
          logfmt_raw(v25, 0x1000u, 0, "%s", v24);
          V_UNLOCK();
          v6 = 440;
        }
        else
        {
          V_LOCK();
          logfmt_raw(v25, 0x1000u, 0, "%s:%d: %s", s, v23[0], v24);
          V_UNLOCK();
          v6 = 442;
        }
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "parse_arg",
          9,
          v6,
          100,
          v25);
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
          v11 = "grin29";
          v12 = off_12E898;
          v13 = 6;
          v14 = 0;
          while ( 1 )
          {
            if ( v13 )
            {
              result = strncasecmp(s, v11, v13);
              if ( !result && !s[v13] )
                break;
            }
            if ( ++v14 == 12 )
            {
              V_LOCK();
              logfmt_raw(v25, 0x1000u, 0, "Unknown algo parameter '%s'", s);
              V_UNLOCK();
              v8 = 423;
              v9 = g_zc;
              LOWORD(v10) = -4392;
              goto LABEL_47;
            }
            v15 = v12[1];
            ++v12;
            v11 = v15;
            v13 = strlen(v15);
          }
          opt_algo = v14;
          break;
        case 'F':
          fan_pwm_fixed = 1;
          break;
        default:
LABEL_8:
          V_LOCK();
          logfmt_raw(v25, 0x1000u, 0, "unknow config parameter!");
          V_UNLOCK();
          v3 = 538;
          goto LABEL_9;
      }
      return result;
    }
    if ( result == 111 )
    {
      result = set_url(s);
      v7 = result;
      if ( !result )
        return result;
      V_LOCK();
      logfmt_raw(v25, 0x1000u, 0, "%s", v7);
      V_UNLOCK();
      v8 = 480;
      v9 = g_zc;
      LOWORD(v10) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tm"
                                      "p/release/build/godminer-origin_master/god-miner.c";
    }
    else
    {
      if ( result != 112 )
      {
        if ( result == 104 )
        {
          V_LOCK();
          logfmt_raw(
            v25,
            0x1000u,
            0,
            "Usage: GODMINER [OPTIONS]\n"
            "Options:\n"
            "  -a, --algo=ALGO       specify the algorithm to use\n"
            "                          beam         Equihash(150,5)\n"
            "                          grin29       Cuckaroo29\n"
            "                          vbk          VBlake2\n"
            "  -o, --url=URL         URL of mining server\n"
            "  -u, --user=USERNAME   username for mining server\n"
            "  -p, --pass=PASSWORD   password for mining server\n"
            "  -P, --protocol        verbose dump of protocol-level activities\n"
            "      --api-remote      Allow remote control\n"
            "  -c, --config=FILE     load a JSON-format configuration file\n"
            "  -v, --version         display version information and exit\n"
            "  -F, --bitmain-fan-ctrl  set if fixed fan's pwm\n"
            "      --bitmain-fan-pwm=N set pwm value when fan pwm fixed\n"
            "      --bitmain-freq=N  set working freq\n"
            "      --bitmain-voltage=N  set working power voltage\n"
            "  -z, --zlog=FILE       load a zlog configuration file\n"
            "  -h, --help            display this help text and exit\n");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/god-miner.c",
            132,
            "parse_arg",
            9,
            525,
            40,
            v25);
          exit(0);
        }
        goto LABEL_8;
      }
      result = set_pass(s);
      v17 = result;
      if ( !result )
      {
        if ( *s )
        {
          v18 = (unsigned __int8)s[1];
          *s = 120;
          v19 = s + 1;
          if ( v18 )
          {
            do
              *v19++ = 0;
            while ( *v19 );
          }
        }
        return result;
      }
      V_LOCK();
      logfmt_raw(v25, 0x1000u, 0, "%s", v17);
      V_UNLOCK();
      v8 = 459;
      v9 = g_zc;
      LOWORD(v10) = -4392;
    }
LABEL_47:
    HIWORD(v10) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/god-miner.c" >> 16;
    return zlog(v9, v10, 132, "parse_arg", 9, v8, 100, v25);
  }
  if ( result > 1033 )
  {
    if ( result == 1034 )
    {
      result = strtol(s, 0, 10);
      if ( (unsigned int)result > 0x64 )
      {
        V_LOCK();
        logfmt_raw(v25, 0x1000u, 0, "fan_pwm value error!");
        V_UNLOCK();
        v3 = 515;
LABEL_9:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "parse_arg",
          9,
          v3,
          100,
          v25);
        exit(1);
      }
      fan_pwm = result;
    }
    else if ( result > 1036 )
    {
      goto LABEL_8;
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
