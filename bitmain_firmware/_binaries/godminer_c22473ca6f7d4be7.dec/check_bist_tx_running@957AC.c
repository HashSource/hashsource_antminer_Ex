int __fastcall check_bist_tx_running(int a1, int a2, _DWORD *a3, int a4)
{
  unsigned __int16 v4; // r5
  int v6; // r3
  _DWORD *v7; // r11
  char *v8; // r3
  int v9; // r2
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r6
  unsigned int v14; // r3
  unsigned __int8 *v16; // r4
  int back; // r0
  unsigned __int8 *v18; // r9
  int v19; // r3
  int v20; // r0
  int v21; // r12
  int v22; // r2
  int v23; // r1
  char *s; // [sp+44h] [bp-1090h]
  int v27; // [sp+48h] [bp-108Ch]
  int v28; // [sp+4Ch] [bp-1088h]
  int v29; // [sp+50h] [bp-1084h]
  int v32; // [sp+5Ch] [bp-1078h]
  _DWORD v33[3]; // [sp+60h] [bp-1074h] BYREF
  __int16 v34; // [sp+6Ch] [bp-1068h]
  _DWORD v35[7]; // [sp+70h] [bp-1064h] BYREF
  int v36; // [sp+8Ch] [bp-1048h]
  _QWORD v37[8]; // [sp+90h] [bp-1044h] BYREF
  char v38[4100]; // [sp+D0h] [bp-1004h] BYREF

  v4 = a4;
  if ( a3 != (_DWORD *)255 )
    a4 = 1;
  if ( a3 == (_DWORD *)255 )
  {
    v32 = 14;
    v33[0] = 100991489;
    v33[1] = 235735561;
    v33[2] = 134677248;
    v34 = 3851;
  }
  else
  {
    v32 = a4;
  }
  LOWORD(v7) = -14512;
  V_LOCK();
  LOWORD(v6) = -23352;
  HIWORD(v6) = (unsigned int)"th" >> 16;
  HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
  logfmt_raw(v38, 0x1000u, 0, v6, "check_bist_tx_running", v32);
  V_UNLOCK();
  LOWORD(v8) = -7948;
  LOWORD(v9) = -23272;
  HIWORD(v8) = (unsigned int)&loc_12D594 >> 16;
  HIWORD(v9) = (unsigned int)"n_lock_and_reset_worse_phy" >> 16;
  LOWORD(v10) = -25512;
  s = v8;
  HIWORD(v10) = (unsigned int)"one" >> 16;
  v27 = v9;
  zlog(*v7, v10, 154, "check_bist_tx_running", 21, 8821, 60, v38);
  v29 = 0;
  do
  {
    if ( a3 == (_DWORD *)255 )
    {
      v11 = v29;
      v12 = (int)v33;
    }
    else
    {
      v12 = (int)a3;
    }
    if ( a3 == (_DWORD *)255 )
      v12 = *(unsigned __int8 *)(v11 + v12);
    v28 = v12;
    if ( v4 )
    {
      v13 = 0;
      v14 = 0;
      do
      {
        if ( v14 > 3 || v28 != 3 )
        {
          v16 = (unsigned __int8 *)v37;
          back = serdes_apb_read_back(a1, a2, v28, (unsigned __int16)((_WORD)v14 << 12) | 0x4A, (int)v37);
          if ( back > 0 )
          {
            v18 = (unsigned __int8 *)&v37[back];
            do
            {
              if ( (*((_DWORD *)v16 + 1) & 0x200) != 0 )
              {
                V_LOCK();
                LOWORD(v19) = -23332;
                HIWORD(v19) = (unsigned int)"og_mux_ETH" >> 16;
                logfmt_raw(v38, 0x1000u, 0, v19, v13, *v16, v16[1]);
                V_UNLOCK();
                v20 = *v7;
                v21 = 20;
                v22 = 8839;
              }
              else
              {
                V_LOCK();
                V_INT((int)v35, s, *(int *)(a1 + 140));
                logfmt_raw(
                  v38,
                  0x1000u,
                  0,
                  v36,
                  v35[0],
                  v35[1],
                  v35[2],
                  v35[3],
                  v35[4],
                  v35[5],
                  v35[6],
                  v36,
                  v27,
                  v13,
                  *v16,
                  v16[1],
                  *((_DWORD *)v16 + 1));
                V_UNLOCK();
                v20 = *v7;
                v21 = 100;
                v22 = 8842;
              }
              LOWORD(v23) = -25512;
              HIWORD(v23) = (unsigned int)"one" >> 16;
              v16 += 8;
              zlog(v20, v23, 154, "check_bist_tx_running", 21, v22, v21, v38);
            }
            while ( v16 != v18 );
          }
        }
        v14 = (unsigned __int16)++v13;
      }
      while ( v4 > (unsigned int)(unsigned __int16)v13 );
    }
    v11 = v32;
  }
  while ( v32 != ++v29 );
  return 0;
}
