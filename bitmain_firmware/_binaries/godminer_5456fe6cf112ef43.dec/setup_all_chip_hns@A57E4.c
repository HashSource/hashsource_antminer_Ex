int __fastcall setup_all_chip_hns(int a1)
{
  float v1; // s15
  int v3; // r6
  int v4; // r0
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r1
  char v9; // r3
  int v10; // r6
  void (__fastcall *v11)(int, int *); // r3
  char *v12; // r7
  void (__fastcall *v13)(int, int *); // r2
  char v14; // r10
  char v15; // r0
  int v16; // r0
  int v17; // r0
  int result; // r0
  bool v19; // zf
  int v20; // [sp+18h] [bp-1004h] BYREF
  int v21; // [sp+1Ch] [bp-1000h]
  int v22; // [sp+20h] [bp-FFCh]
  int v23; // [sp+24h] [bp-FF8h]

  v3 = *(_DWORD *)(a1 + 196);
  V_LOCK(a1);
  v4 = logfmt_raw((int)&v20, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_hns/backend_hns.c",
    154,
    "setup_all_chip_hns",
    18,
    248,
    60,
    &v20);
  v5 = sub_12CC58(256, (unsigned __int8)v3);
  v6 = *(_DWORD *)(a1 + 296);
  if ( (_BYTE)v3 )
  {
    v7 = v6 - 1;
    v8 = v6 - 1 + (unsigned __int8)v3;
    v9 = 0;
    do
    {
      *(_BYTE *)++v7 = v9;
      v9 += v5;
    }
    while ( v7 != v8 );
    v6 = *(_DWORD *)(a1 + 296);
  }
  *(_DWORD *)(a1 + 240) = v5;
  (*(void (__fastcall **)(int, int, int))(a1 + 148))(a1, v6, v3);
  if ( !sub_A5064(a1) )
    return 3;
  v10 = 0;
  v11 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v22 = 6291457;
  v21 = 0;
  v20 = 6656;
  v23 = 0;
  v11(a1, &v20);
  sub_A578C(a1, 8);
  sub_A578C(a1, 16);
  chip_setting_ticket_value_hns(a1, 255);
  chip_setting_misc_hns(a1);
  v12 = (char *)calloc(1u, 0x170u);
  do
  {
    v22 = 131073;
    v20 = 23130;
    v23 = (unsigned __int8)v10++;
    v13 = *(void (__fastcall **)(int, int *))(a1 + 160);
    v21 = 0;
    v13(a1, &v20);
    usleep((__useconds_t)&stru_1387C.st_value);
    usleep(0x4E20u);
    v14 = *(_BYTE *)(a1 + 136);
    v15 = rand();
    memset(v12 + 40, (unsigned __int8)(v14 + v15), 0x100u);
    push_work_base(a1, v12);
    usleep((__useconds_t)&loc_30D40);
  }
  while ( v10 != 64 );
  free(v12);
  V_LOCK(v16);
  v17 = logfmt_raw((int)&v20, 0x1000u);
  V_UNLOCK(v17);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_hns/backend_hns.c",
    154,
    "setup_all_chip_hns",
    18,
    298,
    60,
    &v20);
  if ( !sub_A5064(a1) )
    return 3;
  result = *(unsigned __int8 *)(a1 + 268);
  v19 = result == 0;
  if ( *(_BYTE *)(a1 + 268) )
    result = 0;
  else
    v1 = *(float *)(a1 + 760);
  if ( v19 )
    *(_DWORD *)(a1 + 272) = (int)v1;
  return result;
}
