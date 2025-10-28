int sub_29B6C()
{
  int result; // r0
  _BYTE v1[32]; // [sp+14h] [bp-1020h] BYREF
  unsigned __int16 v2; // [sp+1016h] [bp-1Eh] BYREF
  float v3; // [sp+1018h] [bp-1Ch]
  unsigned __int16 v4; // [sp+101Eh] [bp-16h]
  FILE *stream; // [sp+1020h] [bp-14h]
  int v6; // [sp+1024h] [bp-10h]
  __int64 v7; // [sp+1028h] [bp-Ch]

  v4 = 0;
  v6 = 0;
  v7 = 0;
  stream = fopen("/nvdata/sweep_result_v2.txt", "r");
  if ( stream )
  {
    while ( _isoc99_fscanf(stream, "%hu", &v2) == 1 && v6 <= 19 )
    {
      if ( v2 <= 1u )
      {
        v4 += 400;
      }
      else
      {
        v3 = (float)((float)((float)v2 - 1.0) * 12.5) + 400.0;
        v4 += (unsigned int)v3;
      }
    }
    fclose(stream);
    v4 /= 0x12u;
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, "freqs_total: %u", v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_whole_machine_theory_hashrate",
      33,
      314,
      20,
      v1);
    result = api_get_eeprom_chip_bin(0);
    if ( result == 1 || (result = api_get_eeprom_chip_bin(0), result == 2) )
    {
      if ( v4 < 0x23Cu )
      {
        if ( v4 <= 0x21Eu )
        {
          if ( v4 <= 0x201u )
            v7 = 0x41FA13B860000000LL;
          else
            v7 = 0x4200C388D0000000LL;
        }
        else
        {
          v7 = 0x4201B1F3F8000000LL;
        }
      }
      else
      {
        v7 = 0x4202A05F20000000LL;
      }
    }
    else
    {
      result = api_get_eeprom_chip_bin(0);
      if ( result == 3 )
      {
        if ( v4 < 0x248u )
        {
          if ( v4 <= 0x22Au )
          {
            if ( v4 <= 0x20Du )
              v7 = 0x41FA13B860000000LL;
            else
              v7 = 0x4200C388D0000000LL;
          }
          else
          {
            v7 = 0x4201B1F3F8000000LL;
          }
        }
        else
        {
          v7 = 0x4202A05F20000000LL;
        }
      }
      else
      {
        result = api_get_eeprom_chip_bin(0);
        if ( result == 4 || (result = api_get_eeprom_chip_bin(0), result == 5) )
        {
          if ( v4 < 0x248u )
          {
            if ( v4 <= 0x22Au )
            {
              if ( v4 <= 0x20Du )
                v7 = 0x41FA13B860000000LL;
              else
                v7 = 0x4200C388D0000000LL;
            }
            else
            {
              v7 = 0x4201B1F3F8000000LL;
            }
          }
          else
          {
            v7 = 0x4202A05F20000000LL;
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v1, 0x1000u, 0, "wrong BIN");
          V_UNLOCK();
          return zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/go"
                   "dminer-origin_godminer-new/api_new.c",
                   137,
                   "get_whole_machine_theory_hashrate",
                   33,
                   346,
                   100,
                   v1);
        }
      }
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, "Error opening /nvdata/sweep_result_v2.txt");
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/api_new.c",
             137,
             "get_whole_machine_theory_hashrate",
             33,
             300,
             60,
             v1);
  }
  return result;
}
