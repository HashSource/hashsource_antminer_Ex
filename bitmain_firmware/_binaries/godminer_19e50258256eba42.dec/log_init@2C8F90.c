int log_init()
{
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0

  if ( !opt_zlog_conf_file )
    opt_zlog_conf_file = (int)strdup("/etc/zlog.conf");
  if ( zlog_init(opt_zlog_conf_file) )
  {
    puts("zlog init failed");
    return -1;
  }
  else
  {
    g_zc = zlog_get_category("miner_zc");
    if ( g_zc )
    {
      g_temp_zc = zlog_get_category("miner_temp_zc");
      if ( g_temp_zc )
      {
        g_fan_zc = zlog_get_category("miner_fan_zc");
        if ( g_fan_zc )
        {
          g_hash_zc = zlog_get_category("miner_hash_zc");
          if ( g_hash_zc )
          {
            puts("zlog init OK!");
            return 0;
          }
          else
          {
            v4 = puts("zlog get miner_hash_zc category fail");
            zlog_fini(v4);
            return -4;
          }
        }
        else
        {
          v3 = puts("zlog get miner_fan_zc category fail");
          zlog_fini(v3);
          return -3;
        }
      }
      else
      {
        v2 = puts("zlog get miner_temp_zc category fail");
        zlog_fini(v2);
        return -3;
      }
    }
    else
    {
      v1 = puts("zlog get miner_zc category fail");
      zlog_fini(v1);
      return -2;
    }
  }
}
