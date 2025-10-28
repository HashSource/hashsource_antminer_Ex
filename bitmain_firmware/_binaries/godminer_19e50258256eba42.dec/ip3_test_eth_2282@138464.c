int __fastcall ip3_test_eth_2282(int a1, int a2, int a3)
{
  int v3; // r3
  int v8[32]; // [sp+10h] [bp-AD4Ch] BYREF
  _BYTE v9[2880]; // [sp+90h] [bp-ACCCh] BYREF
  unsigned int v10[10320]; // [sp+BD0h] [bp-A18Ch] BYREF
  unsigned int v11; // [sp+AD10h] [bp-4Ch]
  unsigned int v12; // [sp+AD14h] [bp-48h]
  int i1; // [sp+AD18h] [bp-44h]
  unsigned int nn; // [sp+AD1Ch] [bp-40h]
  unsigned int mm; // [sp+AD20h] [bp-3Ch]
  int v16; // [sp+AD24h] [bp-38h]
  int v17; // [sp+AD28h] [bp-34h]
  unsigned int kk; // [sp+AD2Ch] [bp-30h]
  unsigned int jj; // [sp+AD30h] [bp-2Ch]
  unsigned int ii; // [sp+AD34h] [bp-28h]
  unsigned int n; // [sp+AD38h] [bp-24h]
  unsigned int m; // [sp+AD3Ch] [bp-20h]
  int v23; // [sp+AD40h] [bp-1Ch]
  int v24; // [sp+AD44h] [bp-18h]
  unsigned int k; // [sp+AD48h] [bp-14h]
  unsigned int j; // [sp+AD4Ch] [bp-10h]
  unsigned int i; // [sp+AD50h] [bp-Ch]
  int v28; // [sp+AD54h] [bp-8h]

  memset(v10, 0, sizeof(v10));
  memset(v9, 0, sizeof(v9));
  v9[0] = 1;
  v12 = 0;
  v11 = 0;
  v28 = 0;
  for ( i = 0; i <= 1; ++i )
  {
    for ( j = 0; j <= 2; ++j )
    {
      for ( k = 0; k <= 0x13; ++k )
      {
        v24 = 260046848;
        if ( i == 1 )
          v24 = 260050944;
        v24 |= k | (32 * j);
        printf("id_config : %08x\n", v24);
        start_ip3_test(a2, v24);
        v23 = 0;
        for ( m = 0; m <= 2; ++m )
        {
          for ( n = 0; n <= 7; ++n )
          {
            memset(v8, 0, sizeof(v8));
            get_all_ip3_test_data((int *)v10, v23++);
            m7x_repair_directdata(v10, v8);
            v11 = j + 3 * m;
            v12 = n + 9 * v11;
            v28 = k + 40 * v12;
            if ( i == 1 )
              v28 += 20;
            if ( check_send_repair_code((int)v8, a1, v12) != -1 && v8[0] )
              write_repair_data_to_file(0, 0, v28, (int)v8);
          }
        }
      }
    }
  }
  for ( ii = 0; ii <= 1; ++ii )
  {
    for ( jj = 0; jj <= 2; ++jj )
    {
      for ( kk = 0; kk <= 0x13; ++kk )
      {
        v17 = 260046848;
        if ( ii == 1 )
          v17 = 260050944;
        v17 |= kk | (32 * jj);
        printf("id_config : %08x\n", v17);
        start_ip3_test(a3, v17);
        v16 = 0;
        for ( mm = 0; mm <= 2; ++mm )
        {
          for ( nn = 0; nn <= 7; ++nn )
          {
            memset(v8, 0, sizeof(v8));
            get_all_ip3_test_data((int *)v10, v16);
            m7x_repair_directdata(v10, v8);
            ++v16;
            v11 = jj + 3 * mm;
            v12 = nn + 9 * v11;
            v28 = kk + 40 * v12;
            if ( ii == 1 )
              v28 += 20;
            if ( check_repair_code((int)v8) == -1 )
              v9[v28] = 0;
          }
        }
      }
    }
  }
  putchar(10);
  for ( i1 = 0; i1 < 2880; ++i1 )
    printf("%02x\n", (unsigned __int8)v9[i1]);
  putchar(10);
  write_fail_map_to_file(0, 0, (int)v9);
  return v3;
}
