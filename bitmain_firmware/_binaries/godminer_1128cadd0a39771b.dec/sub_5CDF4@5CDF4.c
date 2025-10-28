int __fastcall sub_5CDF4(int a1, char a2, int a3, __int16 a4, void *a5)
{
  bool v5; // zf
  int v6; // r6
  unsigned __int8 v7; // r9
  int v8; // r2
  int v9; // r10
  int v12; // r0
  char *v13; // r11
  int v14; // r0
  int v15; // r10
  char *v16; // r4
  int v17; // r0
  int v19; // [sp+4h] [bp-1088h]
  size_t nmemb; // [sp+48h] [bp-1044h]
  int v22; // [sp+54h] [bp-1038h] BYREF
  _DWORD v23[2]; // [sp+58h] [bp-1034h] BYREF
  char v24; // [sp+60h] [bp-102Ch]
  char v25; // [sp+61h] [bp-102Bh]
  __int16 v26; // [sp+62h] [bp-102Ah]
  int v27; // [sp+64h] [bp-1028h]
  int v28; // [sp+68h] [bp-1024h] BYREF
  _BYTE v29[4088]; // [sp+88h] [bp-1004h] BYREF

  v5 = a3 == 255;
  v6 = 0;
  v7 = a3;
  if ( a3 == 255 )
    v8 = 192;
  else
    v8 = 12;
  if ( v5 )
    v9 = 16;
  else
    v9 = 1;
  nmemb = v8;
  v22 = 0;
  V_LOCK(a1);
  v12 = logfmt_raw((int)v29, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_get_single_chip_core_status_ETH",
    43,
    896,
    20,
    v29);
  v23[0] = 0;
  v24 = 0;
  v23[1] = 0;
  v25 = a2;
  v13 = (char *)calloc(nmemb, 1u);
  v26 = a4;
  v27 = v7;
  v14 = (*(int (__fastcall **)(int, _DWORD *, int, char *, int *, int, int, _DWORD))(a1 + 192))(
          a1,
          v23,
          v9,
          v13,
          &v22,
          v19,
          2000,
          0);
  v15 = v22;
  if ( v22 > 0 )
  {
    v16 = v13;
    do
    {
      V_LOCK(v14);
      ++v6;
      v16 += 12;
      V_INT((int)&v28, "chain");
      v17 = logfmt_raw((int)v29, 0x1000u);
      V_UNLOCK(v17);
      v14 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/chip_setting.c",
              143,
              "ChipSetting_get_single_chip_core_status_ETH",
              43,
              908,
              20,
              v29);
      v15 = v22;
    }
    while ( v22 > v6 );
  }
  if ( a5 )
    memcpy(a5, v13, nmemb);
  free(v13);
  return v15;
}
