int __fastcall softreset_all_chip_kas(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r0
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r0
  int v10; // [sp+28h] [bp-1024h] BYREF
  int v11; // [sp+48h] [bp-1004h] BYREF
  int v12; // [sp+4Ch] [bp-1000h]
  int v13; // [sp+50h] [bp-FFCh]
  int v14; // [sp+54h] [bp-FF8h]
  int v15; // [sp+58h] [bp-FF4h]
  int v16; // [sp+5Ch] [bp-FF0h]
  int v17; // [sp+60h] [bp-FECh]
  int v18; // [sp+64h] [bp-FE8h]
  int v19; // [sp+68h] [bp-FE4h]
  int v20; // [sp+6Ch] [bp-FE0h]
  int v21; // [sp+70h] [bp-FDCh]
  int v22; // [sp+74h] [bp-FD8h]
  int v23; // [sp+78h] [bp-FD4h]
  __int16 v24; // [sp+7Ch] [bp-FD0h]

  V_LOCK(a1);
  V_INT((int)&v10, "chain");
  v2 = 10;
  v3 = logfmt_raw((int)&v11, 0x1000u);
  V_UNLOCK(v3);
  v4 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
         174,
         "softreset_all_chip_kas",
         22,
         606,
         40,
         &v11);
  V_LOCK(v4);
  v5 = logfmt_raw((int)&v11, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_software_reset_KAS_2380",
    35,
    125,
    20,
    &v11);
  v13 = 4456449;
  v14 = 0;
  v11 = 3;
  v12 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 240))(a1, &v11);
  do
  {
    usleep((__useconds_t)&stru_1869C.st_value);
    v11 = 53520981;
    v12 = -1996423168;
    v13 = 1568885659;
    v14 = -2022340884;
    v15 = 739994112;
    v16 = 2023104256;
    v17 = 504402544;
    v18 = 232286627;
    v19 = 1496646687;
    v20 = 295890251;
    v21 = 1890778236;
    v22 = 60442;
    v23 = 0;
    v24 = 13171;
    v6 = pthread_mutex_lock((pthread_mutex_t *)(a1 + 896));
    do
    {
      v7 = dev_ctrl(v6);
      v6 = (*(int (__fastcall **)(_DWORD))(v7 + 68))(*(_DWORD *)(a1 + 220));
    }
    while ( v6 <= 0x35 );
    v8 = dev_ctrl(v6);
    (*(void (__fastcall **)(_DWORD, int *, int))(v8 + 52))(*(_DWORD *)(a1 + 220), &v11, 54);
    pthread_mutex_unlock((pthread_mutex_t *)(a1 + 896));
    --v2;
  }
  while ( v2 );
  sub_840D8(a1, 10, 0);
  sub_843AC((_DWORD *)a1, 127);
  return 0;
}
