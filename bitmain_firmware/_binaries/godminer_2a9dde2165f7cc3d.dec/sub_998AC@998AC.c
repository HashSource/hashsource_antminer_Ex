int __fastcall sub_998AC(int a1, int a2, __int16 a3, void *a4)
{
  int v4; // r10
  unsigned __int8 v5; // r9
  int v6; // r7
  int v9; // r0
  int v10; // r5
  char *v11; // r0
  int v12; // r2
  char *v13; // r10
  int v14; // r0
  int v15; // r9
  int v16; // r1
  char *v17; // r7
  int v18; // r0
  int v20; // [sp+4h] [bp-1088h]
  int v21; // [sp+3Ch] [bp-1050h]
  char *src; // [sp+44h] [bp-1048h]
  int n; // [sp+4Ch] [bp-1040h]
  int v25; // [sp+54h] [bp-1038h] BYREF
  _DWORD v26[2]; // [sp+58h] [bp-1034h] BYREF
  __int16 v27; // [sp+60h] [bp-102Ch]
  __int16 v28; // [sp+62h] [bp-102Ah]
  int v29; // [sp+64h] [bp-1028h]
  int v30; // [sp+68h] [bp-1024h] BYREF
  _BYTE v31[4100]; // [sp+88h] [bp-1004h] BYREF

  v4 = *(_DWORD *)(a1 + 392);
  v5 = a2;
  LOWORD(v6) = (unsigned __int16)"ChipSetting_get_core_status_RVN";
  if ( a2 == 255 )
    v4 *= 8;
  HIWORD(v6) = (unsigned int)"ChipSetting_get_core_status_RVN" >> 16;
  v25 = 0;
  V_LOCK(a1);
  v9 = logfmt_raw((int)v31, 0x1000u);
  v10 = 0;
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    v6 + 32,
    31,
    1372,
    20,
    v31);
  v27 = 1;
  v26[0] = 0;
  v26[1] = 0;
  n = 12 * v4;
  v11 = (char *)calloc(12 * v4, 1u);
  v28 = a3;
  v29 = v5;
  v12 = v4;
  src = v11;
  v13 = v11;
  v14 = (*(int (__fastcall **)(int, _DWORD *, int, char *, int *, int, int, _DWORD))(a1 + 268))(
          a1,
          v26,
          v12,
          v11,
          &v25,
          v20,
          2000,
          0);
  v15 = v25;
  if ( v25 > 0 )
  {
    v16 = v6 + 32;
    v17 = v13;
    v21 = v16;
    do
    {
      V_LOCK(v14);
      ++v10;
      v17 += 12;
      V_INT((int)&v30, "chain");
      v18 = logfmt_raw((int)v31, 0x1000u);
      V_UNLOCK(v18);
      v14 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/backend/chip_setting.c",
              153,
              v21,
              31,
              1384,
              20,
              v31);
      v15 = v25;
    }
    while ( v25 > v10 );
  }
  if ( a4 )
    memcpy(a4, src, n);
  free(src);
  return v15;
}
