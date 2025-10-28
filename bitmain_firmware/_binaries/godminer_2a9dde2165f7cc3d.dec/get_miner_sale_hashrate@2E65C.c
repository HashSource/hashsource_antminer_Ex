int get_miner_sale_hashrate()
{
  double v0; // d0
  int v1; // r4
  int all_created_runtime; // r5
  double v3; // d9
  int miner_6060info_status; // r0
  double v5; // d8
  int v6; // r7
  int v7; // r5
  int v8; // t1
  int result; // r0
  char *v10; // r4
  char *v11; // r3
  int v13; // r0
  int v14; // r4
  int v15; // [sp+0h] [bp-5Ch] BYREF
  int v16; // [sp+4h] [bp-58h]
  double v17[2]; // [sp+8h] [bp-54h] BYREF
  _BYTE v18[12]; // [sp+18h] [bp-44h] BYREF
  _BYTE v19[17]; // [sp+24h] [bp-38h] BYREF
  char v20; // [sp+35h] [bp-27h]
  char v21; // [sp+46h] [bp-16h] BYREF
  _BYTE v22[2]; // [sp+56h] [bp-6h] BYREF

  v1 = 0;
  v15 = 0;
  all_created_runtime = get_all_created_runtime(&v15);
  v16 = 1;
  get_miner_elapsed_time();
  v3 = v0;
  miner_6060info_status = get_miner_6060info_status(v19);
  v5 = 0.0;
  v17[0] = 0.0;
  if ( v15 > 0 )
  {
    v7 = all_created_runtime - 4;
    v6 = 0;
    do
    {
      v8 = *(_DWORD *)(v7 + 4);
      v7 += 4;
      ++v1;
      miner_6060info_status = (*(int (**)(void))(v8 + 136))();
      v6 |= miner_6060info_status;
      v5 = v5 + v17[1];
    }
    while ( v15 > v1 );
  }
  else
  {
    v6 = 0;
  }
  freq_scan_status = 1;
  if ( (unsigned int)(opt_algo - 6) <= 1 )
    v3 = v0 - 2700.0;
  if ( v3 < 1.0 )
  {
    freq_scan_status = 0;
    return 0;
  }
  if ( !v6 )
  {
    if ( !v19[0] )
      goto LABEL_11;
LABEL_42:
    miner_6060info_status = *(_DWORD *)"P:1";
    freq_scan_status = 2;
    strcpy((char *)search_failed_info, "P:1");
    if ( !v20 )
      goto LABEL_12;
    goto LABEL_41;
  }
  miner_6060info_status = *(_DWORD *)"R:1";
  freq_scan_status = 2;
  strcpy((char *)search_failed_info, "R:1");
  if ( v19[0] )
    goto LABEL_42;
LABEL_11:
  if ( v20 )
  {
LABEL_41:
    miner_6060info_status = *(_DWORD *)"F:1";
    freq_scan_status = 2;
    strcpy((char *)search_failed_info, "F:1");
  }
LABEL_12:
  v10 = &v21;
  do
  {
    while ( 1 )
    {
      v11 = &v10[-34 - (_DWORD)v19];
      if ( *v10++ )
        break;
      if ( v22 == v10 )
        goto LABEL_16;
    }
    freq_scan_status = 2;
    strcpy((char *)search_failed_info, "R:1");
    miner_6060info_status = snprintf((char *)search_failed_info, 0x100u, "J%d:1", v11);
  }
  while ( v22 != v10 );
LABEL_16:
  v13 = frontend_runtime_instance(miner_6060info_status);
  format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v13 + 72) + 16), v17, v18);
  v14 = v16;
  result = sub_12E050((int)v17[0], v16) * v14;
  switch ( opt_algo )
  {
    case 6:
      result -= 50;
      if ( result > 3729 )
        return 3780;
LABEL_28:
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
      return sub_12E050(result, v14) * v14;
    case 7:
      result = sub_12E050(result, v14) * v14 - 50;
      if ( result > 3729 )
        return 3780;
      goto LABEL_28;
    case 9:
      if ( result >= 860 )
        return 860;
      if ( (unsigned int)(result - 840) <= 0x13 )
        return 840;
      if ( (unsigned int)(result - 820) <= 0x13 )
        return 820;
      if ( (unsigned int)(result - 800) <= 0x13 )
        return 800;
      if ( (unsigned int)(result - 780) <= 0x13 )
        return 780;
      return sub_12E050(result, v14) * v14;
    case 1:
      if ( result > 65999 )
        return (int)&elf_hash_bucket[5];
      if ( (unsigned int)(result - 63500) <= 0x9C3 )
        return 63500;
      if ( (unsigned int)(result - 60500) <= 0xBB7 )
        return 60500;
      if ( (unsigned int)(result - 58000) <= 0x9C3 )
        return 58000;
      return sub_12E050(result, v14) * v14;
    case 2:
      if ( result > 172999 )
        return 173000;
      if ( (unsigned int)(result - 166000) <= 0x1B57 )
        return (int)sub_28870;
      return sub_12E050(result, v14) * v14;
    case 5:
      if ( result <= 1859 )
      {
        if ( (unsigned int)(result - 1770) <= 0x59 )
          return 1770;
        return sub_12E050(result, v14) * v14;
      }
      return 1860;
  }
  return result;
}
