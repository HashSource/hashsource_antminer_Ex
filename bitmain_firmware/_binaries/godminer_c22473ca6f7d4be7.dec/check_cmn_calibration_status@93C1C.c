int __fastcall check_cmn_calibration_status(int a1, int a2, int a3)
{
  char *v5; // r1
  int v6; // r7
  int v7; // r4
  _DWORD *v8; // r3
  int v9; // r1
  _WORD *v10; // r4
  int v11; // r2
  int v12; // t1
  int v13; // r3
  _DWORD v15[7]; // [sp+28h] [bp-1024h] BYREF
  int v16; // [sp+44h] [bp-1008h] BYREF
  _DWORD v17[3]; // [sp+48h] [bp-1004h] BYREF
  _WORD v18[2044]; // [sp+54h] [bp-FF8h] BYREF

  V_LOCK();
  LOWORD(v5) = -7948;
  HIWORD(v5) = (unsigned int)&loc_12D594 >> 16;
  v6 = 0;
  V_INT((int)v15, v5, *(int *)(a1 + 140));
  LOWORD(v7) = -22412;
  HIWORD(v7) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(
    (char *)v17,
    0x1000u,
    0,
    v16,
    v15[0],
    v15[1],
    v15[2],
    v15[3],
    v15[4],
    v15[5],
    v15[6],
    v16,
    v7,
    "check_cmn_calibration_status");
  V_UNLOCK();
  LOWORD(v8) = -14512;
  HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v9) = -25512;
  HIWORD(v9) = (unsigned int)"one" >> 16;
  zlog(*v8, v9, 154, "check_cmn_calibration_status", 28, 8494, 60, v17);
  v17[0] = 100991489;
  v17[1] = 235735561;
  v17[2] = 134677248;
  v18[0] = 3851;
  do
  {
    v10 = (_WORD *)((char *)&v16 + 3);
    do
    {
      while ( 1 )
      {
        v12 = *((unsigned __int8 *)v10 + 1);
        v10 = (_WORD *)((char *)v10 + 1);
        v11 = v12;
        v13 = a3 + v12;
        if ( v12 != 3 )
        {
          if ( *(_BYTE *)(v13 + 16 * v6) )
            break;
        }
        if ( v10 == (_WORD *)((char *)v18 + 1) )
          goto LABEL_7;
      }
      check_cmn_calibration_status_1_phy(a1, v6, v11);
    }
    while ( v10 != (_WORD *)((char *)v18 + 1) );
LABEL_7:
    ++v6;
  }
  while ( v6 != 8 );
  return 0;
}
