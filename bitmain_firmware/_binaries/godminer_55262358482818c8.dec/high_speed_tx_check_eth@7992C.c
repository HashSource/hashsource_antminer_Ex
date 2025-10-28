int __fastcall high_speed_tx_check_eth(int a1)
{
  char *v2; // r1
  int v3; // r4
  int v4; // r4
  int v5; // r1
  int i; // r4
  unsigned __int8 v7; // r1
  int v8; // r9
  _DWORD *v9; // r5
  int *v10; // r12
  int *v11; // r4
  int v12; // r0
  int v13; // r1
  int *v14; // lr
  int v15; // r2
  int v16; // r3
  int v18; // r11
  int v19; // r10
  char *v20; // r6
  char *v21; // r5
  int v22; // t1
  const char *v23; // r1
  unsigned int v24; // r3
  char *v25; // r0
  int v26; // r2
  bool v27; // cc
  int v28; // r3
  int v29; // r1
  int v30; // r3
  int v31; // r1
  int v32; // [sp+4h] [bp-1148h]
  int v33; // [sp+20h] [bp-112Ch]
  unsigned int v34; // [sp+28h] [bp-1124h]
  int v35; // [sp+30h] [bp-111Ch]
  int *v37; // [sp+38h] [bp-1114h]
  int v38; // [sp+44h] [bp-1108h] BYREF
  _DWORD v39[6]; // [sp+48h] [bp-1104h] BYREF
  _DWORD v40[7]; // [sp+60h] [bp-10ECh] BYREF
  int v41; // [sp+7Ch] [bp-10D0h]
  char v42; // [sp+83h] [bp-10C9h] BYREF
  int v43; // [sp+84h] [bp-10C8h] BYREF
  char v44; // [sp+C3h] [bp-1089h] BYREF
  _BYTE v45[132]; // [sp+C4h] [bp-1088h] BYREF
  _DWORD v46[2]; // [sp+148h] [bp-1004h] BYREF
  int v47; // [sp+150h] [bp-FFCh]
  int v48; // [sp+154h] [bp-FF8h]

  V_LOCK();
  LOWORD(v2) = 23936;
  HIWORD(v2) = (unsigned int)"p" >> 16;
  V_INT((int)v40, v2, *(int *)(a1 + 248));
  LOWORD(v3) = -17388;
  HIWORD(v3) = (unsigned int)"addr %04x reg_data %08x" >> 16;
  v33 = v3;
  v4 = 0;
  logfmt_raw(
    (char *)v46,
    0x1000u,
    0,
    v41,
    v40[0],
    v40[1],
    v40[2],
    v40[3],
    v40[4],
    v40[5],
    v40[6],
    v41,
    v33,
    "high_speed_tx_check_eth");
  V_UNLOCK();
  LOWORD(v5) = -17724;
  HIWORD(v5) = (unsigned int)&unk_16BAAC >> 16;
  zlog(g_zc, v5, 174, "high_speed_tx_check_eth", 23, 329, 60, v46);
  do
  {
    sub_792A0(a1, v4, 19, v4);
    ++v4;
    usleep(0x2710u);
  }
  while ( v4 != 16 );
  for ( i = 0; i != 16; ++i )
  {
    v7 = i;
    sub_792A0(a1, v7, 12, 3);
  }
  v37 = v39;
  memset(v45, 0, 0x81u);
  v39[0] = 0;
  v39[1] = 4;
  v39[2] = 7000000;
  v39[3] = 7000004;
  v39[4] = 14090220;
  v39[5] = 14090224;
  do
  {
    v8 = 0;
    v35 = *v37++;
    do
    {
      v38 = 0;
      v46[0] = 0;
      v46[1] = v35;
      v47 = 0;
      v48 = 0;
      BYTE1(v47) = v8;
      v9 = malloc(0x4Cu);
      *v9 = 0;
      v9[1] = 0;
      v9[2] = 0;
      (*(void (__fastcall **)(int, _DWORD *, int, _DWORD *, int *, int, int, _DWORD))(a1 + 288))(
        a1,
        v46,
        1,
        v9,
        &v38,
        v32,
        2000,
        0);
      v10 = (_DWORD *)((char *)v9 + 10);
      v11 = &v43;
      do
      {
        v12 = *v10;
        v10 += 4;
        v13 = *(v10 - 3);
        v14 = v11;
        v15 = *(v10 - 2);
        v11 += 4;
        v16 = *(v10 - 1);
        *v14 = v12;
        v14[1] = v13;
        v14[2] = v15;
        v14[3] = v16;
      }
      while ( v10 != (_DWORD *)((char *)v9 + 74) );
      free(v9);
      if ( v38 )
      {
        LOWORD(v18) = -17380;
        LOWORD(v19) = -17724;
        v20 = &v42;
        v21 = v45;
        v34 = 0;
        do
        {
          V_LOCK();
          v22 = (unsigned __int8)*++v20;
          HIWORD(v18) = (unsigned int)"x reg_data %08x" >> 16;
          logfmt_raw((char *)v46, 0x1000u, 0, v18, v8, v22);
          V_UNLOCK();
          HIWORD(v19) = (unsigned int)&unk_16BAAC >> 16;
          zlog(g_zc, v19, 174, "high_speed_tx_check_eth", 23, 387, 20, v46);
          LOWORD(v23) = 15512;
          v24 = (unsigned __int8)(v22 - 1);
          v25 = v21;
          v26 = v22;
          v27 = v24 > 0xFD;
          if ( v24 > 0xFD )
            v24 = v34;
          v21 += 2;
          if ( v27 )
            v34 = ++v24;
          HIWORD(v23) = (unsigned int)"ID is different %02x != %02x" >> 16;
          sprintf(v25, v23, v26, v24);
        }
        while ( v20 != &v44 );
        V_LOCK();
        LOWORD(v28) = -17352;
        HIWORD(v28) = (unsigned int)"READ for chip %1d: %02x" >> 16;
        logfmt_raw((char *)v46, 0x1000u, 0, v28, v35, v8, v45);
        V_UNLOCK();
        LOWORD(v29) = -17724;
        HIWORD(v29) = (unsigned int)&unk_16BAAC >> 16;
        zlog(g_zc, v29, 174, "high_speed_tx_check_eth", 23, 394, 60, v46);
        if ( v34 == 64 )
        {
          V_LOCK();
          LOWORD(v30) = -17308;
          HIWORD(v30) = (unsigned int)" READ for chip %1d: %s" >> 16;
          logfmt_raw((char *)v46, 0x1000u, 0, v30);
          V_UNLOCK();
          LOWORD(v31) = -17724;
          HIWORD(v31) = (unsigned int)&unk_16BAAC >> 16;
          zlog(g_zc, v31, 174, "high_speed_tx_check_eth", 23, 397, 60, v46);
          while ( 1 )
            ;
        }
      }
      ++v8;
    }
    while ( v8 != 8 );
  }
  while ( v37 != v40 );
  return 0;
}
