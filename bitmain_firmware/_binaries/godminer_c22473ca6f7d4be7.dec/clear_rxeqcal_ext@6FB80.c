int __fastcall clear_rxeqcal_ext(int a1, int a2, int a3)
{
  char v4; // r6
  char *v5; // r1
  int v6; // r4
  _DWORD *v7; // r3
  int v8; // r1
  int v9; // r10
  int v10; // r11
  int v11; // r6
  int v12; // r4
  _BOOL4 v13; // r3
  _WORD *v15; // [sp+28h] [bp-103Ch]
  int v18; // [sp+3Ch] [bp-1028h]
  _DWORD v19[7]; // [sp+40h] [bp-1024h] BYREF
  int v20; // [sp+5Ch] [bp-1008h] BYREF
  _DWORD v21[3]; // [sp+60h] [bp-1004h] BYREF
  __int16 v22; // [sp+6Ch] [bp-FF8h] BYREF

  v4 = a2;
  V_LOCK();
  LOWORD(v5) = -7948;
  HIWORD(v5) = (unsigned int)&loc_12D594 >> 16;
  v18 = 0;
  V_INT((int)v19, v5, *(int *)(a1 + 140));
  LOWORD(v6) = -22412;
  HIWORD(v6) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(
    (char *)v21,
    0x1000u,
    0,
    v20,
    v19[0],
    v19[1],
    v19[2],
    v19[3],
    v19[4],
    v19[5],
    v19[6],
    v20,
    v6,
    "clear_rxeqcal_ext");
  V_UNLOCK();
  LOWORD(v7) = -14512;
  HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v8) = -25512;
  HIWORD(v8) = (unsigned int)"one" >> 16;
  zlog(*v7, v8, 154, "clear_rxeqcal_ext", 17, 3519, 60, v21);
  v21[0] = 100991489;
  v21[1] = 235735561;
  v21[2] = 134677248;
  v22 = 3851;
  v9 = a1;
  v10 = (unsigned __int8)(v4 - 1) + 1;
  do
  {
    v15 = (_WORD *)((char *)&v20 + 3);
    do
    {
      v11 = *((unsigned __int8 *)v15 + 1);
      v15 = (_WORD *)((char *)v15 + 1);
      if ( a2 )
      {
        v12 = 0;
        do
        {
          v13 = (unsigned __int8)v12 <= 3u && v11 == 3;
          if ( !v13 && *(_BYTE *)(a3 + 8 * (v11 + 2 * v18) + v12) )
          {
            serdes_apb_write_1_chip(v9, v18, v11, (unsigned __int16)((_WORD)v12 << 12) | 1, -4194305);
            serdes_apb_write_1_chip(v9, v18, v11, (unsigned __int16)((_WORD)v12 << 12) | 0x2F, 0x400000);
          }
          ++v12;
        }
        while ( v12 != v10 );
      }
    }
    while ( v15 != (__int16 *)((char *)&v22 + 1) );
    ++v18;
  }
  while ( v18 != 8 );
  sub_5C158(v9, 0xFFu, 144, 0);
  sub_5C158(v9, 0xFFu, 145, -2147422207);
  return 0;
}
