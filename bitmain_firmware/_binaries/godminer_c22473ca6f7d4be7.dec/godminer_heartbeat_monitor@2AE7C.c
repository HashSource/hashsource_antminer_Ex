char *__fastcall godminer_heartbeat_monitor(int a1)
{
  char *result; // r0
  char *v3; // r7
  char *v4; // r1
  const char *v5; // r2
  char *v6; // r1
  int v7; // r4
  _DWORD *v8; // r3
  int v9; // r1
  _DWORD v10[7]; // [sp+48h] [bp-1040h] BYREF
  int v11; // [sp+64h] [bp-1024h]
  _DWORD v12[8]; // [sp+68h] [bp-1020h] BYREF
  char v13[4096]; // [sp+88h] [bp-1000h] BYREF

  ++dword_165000[*(_DWORD *)(a1 + 136) + 10];
  result = get_flag_from_monitor(a1);
  if ( (*((_DWORD *)result + 16) & 1) != 0 )
  {
    v3 = result;
    V_LOCK();
    LOWORD(v4) = -7948;
    HIWORD(v4) = (unsigned int)&loc_12D594 >> 16;
    V_INT((int)v10, v4, *(int *)(a1 + 140));
    LOWORD(v5) = -4232;
    LOWORD(v6) = -22980;
    HIWORD(v5) = (unsigned int)"ccasions: %d" >> 16;
    HIWORD(v6) = (unsigned int)&unk_13996C >> 16;
    V_STR(v12, v6, v5);
    LOWORD(v7) = -4220;
    HIWORD(v7) = (unsigned int)"" >> 16;
    logfmt_raw(
      v13,
      0x1000u,
      0,
      v11,
      v10[0],
      v10[1],
      v10[2],
      v10[3],
      v10[4],
      v10[5],
      v10[6],
      v11,
      v12[0],
      v12[1],
      v12[2],
      v12[3],
      v12[4],
      v12[5],
      v12[6],
      v12[7],
      v7);
    V_UNLOCK();
    LOWORD(v8) = -14512;
    HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v9) = -4392;
    HIWORD(v9) = (unsigned int)"ares / min): %.2f/min" >> 16;
    result = (char *)zlog(*v8, v9, 132, "godminer_heartbeat_monitor", 26, 807, 100, v13);
    *((_DWORD *)v3 + 18) |= 1u;
  }
  return result;
}
