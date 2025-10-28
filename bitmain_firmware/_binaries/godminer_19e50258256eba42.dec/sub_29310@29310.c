FILE *sub_29310()
{
  double v0; // d0
  FILE *v1; // r3
  double v3; // [sp+10h] [bp-1024h]
  _BYTE v4[24]; // [sp+1Ch] [bp-1018h] BYREF
  unsigned __int8 v5; // [sp+101Eh] [bp-16h] BYREF
  char ptr; // [sp+101Fh] [bp-15h] BYREF
  double v7; // [sp+1020h] [bp-14h]
  FILE *s; // [sp+102Ch] [bp-8h]

  ptr = 0;
  v3 = v0 * 0.959999979;
  if ( v0 * 0.959999979 > 8200.0 )
  {
    if ( v3 > 8400.0 )
    {
      if ( v3 > 8600.0 )
      {
        if ( v3 > 8800.0 )
        {
          if ( v3 > 9000.0 )
          {
            if ( v3 > 9200.0 )
            {
              if ( v3 > 9400.0 )
              {
                if ( v3 > 9600.0 )
                {
                  if ( v3 > 9800.0 )
                  {
                    if ( v3 > 10000.0 )
                    {
                      if ( v3 > 10200.0 )
                        ptr = 11;
                      else
                        ptr = 10;
                    }
                    else
                    {
                      ptr = 9;
                    }
                  }
                  else
                  {
                    ptr = 8;
                  }
                }
                else
                {
                  ptr = 7;
                }
              }
              else
              {
                ptr = 6;
              }
            }
            else
            {
              ptr = 5;
            }
          }
          else
          {
            ptr = 4;
          }
        }
        else
        {
          ptr = 3;
        }
      }
      else
      {
        ptr = 2;
      }
    }
    else
    {
      ptr = 1;
    }
  }
  else
  {
    ptr = 0;
  }
  s = fopen("/nvdata/level", "wb");
  if ( s )
  {
    fwrite(&ptr, 1u, 1u, s);
    fclose(s);
    s = fopen("/nvdata/level", "rb");
    v1 = s;
    if ( s )
    {
      v1 = (FILE *)fread(&v5, 1u, 1u, s);
      if ( v1 == (FILE *)1 )
      {
        v7 = ((double)v5 * 200.0 + 8000.0) * 1000.0 * 1000.0;
        V_LOCK();
        logfmt_raw(v4, 0x1000u, 0, "hashrate_w: %lf", v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/api_new.c",
          137,
          "write_eeprom_pt3_eth_2282",
          25,
          225,
          40,
          v4);
        fclose(s);
        return 0;
      }
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "pt3 hashrate opening file failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "write_eeprom_pt3_eth_2282",
      25,
      231,
      100,
      v4);
    return (FILE *)-1;
  }
  return v1;
}
