int __fastcall sub_A5B18(int a1, int a2)
{
  int v2; // r4
  unsigned __int16 *v5; // r8
  int v6; // r0
  int v7; // r10
  unsigned __int16 *v8; // r5
  int v9; // r0
  int v11; // [sp+3Ch] [bp-1038h] BYREF
  _DWORD v12[2]; // [sp+40h] [bp-1034h] BYREF
  __int16 v13; // [sp+48h] [bp-102Ch]
  __int16 v14; // [sp+4Ah] [bp-102Ah]
  int v15; // [sp+4Ch] [bp-1028h]
  char v16[32]; // [sp+50h] [bp-1024h] BYREF
  _BYTE v17[4100]; // [sp+70h] [bp-1004h] BYREF

  v2 = 0;
  v13 = 1;
  v12[1] = 0;
  v15 = 0;
  v11 = 0;
  v12[0] = 0;
  v14 = a2;
  v5 = (unsigned __int16 *)calloc(0xCu, 1u);
  v6 = (*(int (__fastcall **)(int, _DWORD *, int, unsigned __int16 *, int *))(a1 + 176))(a1, v12, 1, v5, &v11);
  v7 = v11;
  if ( v11 > 0 )
  {
    v8 = v5;
    do
    {
      while ( 1 )
      {
        ++v2;
        if ( a2 == v8[3] )
          break;
        v7 = v11;
        v8 += 6;
        if ( v2 >= v11 )
          goto LABEL_6;
      }
      V_LOCK(v6);
      v8 += 6;
      V_INT((int)v16, "chain");
      v9 = logfmt_raw((int)v17, 0x1000u);
      V_UNLOCK(v9);
      v6 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/backend/chip_setting.c",
             143,
             "ChipSetting_get_chip_status_HNS",
             31,
             758,
             60,
             v17);
      v7 = v11;
    }
    while ( v2 < v11 );
  }
LABEL_6:
  free(v5);
  return v7;
}
