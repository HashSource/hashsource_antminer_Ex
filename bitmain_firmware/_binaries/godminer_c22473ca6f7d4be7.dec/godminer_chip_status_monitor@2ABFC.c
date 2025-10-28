int __fastcall godminer_chip_status_monitor(int a1)
{
  char *flag_from_monitor; // r0
  int v3; // r3
  char *v4; // r5
  int result; // r0
  char *v6; // r1
  int v7; // r4
  int *v8; // r3
  int v9; // r0
  int v10; // r1
  char *v11; // r1
  int v12; // r7
  int *v13; // r3
  int v14; // r0
  int v15; // r1
  char *v16; // r1
  int *v17; // r3
  int v18; // r0
  int v19; // r1
  _DWORD v20[7]; // [sp+28h] [bp-1064h] BYREF
  int v21; // [sp+44h] [bp-1048h]
  _DWORD v22[7]; // [sp+48h] [bp-1044h] BYREF
  int v23; // [sp+64h] [bp-1028h]
  _DWORD v24[7]; // [sp+68h] [bp-1024h] BYREF
  int v25; // [sp+84h] [bp-1008h]
  char v26[4100]; // [sp+88h] [bp-1004h] BYREF

  ++dword_165000[*(_DWORD *)(a1 + 136)];
  flag_from_monitor = get_flag_from_monitor(a1);
  v3 = *((_DWORD *)flag_from_monitor + 12);
  v4 = flag_from_monitor;
  if ( (v3 & 1) != 0 )
  {
    V_LOCK();
    LOWORD(v16) = -7948;
    HIWORD(v16) = (unsigned int)&loc_12D594 >> 16;
    V_INT((int)v20, v16, *(int *)(a1 + 140));
    logfmt_raw(
      v26,
      0x1000u,
      0,
      v21,
      v20[0],
      v20[1],
      v20[2],
      v20[3],
      v20[4],
      v20[5],
      v20[6],
      v21,
      "some chip died %x",
      **(_DWORD **)(a1 + 300));
    V_UNLOCK();
    LOWORD(v17) = -14512;
    HIWORD(v17) = (unsigned int)&unk_16B55C >> 16;
    v18 = *v17;
    LOWORD(v17) = -6180;
    LOWORD(v19) = -4392;
    HIWORD(v17) = (unsigned int)"d%" >> 16;
    HIWORD(v19) = (unsigned int)"ares / min): %.2f/min" >> 16;
    zlog(v18, v19, 132, v17, 28, 785, 20, v26);
    v3 = *((_DWORD *)v4 + 12);
    *((_DWORD *)v4 + 14) |= 1u;
  }
  if ( (v3 & 2) != 0 )
  {
    V_LOCK();
    LOWORD(v11) = -7948;
    HIWORD(v11) = (unsigned int)&loc_12D594 >> 16;
    LOWORD(v12) = -4256;
    V_INT((int)v22, v11, *(int *)(a1 + 140));
    HIWORD(v12) = (unsigned int)"o get work from server occasions: %d" >> 16;
    logfmt_raw(v26, 0x1000u, 0, v23, v22[0], v22[1], v22[2], v22[3], v22[4], v22[5], v22[6], v23, v12);
    V_UNLOCK();
    LOWORD(v13) = -14512;
    HIWORD(v13) = (unsigned int)&unk_16B55C >> 16;
    v14 = *v13;
    LOWORD(v13) = -6180;
    LOWORD(v15) = -4392;
    HIWORD(v13) = (unsigned int)"d%" >> 16;
    HIWORD(v15) = (unsigned int)"ares / min): %.2f/min" >> 16;
    zlog(v14, v15, 132, v13, 28, 790, 20, v26);
    v3 = *((_DWORD *)v4 + 12);
    *((_DWORD *)v4 + 14) |= 2u;
  }
  result = v3 & 4;
  if ( (v3 & 4) != 0 )
  {
    V_LOCK();
    LOWORD(v6) = -7948;
    HIWORD(v6) = (unsigned int)&loc_12D594 >> 16;
    V_INT((int)v24, v6, *(int *)(a1 + 140));
    LOWORD(v7) = -4256;
    HIWORD(v7) = (unsigned int)"o get work from server occasions: %d" >> 16;
    logfmt_raw(v26, 0x1000u, 0, v25, v24[0], v24[1], v24[2], v24[3], v24[4], v24[5], v24[6], v25, v7);
    V_UNLOCK();
    LOWORD(v8) = -14512;
    HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
    v9 = *v8;
    LOWORD(v8) = -6180;
    LOWORD(v10) = -4392;
    HIWORD(v8) = (unsigned int)"d%" >> 16;
    HIWORD(v10) = (unsigned int)"ares / min): %.2f/min" >> 16;
    result = zlog(v9, v10, 132, v8, 28, 795, 20, v26);
    *((_DWORD *)v4 + 14) |= 4u;
  }
  return result;
}
