int __fastcall get_pcba_test_level_ckb(_DWORD *a1, _DWORD *a2)
{
  int v2; // r4
  int (**v6)(); // r0
  unsigned __int16 *v7; // r1
  int v8; // r2
  int v9; // r0
  int v10; // r12
  unsigned __int16 *i; // r3
  int v12; // r3
  int j; // r2
  int v14; // r3
  char *v15; // r1
  int v16; // r2
  char *v17; // r7
  _DWORD *v18; // r3
  int v19; // r1
  int v20; // r6
  char *v21; // r1
  const char *v22; // r2
  char *v23; // r1
  _DWORD *v24; // r3
  int v25; // r1
  int v26; // [sp+48h] [bp-106Ch] BYREF
  __int16 v27; // [sp+4Ch] [bp-1068h]
  _DWORD v28[7]; // [sp+50h] [bp-1064h] BYREF
  int v29; // [sp+6Ch] [bp-1048h]
  _DWORD v30[8]; // [sp+70h] [bp-1044h] BYREF
  _DWORD v31[7]; // [sp+90h] [bp-1024h] BYREF
  int v32; // [sp+ACh] [bp-1008h]
  char v33[4100]; // [sp+B0h] [bp-1004h] BYREF

  v2 = a1[192];
  v27 = 0;
  v26 = 0;
  if ( v2 )
  {
LABEL_2:
    *a2 = v2;
    return 0;
  }
  v6 = dev_ctrl((int)a1);
  if ( ((int (__fastcall *)(_DWORD, int, int, int *))v6[19])(a1[34], 52, 393216, &v26) )
  {
    v7 = (unsigned __int16 *)&unk_136444;
    v8 = 700;
    v9 = (unsigned __int16)v26;
    v10 = HIWORD(v26);
    for ( i = (unsigned __int16 *)&unk_136444; ; v8 = i[2] )
    {
      if ( (unsigned __int16)v26 == v8
        && i[3] == HIWORD(v26)
        && *((unsigned __int8 *)i + 8) == (unsigned __int8)v27
        && *((unsigned __int8 *)i + 9) == HIBYTE(v27) )
      {
        v12 = *(_DWORD *)&aChipsettingTic[10 * v2 + 220];
        a1[192] = v12;
        goto LABEL_13;
      }
      ++v2;
      i += 5;
      if ( v2 == 5 )
        break;
    }
    v12 = a1[192];
LABEL_13:
    if ( !v12 )
    {
      for ( j = 700; v9 != j || v7[3] != v10; j = v7[2] )
      {
        ++v12;
        v7 += 5;
        if ( v12 == 5 )
          goto LABEL_20;
      }
      v14 = *(_DWORD *)&aChipsettingTic[10 * v12 + 220];
      a1[192] = v14;
      if ( v14 )
        goto LABEL_21;
LABEL_20:
      a1[192] = 5;
    }
LABEL_21:
    V_LOCK();
    LOWORD(v15) = -7948;
    HIWORD(v15) = (unsigned int)&loc_12D594 >> 16;
    V_INT((int)v31, v15, (int)a1[35]);
    LOWORD(v16) = 27376;
    HIWORD(v16) = (unsigned int)&unk_135E20 >> 16;
    v17 = &aChipsettingTic[10 * a1[192] - 10];
    logfmt_raw(
      v33,
      0x1000u,
      0,
      v32,
      v31[0],
      v31[1],
      v31[2],
      v31[3],
      v31[4],
      v31[5],
      v31[6],
      v32,
      v16,
      (unsigned __int16)v26,
      HIWORD(v26),
      (unsigned __int8)v17[228],
      (unsigned __int8)v17[229]);
    V_UNLOCK();
    LOWORD(v18) = -14512;
    HIWORD(v18) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v19) = 26996;
    HIWORD(v19) = (unsigned int)&unk_135CA4 >> 16;
    zlog(*v18, v19, 154, "get_pcba_test_level_ckb", 23, 520, 60, v33);
    v2 = a1[192];
    goto LABEL_2;
  }
  *a2 = -1;
  LOWORD(v20) = 27360;
  V_LOCK();
  LOWORD(v21) = -7948;
  HIWORD(v21) = (unsigned int)&loc_12D594 >> 16;
  V_INT((int)v28, v21, (int)a1[35]);
  LOWORD(v22) = 27344;
  LOWORD(v23) = -22980;
  HIWORD(v22) = (unsigned int)&unk_135E00 >> 16;
  HIWORD(v23) = (unsigned int)&unk_13996C >> 16;
  V_STR(v30, v23, v22);
  HIWORD(v20) = (unsigned int)&unk_135E10 >> 16;
  logfmt_raw(
    v33,
    0x1000u,
    0,
    v29,
    v28[0],
    v28[1],
    v28[2],
    v28[3],
    v28[4],
    v28[5],
    v28[6],
    v29,
    v30[0],
    v30[1],
    v30[2],
    v30[3],
    v30[4],
    v30[5],
    v30[6],
    v30[7],
    v20);
  V_UNLOCK();
  LOWORD(v24) = -14512;
  HIWORD(v24) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v25) = 26996;
  HIWORD(v25) = (unsigned int)&unk_135CA4 >> 16;
  zlog(*v24, v25, 154, "get_pcba_test_level_ckb", 23, 498, 120, v33);
  return 6;
}
