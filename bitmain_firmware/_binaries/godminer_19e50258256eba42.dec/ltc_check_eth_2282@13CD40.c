int __fastcall ltc_check_eth_2282(int a1)
{
  size_t v2; // r0
  size_t v3; // r0
  _BYTE v6[252]; // [sp+30h] [bp-B0FCh] BYREF
  char v7[16]; // [sp+1030h] [bp-A0FCh] BYREF
  char v8[32]; // [sp+1040h] [bp-A0ECh] BYREF
  char v9[40960]; // [sp+1060h] [bp-A0CCh] BYREF
  _DWORD v10[7]; // [sp+B060h] [bp-CCh] BYREF
  int v11; // [sp+B07Ch] [bp-B0h]
  _DWORD v12[7]; // [sp+B080h] [bp-ACh] BYREF
  int v13; // [sp+B09Ch] [bp-90h]
  _DWORD v14[7]; // [sp+B0A0h] [bp-8Ch] BYREF
  int v15; // [sp+B0BCh] [bp-70h]
  _DWORD v16[7]; // [sp+B0C0h] [bp-6Ch] BYREF
  int v17; // [sp+B0DCh] [bp-50h]
  FILE *stream; // [sp+B0E4h] [bp-48h]
  FILE *s; // [sp+B0E8h] [bp-44h]
  int ii; // [sp+B0ECh] [bp-40h]
  int n; // [sp+B0F0h] [bp-3Ch]
  int m; // [sp+B0F4h] [bp-38h]
  void *ptr; // [sp+B0F8h] [bp-34h]
  void *v24; // [sp+B0FCh] [bp-30h]
  int i; // [sp+B100h] [bp-2Ch]
  int j; // [sp+B104h] [bp-28h]
  int k; // [sp+B108h] [bp-24h]
  int nn; // [sp+B10Ch] [bp-20h]
  int mm; // [sp+B110h] [bp-1Ch]
  int kk; // [sp+B114h] [bp-18h]
  int jj; // [sp+B118h] [bp-14h]
  int i1; // [sp+B11Ch] [bp-10h]

  V_LOCK();
  sub_FBD60((int)v10, *(int *)(a1 + 272));
  logfmt_raw(
    v6,
    0x1000u,
    0,
    v11,
    v10[0],
    v10[1],
    v10[2],
    v10[3],
    v10[4],
    v10[5],
    v10[6],
    v11,
    "%s...",
    "ltc_check_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "ltc_check_eth_2282",
    18,
    9467,
    40,
    v6);
  memset(v9, 0, sizeof(v9));
  memset(v8, 0, sizeof(v8));
  for ( i = 0; i <= 5; ++i )
  {
    for ( j = 0; j <= 71; ++j )
    {
      for ( k = 0; k <= 39; ++k )
      {
        byte_59C08C[2880 * i + 40 * j + k] = 3;
        byte_5A040C[2880 * i + 40 * j + k] = 3;
        byte_5A478C[2880 * i + 40 * j + k] = 3;
      }
    }
  }
  if ( !short_ltc_en )
  {
    if ( hashboard_long_ltc_eth_2282(a1, 0) )
      return 40;
    if ( hashboard_long_ltc_eth_2282(a1, 1) )
      return 40;
    if ( !*(_DWORD *)(a1 + 272) )
    {
      ptr = &unk_5BB67C;
      v24 = byte_59C08C;
    }
    if ( *(_DWORD *)(a1 + 272) == 1 )
    {
      ptr = &unk_7D767C;
      v24 = byte_5A040C;
    }
    if ( *(_DWORD *)(a1 + 272) == 2 )
    {
      ptr = &unk_9F367C;
      v24 = byte_5A478C;
    }
    sprintf(v7, "/nvdata/ltc_long_%d.txt", *(_DWORD *)(a1 + 272));
    s = fopen(v7, "wb");
    if ( !s )
    {
      printf("Error opening %s", v7);
      return 1;
    }
    if ( fwrite(ptr, 4u, 0x87000u, s) != 552960 )
    {
      printf("save %s error\n", v7);
      fclose(s);
      while ( 1 )
        ;
    }
    fclose(s);
    memset(ptr, 0, 4u);
    s = fopen(v7, "rb");
    if ( !s )
    {
      printf("Error opening %s for reading\n", v7);
      while ( 1 )
        ;
    }
    if ( fread(ptr, 4u, 0x16800u, s) != 92160 )
    {
      v3 = fread(ptr, 4u, 0x16800u, s);
      printf("Error reading %s data for only %d word\n", v7, v3);
      fclose(s);
      while ( 1 )
        ;
    }
    fclose(s);
    sprintf(v7, "/nvdata/lut_long_%d.txt", *(_DWORD *)(a1 + 272));
    stream = fopen(v7, "wb");
    if ( !stream )
    {
      printf("Unable to open %s for writing\n", v7);
      return 1;
    }
    if ( fwrite(v24, 1u, 0x4380u, stream) != 17280 )
    {
      printf("save %s result error\n", v7);
      fclose(stream);
      while ( 1 )
        ;
    }
    fclose(stream);
    memset(v24, 0, 4u);
    stream = fopen(v7, "rb");
    if ( !stream )
    {
      printf("Error open %s\n", v7);
      return 1;
    }
    if ( fread(v24, 1u, 0x4380u, stream) != 17280 )
    {
      printf("Error read %s\n", v7);
      fclose(stream);
      while ( 1 )
        ;
    }
    fclose(stream);
    V_LOCK();
    sub_FBD60((int)v16, *(int *)(a1 + 272));
    logfmt_raw(
      v6,
      0x1000u,
      0,
      v17,
      v16[0],
      v16[1],
      v16[2],
      v16[3],
      v16[4],
      v16[5],
      v16[6],
      v17,
      "read start_bank_state:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "ltc_check_eth_2282",
      18,
      9671,
      40,
      v6);
    for ( m = 0; m <= 5; ++m )
    {
      for ( n = 0; n <= 71; ++n )
      {
        for ( ii = 0; ii <= 39; ++ii )
        {
          sprintf(v8, "%01x ", *((unsigned __int8 *)v24 + 2880 * m + 40 * n + ii));
          strcat(v9, v8);
        }
        memset(v9, 0, sizeof(v9));
        memset(v8, 0, sizeof(v8));
      }
    }
    return 0;
  }
  for ( jj = 0; jj <= 5; ++jj )
    hashboard_reset_for_ltc(*(_DWORD *)(a1 + 272), jj);
  if ( !hashboard_short_ltc_eth_2282(a1, 0) )
  {
    if ( chip_init_eth_2282(a1) )
    {
      V_LOCK();
      sub_FBD60((int)v12, *(int *)(a1 + 272));
      logfmt_raw(v6, 0x1000u, 0, v13, v12[0], v12[1], v12[2], v12[3], v12[4], v12[5], v12[6], v13, "chip init failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "ltc_check_eth_2282",
        18,
        9493,
        100,
        v6);
      return 12;
    }
    for ( kk = 0; kk <= 5; ++kk )
      hashboard_reset_for_ltc(*(_DWORD *)(a1 + 272), kk);
    if ( hashboard_short_ltc_eth_2282(a1, 1u) )
      return 40;
    if ( !*(_DWORD *)(a1 + 272) )
    {
      ptr = &unk_5BB67C;
      v24 = byte_59C08C;
    }
    if ( *(_DWORD *)(a1 + 272) == 1 )
    {
      ptr = &unk_7D767C;
      v24 = byte_5A040C;
    }
    if ( *(_DWORD *)(a1 + 272) == 2 )
    {
      ptr = &unk_9F367C;
      v24 = byte_5A478C;
    }
    sprintf(v7, "/nvdata/ltc_%d.txt", *(_DWORD *)(a1 + 272));
    s = fopen(v7, "wb");
    if ( !s )
      goto LABEL_30;
    if ( fwrite(ptr, 4u, 0x87000u, s) != 552960 )
    {
      printf("Error write short repair code to %s\n", v7);
      fclose(s);
      while ( 1 )
        ;
    }
    fclose(s);
    memset(ptr, 0, 4u);
    s = fopen(v7, "rb");
    if ( !s )
    {
      printf("Error opening %s\n", v7);
      while ( 1 )
        ;
    }
    if ( fread(ptr, 4u, 0x87000u, s) != 552960 )
    {
      v2 = fread(ptr, 4u, 0x87000u, s);
      printf("Error reading from %s for only %d word\n", v7, v2);
      fclose(s);
      while ( 1 )
        ;
    }
    fclose(s);
    sprintf(v7, "/nvdata/lut_%d.txt", *(_DWORD *)(a1 + 272));
    stream = fopen(v7, "wb");
    if ( !stream )
    {
      printf("Unable to open %s\n", v7);
      return 1;
    }
    if ( fwrite(v24, 1u, 0x4380u, stream) != 17280 )
    {
      printf("Error write short lut to %s\n", v7);
      fclose(stream);
      while ( 1 )
        ;
    }
    fclose(stream);
    memset(v24, 0, 4u);
    stream = fopen(v7, "rb");
    if ( !stream )
    {
LABEL_30:
      printf("Error opening %s\n", v7);
      return 1;
    }
    if ( fread(v24, 1u, 0x4380u, stream) != 17280 )
    {
      printf("Error reading %s\n", v7);
      fclose(stream);
      while ( 1 )
        ;
    }
    fclose(stream);
    V_LOCK();
    sub_FBD60((int)v14, *(int *)(a1 + 272));
    logfmt_raw(
      v6,
      0x1000u,
      0,
      v15,
      v14[0],
      v14[1],
      v14[2],
      v14[3],
      v14[4],
      v14[5],
      v14[6],
      v15,
      "read start_bank_state:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "ltc_check_eth_2282",
      18,
      9577,
      40,
      v6);
    for ( mm = 0; mm <= 5; ++mm )
    {
      for ( nn = 0; nn <= 71; ++nn )
      {
        for ( i1 = 0; i1 <= 39; ++i1 )
        {
          sprintf(v8, "%01x ", *((unsigned __int8 *)v24 + 2880 * mm + 40 * nn + i1));
          strcat(v9, v8);
        }
        puts(v9);
        memset(v9, 0, sizeof(v9));
        memset(v8, 0, sizeof(v8));
      }
    }
    return 0;
  }
  return 40;
}
