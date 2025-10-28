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
  int v11; // r12
  int v12; // r2
  int v13; // r0
  int v14; // r1
  int v15; // r0
  const char *v16; // r7
  char **v17; // r8
  size_t v18; // r6
  int v19; // r5
  const char *v20; // t1
  int v21; // r0
  int v22; // r3
  char *v23; // r4
  int v24; // r0
  unsigned int v25; // r0
  bool v26; // cc
  int v27; // r0
  int v28; // r0
  int v29; // r0
  unsigned int *v30; // r3
  unsigned int v31; // r2
  unsigned int v32; // r2
  int v33; // r0
  int v34[23]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v35[4096]; // [sp+110h] [bp-1000h] BYREF

  if ( result == 117 )
  {
    result = set_user(s);
    if ( !result )
      return result;
    V_LOCK(result);
    v24 = logfmt_raw((int)v35, 0x1000u);
    V_UNLOCK(v24);
    v11 = 100;
    v12 = 478;
    v13 = g_zc;
    LOWORD(v14) = 1248;
    goto LABEL_49;
  }
  if ( result <= 117 )
  {
    if ( result == 99 )
    {
      file = (_DWORD *)json_load_file(s, 0, v34);
      v7 = file;
      if ( file && !*file )
      {
        parse_config((int)file);
        if ( v7[1] != -1 )
        {
          v30 = v7 + 1;
          __dmb(0xBu);
          do
          {
            v31 = __ldrex(v30);
            v32 = v31 - 1;
          }
          while ( __strex(v32, v30) );
          if ( !v32 )
            json_delete(v7);
        }
      }
      else
      {
        if ( v34[0] < 0 )
        {
          V_LOCK(file);
          v29 = logfmt_raw((int)v35, 0x1000u);
          V_UNLOCK(v29);
          v9 = 446;
        }
        else
        {
          V_LOCK(file);
          v8 = logfmt_raw((int)v35, 0x1000u);
          V_UNLOCK(v8);
          v9 = 448;
        }
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "parse_arg",
          9,
          v9,
          100,
          v35);
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
          v16 = "grin29";
          v17 = off_12FEA0;
          v18 = 6;
          v19 = 0;
          while ( 1 )
          {
            if ( v18 )
            {
              result = strncasecmp(s, v16, v18);
              if ( !result && !s[v18] )
                break;
            }
            if ( ++v19 == 12 )
            {
              V_LOCK(result);
              v21 = logfmt_raw((int)v35, 0x1000u);
              V_UNLOCK(v21);
              v11 = 100;
              v12 = 429;
              goto LABEL_48;
            }
            v20 = v17[1];
            ++v17;
            v16 = v20;
            result = strlen(v20);
            v18 = result;
          }
          opt_algo = v19;
          break;
        case 'F':
          fan_pwm_fixed = 1;
          break;
        default:
LABEL_8:
          V_LOCK(result);
          v3 = logfmt_raw((int)v35, 0x1000u);
          V_UNLOCK(v3);
          v4 = 551;
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
      v10 = logfmt_raw((int)v35, 0x1000u);
      V_UNLOCK(v10);
      v11 = 100;
      v12 = 486;
      v13 = g_zc;
      LOWORD(v14) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tm"
                                      "p/release/build/godminer-origin_master/god-miner.c";
    }
    else
    {
      if ( result != 112 )
      {
        if ( result == 104 )
        {
          V_LOCK(104);
          v5 = logfmt_raw((int)v35, 0x1000u);
          V_UNLOCK(v5);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/god-miner.c",
            132,
            "parse_arg",
            9,
            538,
            40,
            v35);
          exit(0);
        }
        goto LABEL_8;
      }
      result = set_pass(s);
      if ( !result )
      {
        if ( *s )
        {
          v22 = (unsigned __int8)s[1];
          *s = 120;
          v23 = s + 1;
          if ( v22 )
          {
            do
              *v23++ = 0;
            while ( *v23 );
          }
        }
        return result;
      }
      V_LOCK(result);
      v28 = logfmt_raw((int)v35, 0x1000u);
      V_UNLOCK(v28);
      v11 = 100;
      v12 = 465;
      v13 = g_zc;
      LOWORD(v14) = 1248;
    }
LABEL_49:
    HIWORD(v14) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/god-miner.c" >> 16;
    return zlog(v13, v14, 132, "parse_arg", 9, v12, v11, v35);
  }
  if ( result > 1033 )
  {
    if ( result == 1035 )
    {
      v25 = strtol(s, 0, 10);
      v26 = v25 > 3;
      if ( v25 != 3 )
        v26 = v25 > 1;
      if ( !v26 )
      {
        opt_custom_power_mode = v25;
        V_LOCK(v25);
        v27 = logfmt_raw((int)v35, 0x1000u);
        V_UNLOCK(v27);
        v11 = 60;
        v12 = 533;
LABEL_48:
        v13 = g_zc;
        LOWORD(v14) = 1248;
        goto LABEL_49;
      }
      V_LOCK(v25);
      v33 = logfmt_raw((int)v35, 0x1000u);
      V_UNLOCK(v33);
      v4 = 529;
    }
    else
    {
      if ( result >= 1035 )
      {
        if ( result != 1036 )
          goto LABEL_8;
        return result;
      }
      result = strtol(s, 0, 10);
      if ( (unsigned int)result <= 0x64 )
      {
        fan_pwm = result;
        return result;
      }
      V_LOCK(result);
      v15 = logfmt_raw((int)v35, 0x1000u);
      V_UNLOCK(v15);
      v4 = 521;
    }
LABEL_9:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "parse_arg",
      9,
      v4,
      100,
      v35);
    exit(1);
  }
  if ( result < 1032 )
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
