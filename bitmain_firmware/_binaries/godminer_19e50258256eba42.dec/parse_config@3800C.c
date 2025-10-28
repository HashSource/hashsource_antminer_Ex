void __fastcall parse_config(const json_t *a1)
{
  double v1; // d0
  const char *v2; // r0
  int v3; // r0
  size_t v4; // r0
  _BYTE v6[56]; // [sp+1Ch] [bp-1038h] BYREF
  char v7[16]; // [sp+101Ch] [bp-38h] BYREF
  char s[16]; // [sp+102Ch] [bp-28h] BYREF
  const json_t *v9; // [sp+103Ch] [bp-18h]
  void *ptr; // [sp+1040h] [bp-14h]
  const json_t *v11; // [sp+1044h] [bp-10h]
  size_t j; // [sp+1048h] [bp-Ch]
  int i; // [sp+104Ch] [bp-8h]

  for ( i = 0; i <= 19 && (&off_34FC3C)[4 * i]; ++i )
  {
    v11 = json_object_get(a1, (&off_34FC3C)[4 * i]);
    if ( v11 )
    {
      if ( (&off_34FC3C)[4 * i + 1] && *(_DWORD *)v11 == 2 )
      {
        v2 = json_string_value(v11);
        ptr = strdup(v2);
        if ( !ptr )
          return;
        parse_arg((&off_34FC3C)[4 * i + 3], (char *)ptr);
        free(ptr);
      }
      else if ( (&off_34FC3C)[4 * i + 1] && *(_DWORD *)v11 == 3 )
      {
        v3 = json_integer_value(v11);
        sprintf(s, "%d", v3);
        parse_arg((&off_34FC3C)[4 * i + 3], s);
      }
      else if ( (&off_34FC3C)[4 * i + 1] && *(_DWORD *)v11 == 4 )
      {
        json_real_value(v11);
        sprintf(v7, "%f", v1);
        parse_arg((&off_34FC3C)[4 * i + 3], v7);
      }
      else if ( (&off_34FC3C)[4 * i + 1] && *(_DWORD *)v11 == 1 )
      {
        for ( j = 0; ; ++j )
        {
          v4 = json_array_size(v11);
          if ( j >= v4 )
            break;
          v9 = json_array_get(v11, j);
          if ( !v9 )
            break;
          if ( *(_DWORD *)v9 )
          {
            V_LOCK();
            logfmt_raw(v6, 0x1000u, 0, "JSON %s array value invalid", (&off_34FC3C)[4 * i]);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/god-miner.c",
              139,
              "parse_config",
              12,
              177,
              100,
              v6);
          }
          else
          {
            parse_config(v9);
          }
        }
      }
      else if ( (&off_34FC3C)[4 * i + 1] )
      {
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "JSON option %s invalid", (&off_34FC3C)[4 * i]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/god-miner.c",
          139,
          "parse_config",
          12,
          185,
          100,
          v6);
      }
      else if ( *(_DWORD *)v11 == 5 )
      {
        parse_arg((&off_34FC3C)[4 * i + 3], byte_34FE2C);
      }
    }
  }
}
