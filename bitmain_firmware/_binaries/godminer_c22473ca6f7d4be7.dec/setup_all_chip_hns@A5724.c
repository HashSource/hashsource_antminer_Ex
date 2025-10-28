int __fastcall setup_all_chip_hns(int a1)
{
  float v1; // s15
  int v3; // r6
  int v4; // r3
  _DWORD *v5; // r12
  _DWORD *v6; // r8
  int v7; // r1
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r1
  char v12; // r3
  int v13; // r6
  void (__fastcall *v14)(int, int *); // r3
  char *v15; // r7
  void (__fastcall *v16)(int, int *); // r2
  char v17; // r10
  char v18; // r0
  int v19; // r3
  int result; // r0
  bool v21; // zf
  _DWORD *v22; // [sp+14h] [bp-1008h]
  int v23; // [sp+18h] [bp-1004h] BYREF
  int v24; // [sp+1Ch] [bp-1000h]
  int v25; // [sp+20h] [bp-FFCh]
  int v26; // [sp+24h] [bp-FF8h]

  v3 = *(_DWORD *)(a1 + 196);
  V_LOCK();
  LOWORD(v4) = -23476;
  LOWORD(v5) = -14512;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  HIWORD(v4) = (unsigned int)"e" >> 16;
  v6 = v5;
  v22 = v5;
  logfmt_raw((char *)&v23, 0x1000u, 0, v4, "setup_all_chip_hns");
  V_UNLOCK();
  LOWORD(v7) = -17424;
  HIWORD(v7) = (unsigned int)&unk_13AF20 >> 16;
  zlog(*v6, v7, 154, "setup_all_chip_hns", 18, 248, 60, &v23);
  v8 = sub_12CAD0(256, (unsigned __int8)v3);
  v9 = *(_DWORD *)(a1 + 296);
  if ( (_BYTE)v3 )
  {
    v10 = v9 - 1;
    v11 = v9 - 1 + (unsigned __int8)v3;
    v12 = 0;
    do
    {
      *(_BYTE *)++v10 = v12;
      v12 += v8;
    }
    while ( v10 != v11 );
    v9 = *(_DWORD *)(a1 + 296);
  }
  *(_DWORD *)(a1 + 240) = v8;
  (*(void (__fastcall **)(int, int, int))(a1 + 148))(a1, v9, v3);
  if ( !sub_A4FA4(a1) )
    return 3;
  v13 = 0;
  v14 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v25 = 6291457;
  v24 = 0;
  v23 = 6656;
  v26 = 0;
  v14(a1, &v23);
  sub_A56CC(a1, 8);
  sub_A56CC(a1, 16);
  chip_setting_ticket_value_hns(a1, 255);
  chip_setting_misc_hns(a1);
  v15 = (char *)calloc(1u, 0x170u);
  do
  {
    v25 = 131073;
    v23 = 23130;
    v26 = (unsigned __int8)v13++;
    v16 = *(void (__fastcall **)(int, int *))(a1 + 160);
    v24 = 0;
    v16(a1, &v23);
    usleep((__useconds_t)&stru_13874.st_info);
    usleep(0x4E20u);
    v17 = *(_BYTE *)(a1 + 136);
    v18 = rand();
    memset(v15 + 40, (unsigned __int8)(v17 + v18), 0x100u);
    push_work_base(a1, (int)v15);
    usleep((__useconds_t)&loc_30D40);
  }
  while ( v13 != 64 );
  free(v15);
  V_LOCK();
  LOWORD(v19) = 28308;
  HIWORD(v19) = (unsigned int)"_id:%d time: %ld us" >> 16;
  logfmt_raw((char *)&v23, 0x1000u, 0, v19);
  V_UNLOCK();
  zlog(
    *v22,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_hns/backend_hns.c",
    154,
    "setup_all_chip_hns",
    18,
    298,
    60,
    &v23);
  if ( !sub_A4FA4(a1) )
    return 3;
  result = *(unsigned __int8 *)(a1 + 268);
  v21 = result == 0;
  if ( *(_BYTE *)(a1 + 268) )
    result = 0;
  else
    v1 = *(float *)(a1 + 760);
  if ( v21 )
    *(_DWORD *)(a1 + 272) = (int)v1;
  return result;
}
