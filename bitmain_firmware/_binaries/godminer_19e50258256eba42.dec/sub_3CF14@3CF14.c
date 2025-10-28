int __fastcall sub_3CF14(_QWORD *a1)
{
  int result; // r0
  _BYTE v3[24]; // [sp+1Ch] [bp-1018h] BYREF
  unsigned __int16 v4; // [sp+101Eh] [bp-16h] BYREF
  float v5; // [sp+1020h] [bp-14h]
  int v6; // [sp+1024h] [bp-10h]
  unsigned __int16 v7; // [sp+102Ah] [bp-Ah]
  FILE *stream; // [sp+102Ch] [bp-8h]

  v7 = 0;
  v6 = 0;
  stream = fopen("/nvdata/sweep_result_v2.txt", "r");
  if ( stream )
  {
    while ( _isoc99_fscanf(stream, "%hu", &v4) == 1 && v6 <= 19 )
    {
      if ( v4 <= 1u )
      {
        v7 += 400;
      }
      else
      {
        v5 = (float)((float)((float)v4 - 1.0) * 12.5) + 400.0;
        v7 += (unsigned int)v5;
      }
    }
    fclose(stream);
    v7 /= 0x12u;
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "freqs_total: %u", v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/http_test.c",
      139,
      "get_sale_hashrate",
      17,
      172,
      20,
      v3);
    result = api_get_eeprom_chip_bin(0);
    if ( result == 1 || (result = api_get_eeprom_chip_bin(0), result == 2) )
    {
      if ( v7 < 0x23Cu )
      {
        if ( v7 <= 0x21Eu )
        {
          if ( v7 <= 0x201u )
            *a1 = 0x41FA13B860000000LL;
          else
            *a1 = 0x4200C388D0000000LL;
        }
        else
        {
          *a1 = 0x4201B1F3F8000000LL;
        }
      }
      else
      {
        *a1 = 0x4202A05F20000000LL;
      }
    }
    else
    {
      result = api_get_eeprom_chip_bin(0);
      if ( result == 3 )
      {
        if ( v7 < 0x248u )
        {
          if ( v7 <= 0x22Au )
          {
            if ( v7 <= 0x20Du )
              *a1 = 0x41FA13B860000000LL;
            else
              *a1 = 0x4200C388D0000000LL;
          }
          else
          {
            *a1 = 0x4201B1F3F8000000LL;
          }
        }
        else
        {
          *a1 = 0x4202A05F20000000LL;
        }
      }
      else
      {
        result = api_get_eeprom_chip_bin(0);
        if ( result == 4 || (result = api_get_eeprom_chip_bin(0), result == 5) )
        {
          if ( v7 < 0x248u )
          {
            if ( v7 <= 0x22Au )
            {
              if ( v7 <= 0x20Du )
                *a1 = 0x41FA13B860000000LL;
              else
                *a1 = 0x4200C388D0000000LL;
            }
            else
            {
              *a1 = 0x4201B1F3F8000000LL;
            }
          }
          else
          {
            *a1 = 0x4202A05F20000000LL;
          }
        }
        else
        {
          *a1 = 0x41FA13B860000000LL;
        }
      }
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "Error opening /nvdata/sweep_result_v2.txt");
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/http_test.c",
             139,
             "get_sale_hashrate",
             17,
             158,
             60,
             v3);
  }
  return result;
}
