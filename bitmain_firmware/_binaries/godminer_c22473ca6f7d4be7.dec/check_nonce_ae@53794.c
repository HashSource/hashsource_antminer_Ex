int __fastcall check_nonce_ae(_DWORD *a1, int a2)
{
  int v3; // r8
  int v5; // r10
  int v6; // r4
  int v7; // r12
  int v8; // r4
  unsigned int v9; // r9
  int *v10; // r11
  int *v11; // r8
  unsigned int v12; // r10
  int v13; // t1
  unsigned int v14; // r0
  int sols_ae; // r10
  int *v16; // r4
  int v17; // r1
  _BYTE *v18; // r2
  int v19; // r1
  int v20; // r3
  int v21; // r3
  int v23; // r3
  _DWORD *v24; // r1
  int v25; // r1
  int v26; // r3
  int v27; // r1
  __compar_fn_t v28; // r3
  _DWORD *v29; // r3
  int v30; // r2
  int v31; // t1
  char *v32; // r1
  int v33; // r1
  int v34; // [sp+3Ch] [bp-1178h]
  unsigned __int64 v36; // [sp+48h] [bp-116Ch]
  int v37; // [sp+54h] [bp-1160h] BYREF
  char v38; // [sp+58h] [bp-115Ch]
  char v39; // [sp+59h] [bp-115Bh]
  char v40; // [sp+5Ah] [bp-115Ah]
  char v41; // [sp+5Bh] [bp-1159h]
  struct timeval tv; // [sp+5Ch] [bp-1158h] BYREF
  struct timeval v43; // [sp+64h] [bp-1150h] BYREF
  _DWORD v44[3]; // [sp+6Ch] [bp-1148h] BYREF
  _DWORD s[8]; // [sp+78h] [bp-113Ch] BYREF
  __int64 v46[4]; // [sp+98h] [bp-111Ch] BYREF
  _DWORD v47[20]; // [sp+B8h] [bp-10FCh] BYREF
  _QWORD v48[21]; // [sp+108h] [bp-10ACh] BYREF
  char v49[4100]; // [sp+1B0h] [bp-1004h] BYREF

  v3 = a1[156];
  v34 = v3;
  v5 = a2 + 87;
  memset(s, 0, sizeof(s));
  v6 = *(unsigned __int8 *)(a2 + 48);
  memcpy(v47, (const void *)(v3 + 80 * v6 + 11520), sizeof(v47));
  v7 = *(_DWORD *)(v3 + 4 * (v6 + 1408));
  v37 = v7;
  v41 = v47[11];
  v39 = BYTE2(v47[11]);
  v40 = BYTE1(v47[11]);
  v38 = HIBYTE(v47[11]);
  base64_encode((int)v44, (int)&v37, 8);
  v8 = *(unsigned __int16 *)(a2 + 85);
  v9 = a1[34];
  v47[11] = v44[0];
  v47[12] = v44[1];
  v47[13] = v44[2];
  memset(v48, 0, sizeof(v48));
  gettimeofday(&tv, 0);
  memset(v46, 0, sizeof(v46));
  generate_sipkeys_ae((int)v47, 80, v46);
  graph_init_ae(v9);
  if ( v8 >> 2 )
  {
    v10 = (int *)(v5 + 4 * (v8 >> 2));
    v11 = (int *)(a2 + 87);
    do
    {
      v12 = sip_node_ae(v9, v46[0], v46[1], v46[2], v46[3], SHIDWORD(v46[3]), *v11, 0);
      v13 = *v11++;
      v14 = sip_node_ae(v9, v46[0], v46[1], v46[2], v46[3], SHIDWORD(v46[3]), v13, 1);
      graph_add_edge_ae(v9, v12 >> 1, v14 >> 1);
    }
    while ( v11 != v10 );
  }
  sols_ae = get_sols_ae(v9, v46[0], v46[1], v46[2], v46[3], SHIDWORD(v46[3]), (int)v48, (int *)(a2 + 87), v8 >> 2);
  if ( sols_ae )
  {
    V_LOCK();
    LOWORD(v26) = 24976;
    HIWORD(v26) = (unsigned int)"er_status/update_fanspeed.c" >> 16;
    LOWORD(v16) = -14512;
    logfmt_raw(v49, 0x1000u, 0, v26);
    HIWORD(v16) = (unsigned int)&unk_16B55C >> 16;
    V_UNLOCK();
    LOWORD(v27) = 24724;
    HIWORD(v27) = (unsigned int)"date_miner_status/update_chip_status.c" >> 16;
    zlog(*v16, v27, 152, "findcycle_ae", 12, 311, 20, v49);
    LOWORD(v28) = 11480;
    HIWORD(v28) = (unsigned int)&loc_528E8 >> 16;
    qsort(v48, 0x2Au, 4u, v28);
    v29 = &v47[19];
    v30 = a2 + 83;
    do
    {
      v31 = v29[1];
      ++v29;
      *(_DWORD *)(v30 + 4) = v31;
      v30 += 4;
    }
    while ( v29 != (_DWORD *)((char *)&v48[20] + 4) );
  }
  else
  {
    v16 = &g_zc;
  }
  graph_exit_ae(v9);
  gettimeofday(&v43, 0);
  V_LOCK();
  logfmt_raw(
    v49,
    0x1000u,
    0,
    "[FindCycle], runtime_id:%d time: %ld us",
    v9,
    v43.tv_usec + (_DWORD)&loc_F4240 * v43.tv_sec - 1000000 * tv.tv_sec - tv.tv_usec);
  V_UNLOCK();
  LOWORD(v17) = 24724;
  HIWORD(v17) = (unsigned int)"date_miner_status/update_chip_status.c" >> 16;
  zlog(*v16, v17, 152, "findcycle_ae", 12, 320, 20, v49);
  if ( sols_ae )
  {
    memset(s, 0, sizeof(s));
    v18 = v48;
    v19 = 0;
    do
    {
      v20 = v19 + 20;
      ++v19;
      v21 = *(_DWORD *)(a2 + 4 * v20 + 7);
      v18[3] = v21;
      v18[2] = BYTE1(v21);
      v18[1] = BYTE2(v21);
      *v18 = HIBYTE(v21);
      v18 += 4;
    }
    while ( v19 != 42 );
    blake2b(s, (int)v48, 168);
    HIBYTE(v36) = s[0];
    BYTE3(v36) = s[1];
    BYTE5(v36) = BYTE2(s[0]);
    BYTE6(v36) = BYTE1(s[0]);
    BYTE4(v36) = HIBYTE(s[0]);
    BYTE1(v36) = BYTE2(s[1]);
    BYTE2(v36) = BYTE1(s[1]);
    LOBYTE(v36) = HIBYTE(s[1]);
    if ( *(_QWORD *)(v34 + 8 * (*(unsigned __int8 *)(a2 + 48) + 768)) < v36 )
    {
      V_LOCK();
      LOWORD(v23) = 25072;
      HIWORD(v23) = (unsigned int)"re" >> 16;
      v24 = (_DWORD *)(v34 + 8 * (*(unsigned __int8 *)(a2 + 48) + 768));
      logfmt_raw(v49, 0x1000u, 0, v23, *(unsigned __int8 *)(a2 + 48), *(_DWORD *)(a2 + 81), v36, *v24, v24[1]);
      V_UNLOCK();
      LOWORD(v25) = 24724;
      HIWORD(v25) = (unsigned int)"date_miner_status/update_chip_status.c" >> 16;
      zlog(*v16, v25, 152, "check_nonce_ae", 14, 410, 20, v49);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    V_LOCK();
    LOWORD(v32) = -7948;
    HIWORD(v32) = (unsigned int)&loc_12D594 >> 16;
    V_INT((int)v48, v32, (int)a1[35]);
    logfmt_raw(
      v49,
      0x1000u,
      0,
      HIDWORD(v48[3]),
      v48[0],
      v48[1],
      v48[2],
      v48[3],
      "wc %d error_nonce %08x",
      *(unsigned __int8 *)(a2 + 48),
      *(_DWORD *)(a2 + 81));
    V_UNLOCK();
    LOWORD(v33) = 24724;
    HIWORD(v33) = (unsigned int)"date_miner_status/update_chip_status.c" >> 16;
    zlog(*v16, v33, 152, "check_nonce_ae", 14, 398, 20, v49);
    return 2;
  }
}
