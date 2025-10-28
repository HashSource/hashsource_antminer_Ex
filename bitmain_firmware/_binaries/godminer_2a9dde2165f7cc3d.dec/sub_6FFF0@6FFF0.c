int __fastcall sub_6FFF0(int a1, int a2, __int16 a3, void *a4)
{
  int v4; // r7
  unsigned __int8 v5; // r9
  int v8; // r5
  int v9; // r0
  int v10; // r0
  int v11; // r9
  char *v12; // r8
  int v13; // r0
  int v15; // [sp+4h] [bp-1088h]
  char *src; // [sp+44h] [bp-1048h]
  int v18; // [sp+54h] [bp-1038h] BYREF
  _DWORD v19[2]; // [sp+58h] [bp-1034h] BYREF
  __int16 v20; // [sp+60h] [bp-102Ch]
  __int16 v21; // [sp+62h] [bp-102Ah]
  int v22; // [sp+64h] [bp-1028h]
  int v23; // [sp+68h] [bp-1024h] BYREF
  _BYTE v24[4100]; // [sp+88h] [bp-1004h] BYREF

  v4 = *(_DWORD *)(a1 + 392);
  v5 = a2;
  if ( a2 == 255 )
    v4 *= 16;
  v18 = 0;
  V_LOCK(a1);
  v8 = 0;
  v9 = logfmt_raw((int)v24, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_get_core_status_ETH",
    31,
    1372,
    20,
    v24);
  v20 = 1;
  v19[0] = 0;
  v19[1] = 0;
  v21 = a3;
  v22 = v5;
  src = (char *)calloc(12 * v4, 1u);
  v10 = (*(int (__fastcall **)(int, _DWORD *, int, char *, int *, int, int, _DWORD))(a1 + 268))(
          a1,
          v19,
          v4,
          src,
          &v18,
          v15,
          2000,
          0);
  v11 = v18;
  if ( v18 > 0 )
  {
    v12 = src;
    do
    {
      V_LOCK(v10);
      ++v8;
      v12 += 12;
      V_INT((int)&v23, "chain");
      v13 = logfmt_raw((int)v24, 0x1000u);
      V_UNLOCK(v13);
      v10 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/backend/chip_setting.c",
              153,
              "ChipSetting_get_core_status_ETH",
              31,
              1384,
              20,
              v24);
      v11 = v18;
    }
    while ( v18 > v8 );
  }
  if ( a4 )
    memcpy(a4, src, 12 * v4);
  free(src);
  return v11;
}
