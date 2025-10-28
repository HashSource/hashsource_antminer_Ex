int __fastcall mca_test_2282(int a1)
{
  _DWORD v3[7]; // [sp+8h] [bp-159Ch] BYREF
  _BYTE v4[572]; // [sp+368h] [bp-123Ch] BYREF
  _DWORD v5[219]; // [sp+6C8h] [bp-EDCh] BYREF
  unsigned int v6; // [sp+1574h] [bp-30h]
  int v7; // [sp+1578h] [bp-2Ch]
  unsigned int v8; // [sp+157Ch] [bp-28h]
  int v9; // [sp+1580h] [bp-24h]
  int jj; // [sp+1584h] [bp-20h]
  int ii; // [sp+1588h] [bp-1Ch]
  unsigned int n; // [sp+158Ch] [bp-18h]
  unsigned int m; // [sp+1590h] [bp-14h]
  int k; // [sp+1594h] [bp-10h]
  unsigned int j; // [sp+1598h] [bp-Ch]
  int i; // [sp+159Ch] [bp-8h]

  for ( i = 0; i < 2880; ++i )
    *((_BYTE *)&v5[216] + i) = 2;
  v9 = 0;
  sub_106D34(a1, 28, 2);
  for ( j = 0; j <= 7; ++j )
  {
    printf("bank_index_in_group : %u\n", j);
    sub_106D34(a1, 208, j);
    usleep(0x64u);
    sub_106D34(a1, 192, 3873);
    usleep(0x2EE0u);
    while ( 1 )
    {
      sub_1075C0(a1, 255, 192, v3);
      for ( k = 0; k <= 71 && (v3[3 * k] & 0x80) == 0; ++k )
        ;
      if ( k == 72 )
        break;
      usleep(0x3E8u);
    }
    sub_106D34(a1, 192, 3872);
    for ( m = 0; m <= 4; ++m )
    {
      printf("bank_group : %08x\n", m);
      v8 = m + 5 * j;
      sub_1075C0(a1, 255, 192, v5);
      sub_106D34(a1, 192, (v8 << 26) | 0xF20);
      sub_1075C0(a1, 255, 192, v5);
      usleep(0x64u);
      sub_1075C0(a1, 255, 221, v4);
      for ( n = 0; n <= 0x47; ++n )
      {
        v7 = 40 * n;
        v6 = 40 * n + v8;
        if ( *(_DWORD *)&v4[12 * n] )
        {
          printf(
            "check bank_id and error_count&lost_count, core_id %08x, c0 val %08x, dd val %08x\n",
            n,
            v5[3 * n],
            *(_DWORD *)&v4[12 * n]);
          puts("error error");
        }
        if ( HIWORD(*(_DWORD *)&v4[12 * n]) << 16 )
          *((_BYTE *)&v5[216] + v6) = 1;
        else
          *((_BYTE *)&v5[216] + v6) = 0;
      }
    }
  }
  puts("mca test result:");
  for ( ii = 0; ii <= 71; ++ii )
  {
    for ( jj = 0; jj <= 39; ++jj )
      printf("%x ", *((unsigned __int8 *)&v5[10 * ii + 216] + jj));
    putchar(10);
  }
  return 0;
}
