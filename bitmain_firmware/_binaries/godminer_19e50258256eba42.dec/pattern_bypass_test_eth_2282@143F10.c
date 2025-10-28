int __fastcall pattern_bypass_test_eth_2282(int a1)
{
  int v1; // r6
  char *v3; // r0
  _BYTE *v4; // r6
  _BYTE *v5; // r6
  _DWORD *v6; // lr
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r1
  int v11; // r2
  int v12; // r3
  unsigned __int64 v13; // r0
  unsigned __int64 v14; // r0
  _DWORD *v15; // lr
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r2
  int v21; // r3
  char *v22; // r2
  int v23; // r1
  _DWORD *v24; // lr
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r1
  int v29; // r2
  int v30; // r3
  int v31; // r3
  int v32; // r2
  int v33; // r2
  int v34; // r2
  int v35; // r2
  _BYTE v38[76]; // [sp+30h] [bp-12CCh] BYREF
  char haystack[172]; // [sp+1030h] [bp-2CCh] BYREF
  _BYTE dest[172]; // [sp+10DCh] [bp-220h] BYREF
  _DWORD v41[8]; // [sp+1188h] [bp-174h] BYREF
  unsigned __int64 v42; // [sp+11A8h] [bp-154h] BYREF
  unsigned __int64 v43; // [sp+11B0h] [bp-14Ch] BYREF
  int v44; // [sp+11B8h] [bp-144h] BYREF
  int v45; // [sp+11BCh] [bp-140h]
  int v46; // [sp+11C0h] [bp-13Ch]
  int v47; // [sp+11C4h] [bp-138h]
  int v48; // [sp+11C8h] [bp-134h]
  int v49; // [sp+11CCh] [bp-130h]
  int v50; // [sp+11D0h] [bp-12Ch]
  int v51; // [sp+11D4h] [bp-128h]
  _BYTE v52[68]; // [sp+11D8h] [bp-124h] BYREF
  _BYTE v53[20]; // [sp+121Ch] [bp-E0h] BYREF
  _BYTE v54[20]; // [sp+1230h] [bp-CCh] BYREF
  _BYTE s[68]; // [sp+1244h] [bp-B8h] BYREF
  _DWORD v56[7]; // [sp+1288h] [bp-74h] BYREF
  int v57; // [sp+12A4h] [bp-58h]
  void *v58; // [sp+12A8h] [bp-54h]
  unsigned __int8 v59; // [sp+12AFh] [bp-4Dh]
  char *v60; // [sp+12B0h] [bp-4Ch]
  void *ptr; // [sp+12B4h] [bp-48h]
  void *v62; // [sp+12B8h] [bp-44h]
  int v63; // [sp+12BCh] [bp-40h]
  void *v64; // [sp+12C0h] [bp-3Ch]
  int v65; // [sp+12C4h] [bp-38h]
  int v66; // [sp+12C8h] [bp-34h]
  int v67; // [sp+12CCh] [bp-30h]
  _DWORD *v68; // [sp+12D0h] [bp-2Ch]
  _DWORD *v69; // [sp+12D4h] [bp-28h]
  int v70; // [sp+12D8h] [bp-24h]
  int v71; // [sp+12DCh] [bp-20h]
  int i; // [sp+12E0h] [bp-1Ch]
  int j; // [sp+12E4h] [bp-18h]

  V_LOCK();
  logfmt_raw(v38, 0x1000u, 0, "%s...", "pattern_bypass_test_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "pattern_bypass_test_eth_2282",
    28,
    11013,
    100,
    v38);
  v64 = malloc(0x1440u);
  sub_106D34(a1, 15, 3);
  sub_106D34(a1, 9, 458780);
  if ( (unsigned __int8)asic_select > 5u )
    sub_106D34(a1, 9, 458781);
  else
    sub_106F8C(a1, asic_select, 9, 458781);
  sub_106D34(a1, 206, 5);
  sub_106D34(a1, 26, 25);
  if ( old_pattern )
    sub_106D34(a1, 26, 20);
  v63 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 72;
  if ( old_pattern )
    v67 = 371;
  v62 = 0;
  if ( low_temp_start_up )
  {
    PLL1 = 400;
    PLL0 = 400;
    (*(void (__fastcall **)(int, _DWORD))(a1 + 204))(a1, 0);
    usleep(0x64u);
    (*(void (__fastcall **)(int, int))(a1 + 204))(a1, 1);
    usleep(0x64u);
    (*(void (__fastcall **)(int))(a1 + 4))(a1);
    *(_DWORD *)(a1 + 504) = PLL1;
  }
  v70 = 0;
  do
  {
    v71 = 0;
    *(_BYTE *)(a1 + 1227) = 1;
    bypass_baking_mode = 1;
    ptr = calloc(1u, 0x59u);
    *(_BYTE *)(a1 + 576) = 1;
    *(_DWORD *)(a1 + 532) = 1;
    v1 = *(_DWORD *)(a1 + 272);
    *((_DWORD *)&unk_5BB664 + v1) = malloc(0x58u);
    if ( !*((_DWORD *)&unk_5BB664 + *(_DWORD *)(a1 + 272)) )
    {
      V_LOCK();
      logfmt_raw(v38, 0x1000u, 0, "%s, malloc works struct error!", "pattern_bypass_test_eth_2282");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "pattern_bypass_test_eth_2282",
        28,
        11072,
        100,
        v38);
      return 13;
    }
    **((_DWORD **)&unk_5BB664 + *(_DWORD *)(a1 + 272)) = *((_DWORD *)&unk_5BB664 + *(_DWORD *)(a1 + 272));
    *(_DWORD *)(*((_DWORD *)&unk_5BB664 + *(_DWORD *)(a1 + 272)) + 4) = *((_DWORD *)&unk_5BB664 + *(_DWORD *)(a1 + 272));
    V_LOCK();
    sub_FBD60((int)v56, *(int *)(a1 + 272));
    logfmt_raw(
      v38,
      0x1000u,
      0,
      v57,
      v56[0],
      v56[1],
      v56[2],
      v56[3],
      v56[4],
      v56[5],
      v56[6],
      v57,
      "start_pattern_test...");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "pattern_bypass_test_eth_2282",
      28,
      11078,
      20,
      v38);
    *(_BYTE *)(a1 + 279) = 1;
    *(_BYTE *)(a1 + 278) = 1;
    sub_106D34(a1, 26, 25);
    if ( (unsigned __int8)asic_select <= 5u )
    {
      sub_100980(a1, 0, 0, asic_select);
      usleep(0x64u);
      sub_100980(a1, 0, 0, asic_select);
      usleep(0x64u);
      sub_106D34(a1, 15, 3);
      sub_106F8C(a1, asic_select, 2, 254);
      usleep(0x64u);
      sub_106F8C(a1, asic_select, 2, 255);
      usleep(0x64u);
      sub_106D34(a1, 15, 3);
    }
    for ( i = 0; i < v67; ++i )
    {
      memset(s, 0, 0x41u);
      memset(v54, 0, 0x11u);
      memset(v53, 0, 0x11u);
      memset(v52, 0, 0x41u);
      memset(dest, 0, 0xA9u);
      memcpy(dest, &mbist1_slt_pattern_str_1[168 * i], 0xA8u);
      memcpy(haystack, &mbist1_slt_pattern_str_1[168 * i], 0xA8u);
      if ( (unsigned __int8)asic_select <= 5u )
      {
        v3 = strstr(haystack, "nonce");
        v60 = v3 + 6;
        v59 = hex2char(v3[12], v3[13]) - asic_select;
        v4 = v60 + 6;
        *v4 = char2hex(v59 >> 4);
        v5 = v60 + 7;
        *v5 = char2hex(v59 & 0xF);
        v63 = _isoc99_sscanf(haystack, "header %s nonce %s mixhash %s", s, v53, v52);
        if ( v63 <= 2 )
        {
          V_LOCK();
          logfmt_raw(v38, 0x1000u, 0, "failed to parse slt pattern string");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "pattern_bypass_test_eth_2282",
            28,
            11118,
            100,
            v38);
          exit(2);
        }
        str2hex((int)&v42, (int)v53, 16);
        for ( j = 0; j <= 7; ++j )
          printf("%02x", *((unsigned __int8 *)&v42 + j));
        putchar(10);
      }
      v63 = _isoc99_sscanf(dest, "header %s nonce %s mixhash %s", s, v54, v52);
      if ( v63 <= 2 )
      {
        V_LOCK();
        logfmt_raw(v38, 0x1000u, 0, "failed to parse slt pattern string");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "pattern_bypass_test_eth_2282",
          28,
          11131,
          100,
          v38);
        exit(2);
      }
      str2hex((int)&v44, (int)s, 64);
      str2hex((int)&v43, (int)v54, 16);
      str2hex((int)v41, (int)v52, 64);
      *((_QWORD *)ptr + 1) = v67 % 255;
      v6 = (char *)ptr + 16;
      v7 = v45;
      v8 = v46;
      v9 = v47;
      *((_DWORD *)ptr + 4) = v44;
      v6[1] = v7;
      v6[2] = v8;
      v6[3] = v9;
      v10 = v49;
      v11 = v50;
      v12 = v51;
      v6[4] = v48;
      v6[5] = v10;
      v6[6] = v11;
      v6[7] = v12;
      if ( (unsigned __int8)asic_select > 5u )
        v13 = sub_10F6C8(&v43);
      else
        v13 = sub_10F6C8(&v42);
      *((_QWORD *)ptr + 10) = v13;
      v14 = sub_10F6C8(&v43);
      *((_QWORD *)ptr + 10) = v14;
      *((_QWORD *)ptr + 10) += 100LL;
      v58 = malloc(0x58u);
      if ( !v58 )
      {
        V_LOCK();
        logfmt_raw(v38, 0x1000u, 0, "%s, malloc works struct error!", "pattern_bypass_test_eth_2282");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "pattern_bypass_test_eth_2282",
          28,
          11156,
          100,
          v38);
        return 13;
      }
      memset(v58, 0, 0x58u);
      *((_DWORD *)v58 + 2) = *((_DWORD *)ptr + 2);
      *((_BYTE *)v58 + 84) = 0;
      v15 = (char *)v58 + 12;
      v16 = v45;
      v17 = v46;
      v18 = v47;
      *((_DWORD *)v58 + 3) = v44;
      v15[1] = v16;
      v15[2] = v17;
      v15[3] = v18;
      v19 = v49;
      v20 = v50;
      v21 = v51;
      v15[4] = v48;
      v15[5] = v19;
      v15[6] = v20;
      v15[7] = v21;
      v22 = (char *)v58 + 44;
      v23 = HIDWORD(v43);
      *((_DWORD *)v58 + 11) = v43;
      *((_DWORD *)v22 + 1) = v23;
      v24 = (char *)v58 + 52;
      v25 = v41[1];
      v26 = v41[2];
      v27 = v41[3];
      *((_DWORD *)v58 + 13) = v41[0];
      v24[1] = v25;
      v24[2] = v26;
      v24[3] = v27;
      v28 = v41[5];
      v29 = v41[6];
      v30 = v41[7];
      v24[4] = v41[4];
      v24[5] = v28;
      v24[6] = v29;
      v24[7] = v30;
      sub_FBEF0(v58, *((_DWORD *)&unk_5BB664 + *(_DWORD *)(a1 + 272)));
      push_work_base(a1, (int)ptr);
      usleep(0x30D40u);
      while ( !*((_BYTE *)v58 + 84) )
      {
        v31 = v70++;
        if ( v31 > 10 )
          break;
        usleep(0x1388u);
      }
      v70 = 0;
      if ( *((_BYTE *)v58 + 84) )
        ++v71;
    }
    *(_BYTE *)(a1 + 278) = 0;
    sub_106D34(a1, 26, 255);
    sleep(1u);
    if ( ptr )
      free(ptr);
    v68 = (_DWORD *)**((_DWORD **)&unk_5BB664 + *(_DWORD *)(a1 + 272));
    v69 = (_DWORD *)*v68;
    while ( v68 != *((_DWORD **)&unk_5BB664 + *(_DWORD *)(a1 + 272)) )
    {
      v62 = v68;
      sub_FBF64((int)v68);
      if ( v62 )
        free(v62);
      v68 = v69;
      v69 = (_DWORD *)*v69;
    }
    sub_FBFB4(*((_DWORD *)&unk_5BB664 + *(_DWORD *)(a1 + 272)));
    if ( *((_DWORD *)&unk_5BB664 + *(_DWORD *)(a1 + 272)) )
      free(*((void **)&unk_5BB664 + *(_DWORD *)(a1 + 272)));
    if ( (v65 & 3) == 0 )
      v65 = 0;
    if ( (v66 & 3) == 0 )
      v66 = 0;
    if ( *(int *)(a1 + 1220) >= -5 )
    {
      if ( (double)(int)slt_result[2050 * *(_DWORD *)(a1 + 272) + 2049] <= 64.8 )
      {
        if ( (++v66 & 3) == 0 )
        {
          v66 = 0;
          if ( PLL0 - 10 < 400 )
            v34 = 400;
          else
            v34 = PLL0 - 10;
          PLL0 = v34;
          if ( PLL1 - 10 < 400 )
            v35 = 400;
          else
            v35 = PLL1 - 10;
          PLL1 = v35;
          (*(void (__fastcall **)(int, _DWORD))(a1 + 204))(a1, 0);
          usleep(0x64u);
          (*(void (__fastcall **)(int, int))(a1 + 204))(a1, 1);
          usleep(0x64u);
          (*(void (__fastcall **)(int))(a1 + 4))(a1);
          printf(
            "chain-%d, pattern pass rate %.4f, fail_count %d",
            *(_DWORD *)(a1 + 272),
            (float)((float)(int)slt_result[2050 * *(_DWORD *)(a1 + 272) + 2049] / 72.0),
            v66);
          *(_DWORD *)(a1 + 504) = PLL1;
        }
      }
      else if ( (++v65 & 3) == 0 )
      {
        v65 = 0;
        if ( PLL0 < 500 )
        {
          if ( PLL0 + 10 >= 500 )
            v32 = 500;
          else
            v32 = PLL0 + 10;
          PLL0 = v32;
        }
        if ( PLL1 < 600 )
        {
          if ( PLL1 + 10 >= 600 )
            v33 = 600;
          else
            v33 = PLL1 + 10;
          PLL1 = v33;
        }
        (*(void (__fastcall **)(int, _DWORD))(a1 + 204))(a1, 0);
        usleep(0x64u);
        (*(void (__fastcall **)(int, int))(a1 + 204))(a1, 1);
        usleep(0x64u);
        (*(void (__fastcall **)(int))(a1 + 4))(a1);
        *(_DWORD *)(a1 + 504) = PLL1;
      }
    }
    print_dram_bypass_test_result(&slt_result[2050 * *(_DWORD *)(a1 + 272)]);
  }
  while ( case_select == 6 );
  V_LOCK();
  logfmt_raw(v38, 0x1000u, 0, "ETC_bypass baking finished.!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "pattern_bypass_test_eth_2282",
    28,
    11252,
    20,
    v38);
  *(_BYTE *)(a1 + 1227) = 0;
  (*(void (__fastcall **)(int, _DWORD))(a1 + 204))(a1, 0);
  usleep(0x64u);
  (*(void (__fastcall **)(int, int))(a1 + 204))(a1, 1);
  usleep(0x64u);
  (*(void (__fastcall **)(int))(a1 + 4))(a1);
  sub_106D34(a1, 206, 0);
  *(_DWORD *)(a1 + 504) = (unsigned __int16)freq_select;
  if ( v64 )
    free(v64);
  return 0;
}
