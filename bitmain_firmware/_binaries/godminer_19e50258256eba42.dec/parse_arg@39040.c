char *__fastcall parse_arg(char *result, char *a2)
{
  int v3[4]; // [sp+1Ch] [bp-1110h] BYREF
  _BYTE v4[160]; // [sp+78h] [bp-10B4h] BYREF
  _BYTE v5[20]; // [sp+118h] [bp-1014h] BYREF
  const json_t *file; // [sp+1118h] [bp-14h]
  int i; // [sp+111Ch] [bp-10h]
  size_t n; // [sp+1120h] [bp-Ch]
  char *v9; // [sp+1124h] [bp-8h]

  if ( result == (char *)112 )
  {
    v9 = (char *)set_pass(a2);
    if ( !v9 )
      return sub_37FA0(a2);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "%s", v9);
    V_UNLOCK();
    return (char *)zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/"
                     "godminer-origin_godminer-new/god-miner.c",
                     139,
                     "parse_arg",
                     9,
                     345,
                     100,
                     v5);
  }
  if ( (int)result > 112 )
  {
    if ( result == (char *)1032 )
      return result;
    if ( (int)result > 1032 )
    {
      if ( result == (char *)1034 )
      {
        result = (char *)atoi(a2);
        n = (size_t)result;
        if ( (int)result < 0 || (int)n > 100 )
        {
          V_LOCK();
          logfmt_raw(v5, 0x1000u, 0, "fan_pwm value error!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/god-miner.c",
            139,
            "parse_arg",
            9,
            401,
            100,
            v5);
          exit(1);
        }
        fan_pwm = n;
        return result;
      }
      if ( (int)result < 1034 )
        return result;
      if ( result == (char *)1035 )
      {
        n = atoi(a2);
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, "work mode: %d!", n);
        V_UNLOCK();
        result = (char *)zlog(
                           g_zc,
                           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/"
                           "build/godminer-origin_godminer-new/god-miner.c",
                           139,
                           "parse_arg",
                           9,
                           408,
                           40,
                           v5);
        if ( n < 2 )
        {
          opt_custom_power_mode = n;
        }
        else
        {
          V_LOCK();
          logfmt_raw(v5, 0x1000u, 0, "power mode value error!");
          V_UNLOCK();
          return (char *)zlog(
                           g_zc,
                           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/"
                           "build/godminer-origin_godminer-new/god-miner.c",
                           139,
                           "parse_arg",
                           9,
                           410,
                           100,
                           v5);
        }
        return result;
      }
      if ( result == (char *)1036 )
        return result;
    }
    else
    {
      if ( result == (char *)118 )
      {
        opt_version_path = (int)a2;
        return result;
      }
      if ( (int)result > 118 )
      {
        if ( result == (char *)122 )
        {
          if ( opt_zlog_conf_file )
            free((void *)opt_zlog_conf_file);
          result = strdup(a2);
          opt_zlog_conf_file = (int)result;
          return result;
        }
        if ( result == (char *)1030 )
        {
          opt_api_remote = 1;
          return result;
        }
      }
      else if ( result == (char *)117 )
      {
        result = (char *)set_user(a2);
        v9 = result;
        if ( result )
        {
          V_LOCK();
          logfmt_raw(v5, 0x1000u, 0, "%s", v9);
          V_UNLOCK();
          return (char *)zlog(
                           g_zc,
                           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/"
                           "build/godminer-origin_godminer-new/god-miner.c",
                           139,
                           "parse_arg",
                           9,
                           358,
                           100,
                           v5);
        }
        return result;
      }
    }
    goto LABEL_76;
  }
  if ( result == (char *)99 )
  {
    file = json_load_file(a2, 0, (json_error_t *)v3);
    if ( file && !*(_DWORD *)file )
    {
      parse_config(file);
      sub_37BA0((int)file);
    }
    else if ( v3[0] >= 0 )
    {
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "%s:%d: %s", a2, v3[0], v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "parse_arg",
        9,
        320,
        100,
        v5);
    }
    else
    {
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "%s", v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "parse_arg",
        9,
        318,
        100,
        v5);
    }
    if ( default_config )
    {
      free((void *)default_config);
      default_config = 0;
    }
    result = strdup(a2);
    default_config = (int)result;
    return result;
  }
  if ( (int)result > 99 )
  {
    if ( result == (char *)105 )
    {
      asic_select_1 = strtol(a2, 0, 10);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "asic_select_1: %u", (unsigned __int16)asic_select_1);
      V_UNLOCK();
      return (char *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/buil"
                       "d/godminer-origin_godminer-new/god-miner.c",
                       139,
                       "parse_arg",
                       9,
                       335,
                       40,
                       v5);
    }
    if ( (int)result > 105 )
    {
      if ( result == (char *)108 )
      {
        case_select = strtol(a2, 0, 10);
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, "case_select: %d", (unsigned __int8)case_select);
        V_UNLOCK();
        return (char *)zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/bu"
                         "ild/godminer-origin_godminer-new/god-miner.c",
                         139,
                         "parse_arg",
                         9,
                         308,
                         40,
                         v5);
      }
      if ( result == (char *)111 )
      {
        result = (char *)set_url(a2);
        v9 = result;
        if ( result )
        {
          V_LOCK();
          logfmt_raw(v5, 0x1000u, 0, "%s", v9);
          V_UNLOCK();
          return (char *)zlog(
                           g_zc,
                           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/"
                           "build/godminer-origin_godminer-new/god-miner.c",
                           139,
                           "parse_arg",
                           9,
                           366,
                           100,
                           v5);
        }
        return result;
      }
    }
    else if ( result == (char *)104 )
    {
      V_LOCK();
      logfmt_raw(
        v5,
        0x1000u,
        0,
        "Usage: GODMINER [OPTIONS]\n"
        "Options:\n"
        "  -a, --algo=ALGO       specify the algorithm to use\n"
        "                          eth_1798         ethash\n"
        "                          ckb_2040         eaglesong\n"
        "                          ckb_2042         eaglesong\n"
        "                          kda_2110         blake2s\n"
        "                          dcr_1727         blaker14\n"
        "                          hns_2130         blake2s\n"
        "                          dash_1766        x11\n"
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
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "parse_arg",
        9,
        418,
        40,
        v5);
      exit(0);
    }
    goto LABEL_76;
  }
  if ( result == (char *)80 )
  {
    opt_protocol = 1;
    return result;
  }
  if ( (int)result > 80 )
  {
    if ( result == (char *)97 )
    {
      for ( i = 0; i <= 12; ++i )
      {
        result = (char *)strlen(off_59755C[i]);
        n = (size_t)result;
        if ( result )
        {
          result = (char *)strncasecmp(a2, off_59755C[i], n);
          if ( !result && !a2[n] )
          {
            opt_algo = i;
            break;
          }
        }
      }
      if ( i == 13 )
      {
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, "Unknown algo parameter '%s'", a2);
        V_UNLOCK();
        return (char *)zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/bu"
                         "ild/godminer-origin_godminer-new/god-miner.c",
                         139,
                         "parse_arg",
                         9,
                         297,
                         100,
                         v5);
      }
      return result;
    }
    if ( result == (char *)98 )
    {
      asic_select = strtol(a2, 0, 10);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "asic_select: %d", (unsigned __int8)asic_select);
      V_UNLOCK();
      return (char *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/buil"
                       "d/godminer-origin_godminer-new/god-miner.c",
                       139,
                       "parse_arg",
                       9,
                       339,
                       40,
                       v5);
    }
LABEL_76:
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "unknow config parameter!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "parse_arg",
      9,
      431,
      100,
      v5);
    exit(1);
  }
  if ( result != (char *)70 )
    goto LABEL_76;
  fan_pwm_fixed = 1;
  return result;
}
