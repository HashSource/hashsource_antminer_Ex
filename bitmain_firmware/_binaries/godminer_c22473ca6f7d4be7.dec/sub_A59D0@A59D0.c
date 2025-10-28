int __fastcall sub_A59D0(int a1, int a2)
{
  int v2; // r4
  _DWORD *v5; // r8
  int v6; // r10
  _DWORD *v7; // r5
  int v9; // [sp+3Ch] [bp-1038h] BYREF
  _DWORD v10[2]; // [sp+40h] [bp-1034h] BYREF
  __int16 v11; // [sp+48h] [bp-102Ch]
  __int16 v12; // [sp+4Ah] [bp-102Ah]
  int v13; // [sp+4Ch] [bp-1028h]
  _DWORD v14[7]; // [sp+50h] [bp-1024h] BYREF
  int v15; // [sp+6Ch] [bp-1008h]
  char v16[4100]; // [sp+70h] [bp-1004h] BYREF

  v2 = 0;
  v11 = 1;
  v10[1] = 0;
  v13 = 0;
  v9 = 0;
  v10[0] = 0;
  v12 = a2;
  v5 = calloc(0xCu, 1u);
  (*(void (__fastcall **)(int, _DWORD *, int, _DWORD *, int *))(a1 + 176))(a1, v10, 1, v5, &v9);
  v6 = v9;
  if ( v9 > 0 )
  {
    v7 = v5;
    do
    {
      while ( 1 )
      {
        ++v2;
        if ( a2 == *((unsigned __int16 *)v7 + 3) )
          break;
        v6 = v9;
        v7 += 3;
        if ( v2 >= v9 )
          goto LABEL_6;
      }
      V_LOCK();
      v7 += 3;
      V_INT((int)v14, "chain", *(int *)(a1 + 140));
      logfmt_raw(
        v16,
        0x1000u,
        0,
        v15,
        v14[0],
        v14[1],
        v14[2],
        v14[3],
        v14[4],
        v14[5],
        v14[6],
        v15,
        "[Chip status] asic %02x, reg %02x state %08x",
        *((unsigned __int8 *)v7 - 8),
        *((unsigned __int16 *)v7 - 3),
        *(v7 - 3));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/chip_setting.c",
        143,
        "ChipSetting_get_chip_status_HNS",
        31,
        758,
        60,
        v16);
      v6 = v9;
    }
    while ( v2 < v9 );
  }
LABEL_6:
  free(v5);
  return v6;
}
