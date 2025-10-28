unsigned int __fastcall sub_93298(int a1, int a2, void *a3)
{
  int v3; // r4
  unsigned __int16 *v6; // r8
  int v7; // r0
  unsigned int v8; // r10
  unsigned __int16 *v9; // r5
  int v10; // r0
  unsigned int v11; // r2
  int v14; // [sp+44h] [bp-1038h] BYREF
  _DWORD v15[2]; // [sp+48h] [bp-1034h] BYREF
  __int16 v16; // [sp+50h] [bp-102Ch]
  __int16 v17; // [sp+52h] [bp-102Ah]
  int v18; // [sp+54h] [bp-1028h]
  char v19[32]; // [sp+58h] [bp-1024h] BYREF
  _BYTE v20[4100]; // [sp+78h] [bp-1004h] BYREF

  v3 = 0;
  v16 = 1;
  v15[1] = 0;
  v18 = 0;
  v14 = 0;
  v15[0] = 0;
  v17 = a2;
  v6 = (unsigned __int16 *)calloc(0x60u, 1u);
  v7 = (*(int (__fastcall **)(int, _DWORD *, int, unsigned __int16 *, int *))(a1 + 260))(a1, v15, 8, v6, &v14);
  v8 = v14;
  if ( v14 > 0 )
  {
    v9 = v6;
    do
    {
      while ( 1 )
      {
        ++v3;
        if ( v9[3] == a2 )
          break;
        v8 = v14;
        v9 += 6;
        if ( v14 <= v3 )
          goto LABEL_6;
      }
      V_LOCK(v7);
      v9 += 6;
      V_INT((int)v19, "chain");
      v10 = logfmt_raw((int)v20, 0x1000u);
      V_UNLOCK(v10);
      v7 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/backend/chip_setting.c",
             153,
             "ChipSetting_get_chip_status_RVN",
             31,
             1234,
             20,
             v20);
      v8 = v14;
    }
    while ( v14 > v3 );
  }
LABEL_6:
  if ( a3 )
  {
    v11 = *(_DWORD *)(a1 + 392);
    if ( v8 < v11 )
      v11 = v8;
    memcpy(a3, v6, 12 * v11);
  }
  free(v6);
  return v8;
}
