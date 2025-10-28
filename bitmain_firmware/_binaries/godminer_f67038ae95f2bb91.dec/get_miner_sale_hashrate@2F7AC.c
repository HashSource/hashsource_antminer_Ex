int get_miner_sale_hashrate()
{
  double v0; // d0
  int v1; // r4
  char *all_created_runtime; // r5
  double v3; // d9
  double v4; // d8
  int v5; // r6
  char *v6; // r5
  int v7; // t1
  _BYTE *v8; // r5
  _BYTE *v9; // r6
  int i; // r4
  int v11; // r3
  int v12; // r3
  int j; // r4
  int v14; // r3
  int v15; // r3
  int v16; // r0
  unsigned int v17; // r4
  int result; // r0
  int v19; // [sp+0h] [bp-218h] BYREF
  unsigned int v20; // [sp+4h] [bp-214h]
  double v21[2]; // [sp+8h] [bp-210h] BYREF
  char v22[12]; // [sp+1Ch] [bp-1FCh] BYREF
  _BYTE v23[496]; // [sp+28h] [bp-1F0h] BYREF

  v1 = 0;
  v19 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v19);
  v20 = 1;
  get_miner_elapsed_time();
  v3 = v0;
  get_miner_6060info_status(v23);
  v4 = 0.0;
  v21[0] = 0.0;
  if ( v19 > 0 )
  {
    v6 = all_created_runtime - 4;
    v5 = 0;
    do
    {
      v7 = *((_DWORD *)v6 + 1);
      v6 += 4;
      ++v1;
      v5 |= (*(int (**)(void))(v7 + 136))();
      v4 = v4 + v21[1];
    }
    while ( v19 > v1 );
  }
  else
  {
    v5 = 0;
  }
  if ( (unsigned int)(opt_algo - 6) <= 1 )
    v3 = v0 - 2700.0;
  if ( v3 < 1.0 )
  {
    result = 0;
    freq_scan_status = 0;
    return result;
  }
  if ( v5 )
  {
    freq_scan_status = 2;
    strcpy((char *)search_failed_info, "R:1");
    if ( !v23[0] )
      goto LABEL_10;
    goto LABEL_42;
  }
  if ( v23[0] )
  {
LABEL_42:
    freq_scan_status = 2;
    strcpy((char *)search_failed_info, "P:1");
  }
LABEL_10:
  v8 = v23;
  v9 = v23;
  for ( i = 0; i != 8; ++i )
  {
    while ( 1 )
    {
      v11 = (unsigned __int8)v9[24];
      v9 += 8;
      if ( v11 )
        break;
      if ( ++i == 8 )
        goto LABEL_14;
    }
    v12 = i;
    freq_scan_status = 2;
    strcpy((char *)search_failed_info, "R:1");
    snprintf((char *)search_failed_info, 0x100u, "F%d:1", v12);
  }
LABEL_14:
  for ( j = 0; j != 16; ++j )
  {
    while ( 1 )
    {
      v14 = (unsigned __int8)v8[216];
      v8 += 8;
      if ( v14 )
        break;
      if ( ++j == 16 )
        goto LABEL_18;
    }
    v15 = j;
    strcpy((char *)search_failed_info, "R:1");
    freq_scan_status = 2;
    snprintf((char *)search_failed_info, 0x100u, "J%d:1", v15);
  }
LABEL_18:
  v16 = frontend_runtime_instance();
  format_hashrate_double(*(const char **)(*(_DWORD *)(v16 + 72) + 16), v21, v22);
  v17 = v20;
  result = sub_144458((int)v21[0], v20) * v17;
  switch ( opt_algo )
  {
    case 6:
      result -= 50;
      if ( result > 3729 )
        return 3780;
LABEL_29:
      if ( (unsigned int)(result - 3630) <= 0x63 )
        return 3680;
      if ( (unsigned int)(result - 3530) <= 0x63 )
        return 3580;
      if ( (unsigned int)(result - 3430) <= 0x63 )
        return 3480;
      if ( (unsigned int)(result - 3330) <= 0x63 )
        return 3380;
      if ( (unsigned int)(result - 3230) <= 0x63 )
        return 3280;
      if ( (unsigned int)(result - 3130) <= 0x63 )
        return 3180;
      return sub_144458(result, v17) * v17;
    case 7:
      result = sub_144458(result, v17) * v17 - 50;
      if ( result > 3729 )
        return 3780;
      goto LABEL_29;
    case 9:
      if ( result < 860 )
      {
        if ( (unsigned int)(result - 840) > 0x13 )
        {
          if ( (unsigned int)(result - 820) > 0x13 )
          {
            if ( (unsigned int)(result - 800) > 0x13 )
            {
              if ( (unsigned int)(result - 780) > 0x13 )
              {
                if ( (unsigned int)(result - 350) > 0x1AD )
                  return 0;
                else
                  return 350;
              }
              else
              {
                return 780;
              }
            }
            else
            {
              return 800;
            }
          }
          else
          {
            return 820;
          }
        }
        else
        {
          return 840;
        }
      }
      else
      {
        return 860;
      }
    case 1:
      if ( result > 65999 )
        return (int)&elf_hash_bucket[5];
      if ( (unsigned int)(result - 63500) <= 0x9C3 )
        return 63500;
      if ( (unsigned int)(result - 60500) <= 0xBB7 )
        return 60500;
      if ( (unsigned int)(result - 58000) <= 0x9C3 )
        return 58000;
      return sub_144458(result, v17) * v17;
    case 2:
      if ( result > 172999 )
        return (int)&loc_2A3C8;
      if ( (unsigned int)(result - 166000) <= 0x1B57 )
        return 166000;
      return sub_144458(result, v17) * v17;
    case 5:
      if ( result <= 1859 )
      {
        if ( (unsigned int)(result - 1770) <= 0x59 )
          return 1770;
        return sub_144458(result, v17) * v17;
      }
      return 1860;
  }
  return result;
}
