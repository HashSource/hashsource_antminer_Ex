int __fastcall check_bist_rx_running(int a1, int a2, int a3, unsigned __int16 a4)
{
  int v7; // r6
  char *v8; // r1
  int v9; // r1
  int v10; // r3
  int v11; // r3
  int v12; // r6
  int back; // r0
  unsigned __int8 *v14; // r4
  int v15; // r0
  int v16; // r12
  int v17; // r2
  int v18; // r1
  int v19; // r3
  int v20; // r3
  unsigned int v21; // r3
  unsigned __int8 *v23; // [sp+38h] [bp-10A4h]
  int v24; // [sp+44h] [bp-1098h]
  int v25; // [sp+44h] [bp-1098h]
  unsigned int v27; // [sp+50h] [bp-108Ch]
  _DWORD v29[7]; // [sp+58h] [bp-1084h] BYREF
  int v30; // [sp+74h] [bp-1068h]
  _DWORD v31[7]; // [sp+78h] [bp-1064h] BYREF
  int v32; // [sp+94h] [bp-1048h]
  _QWORD v33[8]; // [sp+98h] [bp-1044h] BYREF
  char v34[4100]; // [sp+D8h] [bp-1004h] BYREF

  LOWORD(v7) = -22412;
  V_LOCK();
  LOWORD(v8) = -7948;
  HIWORD(v8) = (unsigned int)&loc_12D594 >> 16;
  V_INT((int)v29, v8, *(int *)(a1 + 140));
  HIWORD(v7) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(
    v34,
    0x1000u,
    0,
    v30,
    v29[0],
    v29[1],
    v29[2],
    v29[3],
    v29[4],
    v29[5],
    v29[6],
    v30,
    v7,
    "check_bist_rx_running");
  V_UNLOCK();
  LOWORD(v9) = -25512;
  HIWORD(v9) = (unsigned int)"one" >> 16;
  zlog(g_zc, v9, 154, "check_bist_rx_running", 21, 8871, 60, v34);
  v24 = 0;
  if ( a3 == 255 )
    v10 = 16;
  else
    v10 = 1;
  v27 = v10;
  do
  {
    v11 = v24;
    if ( a3 != 255 )
      v11 = a3;
    v25 = v11;
    if ( a4 )
    {
      v12 = 0;
      do
      {
        back = serdes_apb_read_back(a1, a2, v25, (unsigned __int16)((_WORD)v12 << 12) | 0x11, (int)v33);
        if ( back > 0 )
        {
          v14 = (unsigned __int8 *)v33;
          v23 = (unsigned __int8 *)&v33[back];
          do
          {
            v19 = *((_DWORD *)v14 + 1);
            if ( (v19 & 0x400) != 0 || (v19 & 0x8000000) == 0 )
            {
              V_LOCK();
              V_INT((int)v31, "chain", *(int *)(a1 + 140));
              logfmt_raw(
                v34,
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
                "channel %1x, chip_id %02x core_id %02x %08x rx bist run failed",
                v12,
                *v14,
                v14[1],
                v33);
              V_UNLOCK();
              v15 = g_zc;
              v16 = 100;
              v17 = 8888;
            }
            else
            {
              V_LOCK();
              LOWORD(v20) = -23208;
              HIWORD(v20) = (unsigned int)&unk_139888 >> 16;
              logfmt_raw(v34, 0x1000u, 0, v20, v12, *v14, v14[1]);
              V_UNLOCK();
              v15 = g_zc;
              v16 = 60;
              v17 = 8885;
            }
            LOWORD(v18) = -25512;
            HIWORD(v18) = (unsigned int)"one" >> 16;
            v14 += 8;
            zlog(v15, v18, 154, "check_bist_rx_running", 21, v17, v16, v34);
          }
          while ( v14 != v23 );
        }
        ++v12;
      }
      while ( a4 > (unsigned int)(unsigned __int16)v12 );
    }
    v21 = (unsigned __int8)(v25 + 1);
    v24 = v21;
  }
  while ( v27 > v21 );
  return 0;
}
