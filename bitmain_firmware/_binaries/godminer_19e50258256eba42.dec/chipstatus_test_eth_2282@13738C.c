void *__fastcall chipstatus_test_eth_2282(int a1, int a2)
{
  char v2; // r0
  _DWORD *v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r3
  _DWORD *v11; // r1
  int v12; // r3
  _DWORD *v13; // r1
  int v14; // r5
  _DWORD *v15; // r3
  char *v16; // r12
  _DWORD *v17; // r4
  char *v18; // r5
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r1
  int (**v23)(); // r0
  unsigned int v24; // r0
  int (**v25)(); // r0
  void *v26; // r3
  _DWORD v30[8]; // [sp+1Ch] [bp-1070h] BYREF
  _BYTE v31[80]; // [sp+3Ch] [bp-1050h] BYREF
  int v32; // [sp+103Ch] [bp-50h]
  __int16 v33; // [sp+1040h] [bp-4Ch]
  int v34; // [sp+1044h] [bp-48h] BYREF
  _BYTE v35[7]; // [sp+1048h] [bp-44h]
  char v36; // [sp+104Fh] [bp-3Dh]
  int v37; // [sp+1050h] [bp-3Ch]
  __int16 v38; // [sp+1056h] [bp-36h]
  int v39; // [sp+1058h] [bp-34h]
  char *v40; // [sp+105Ch] [bp-30h]
  _BYTE *v41; // [sp+1060h] [bp-2Ch]
  unsigned int v42; // [sp+1064h] [bp-28h]
  void *ptr; // [sp+1068h] [bp-24h]
  void *v44; // [sp+106Ch] [bp-20h]
  void *v45; // [sp+1070h] [bp-1Ch]
  void *v46; // [sp+1074h] [bp-18h]
  void *v47; // [sp+1078h] [bp-14h]
  int i; // [sp+107Ch] [bp-10h]

  v47 = malloc(0x48u);
  if ( !a2 )
  {
    V_LOCK();
    logfmt_raw(v31, 0x1000u, 0, "cmd error test!!!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "chipstatus_test_eth_2282",
      24,
      8256,
      40,
      v31);
    v46 = malloc(0x48u);
    v34 = 155298389;
    *(_DWORD *)v35 = 14336;
    *(_DWORD *)&v35[3] = 0;
    *(_DWORD *)&v35[2] = reverse_byte_order_32(0xABCDu);
    v2 = BM_CRC5((_BYTE *)&v34 + 2, 8 * (HIBYTE(v34) - 1));
    v35[6] = v35[6] & 0xE0 | ~v2 & 0x1F;
    sub_106BA8(a1, 28, 202448640);
    sub_106BA8(a1, 52, 0x80000000);
    sub_106BA8(a1, 56, 61439);
    send_command_packet(a1, (unsigned __int8 *)&v34, 0xBu);
    usleep(0x2710u);
    sub_1062CC(a1, 52, v46);
    sub_1062CC(a1, 56, v46);
  }
  if ( a2 == 1 )
  {
    V_LOCK();
    logfmt_raw(v31, 0x1000u, 0, "work error test!!!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "chipstatus_test_eth_2282",
      24,
      8294,
      40,
      v31);
    memset(v31, 0, 0x28u);
    v32 = 0;
    v33 = 0;
    sub_106BA8(a1, 28, 201400064);
    sub_106BA8(a1, 52, 0x80000000);
    *(_BYTE *)(a1 + dword_C0F6E8 + 576) = 1;
    memset(v30, 0, sizeof(v30));
    str2hex((int)v30, (int)"ab77b2cb3d32b0b61304401cbe540448a4cacd7e98421a850503e2f0d102f1d3", 64);
    v3 = calloc(1u, 0x59u);
    v45 = v3;
    v4 = v30[1];
    v5 = v30[2];
    v6 = v30[3];
    v3[4] = v30[0];
    v3[5] = v4;
    v3[6] = v5;
    v3[7] = v6;
    v7 = v30[5];
    v8 = v30[6];
    v9 = v30[7];
    v3[8] = v30[4];
    v3[9] = v7;
    v3[10] = v8;
    v3[11] = v9;
    *((_QWORD *)v45 + 1) = *(_QWORD *)&dword_C0F6E8;
    v44 = malloc(0x1440u);
    ptr = calloc(1u, *(_DWORD *)(a1 + 880));
    v42 = 0;
    v41 = ptr;
    v40 = (char *)v45;
    v39 = *(_DWORD *)(a1 + 864);
    *(_BYTE *)ptr = 85;
    v41[1] = -86;
    v41[2] = 32;
    printf("\nglobal_work_idx : %02x job_id : %016x\n", *(unsigned __int8 *)(v39 + 35072), *((_DWORD *)v40 + 2));
    printf("pool_id:%016x\n", v40);
    v10 = *((_DWORD *)v40 + 3);
    v11 = (_DWORD *)(v39 + 8 * (*(unsigned __int8 *)(v39 + 35072) + 256));
    *v11 = *((_DWORD *)v40 + 2);
    v11[1] = v10;
    v12 = *((_DWORD *)v40 + 1);
    v13 = (_DWORD *)(v39 + 8 * *(unsigned __int8 *)(v39 + 35072));
    *v13 = *(_DWORD *)v40;
    v13[1] = v12;
    v41[3] = *(_BYTE *)(v39 + 35072);
    *(_BYTE *)(v39 + *(unsigned __int8 *)(v39 + 35072) + 34816) = v40[88];
    memcpy(v41 + 4, v40 + 16, 0x20u);
    memcpy((void *)(v39 + 40 * *(unsigned __int8 *)(v39 + 35072) + 0x2000), v40 + 16, 0x28u);
    memcpy((void *)(v39 + 32 * (*(unsigned __int8 *)(v39 + 35072) + 576)), v40 + 48, 0x20u);
    sub_FC5A8(v41 + 36, *((_QWORD *)v40 + 10));
    for ( i = 0; i <= 3; ++i )
    {
      v36 = v41[i + 36];
      v41[i + 36] = v41[i + 40];
      v41[i + 40] = v36;
    }
    v14 = *((_DWORD *)v40 + 21);
    v15 = (_DWORD *)(v39 + 8 * (*(unsigned __int8 *)(v39 + 35072) + 512));
    *v15 = 0;
    v15[1] = v14;
    ++*(_BYTE *)(v39 + 35072);
    *(_BYTE *)(v39 + 35072) = *(_BYTE *)(v39 + 35072);
    v38 = ~(unsigned __int16)BM_CRC16(v41 + 2, 42);
    v41[44] = HIBYTE(v38);
    v41[45] = v38;
    v42 = 46;
    v16 = (char *)ptr;
    v17 = v31;
    v18 = (char *)ptr + 32;
    do
    {
      v19 = *((_DWORD *)v16 + 1);
      v20 = *((_DWORD *)v16 + 2);
      v21 = *((_DWORD *)v16 + 3);
      *v17 = *(_DWORD *)v16;
      v17[1] = v19;
      v17[2] = v20;
      v17[3] = v21;
      v16 += 16;
      v17 += 4;
    }
    while ( v16 != v18 );
    v22 = *((_DWORD *)v16 + 1);
    *v17 = *(_DWORD *)v16;
    v17[1] = v22;
    v32 = *((_DWORD *)ptr + 10);
    v33 = *((_WORD *)ptr + 22);
    pthread_mutex_lock((pthread_mutex_t *)(a1 + 992));
    do
    {
      v23 = dev_ctrl();
      v24 = ((int (__fastcall *)(_DWORD))v23[22])(*(_DWORD *)(a1 + 264));
    }
    while ( v24 < v42 );
    v25 = dev_ctrl();
    v37 = ((int (__fastcall *)(_DWORD, void *, unsigned int))v25[16])(*(_DWORD *)(a1 + 264), ptr, v42);
    pthread_mutex_unlock((pthread_mutex_t *)(a1 + 992));
    sub_FC004(a1 + 1144, v42, (unsigned __int8 *)ptr, *(_DWORD *)(a1 + 272));
    if ( ptr )
      free(ptr);
    sleep(1u);
    if ( v45 )
      free(v45);
    if ( v44 )
      free(v44);
    usleep(0x2710u);
    sub_1062CC(a1, 52, v47);
  }
  v26 = v47;
  if ( v47 )
    free(v47);
  return v26;
}
