char *__fastcall godminer_fan_monitor(int a1)
{
  char *result; // r0
  int v2; // r1
  char *v3; // r5
  const char *v4; // r2
  char *v5; // r1
  int v6; // r4
  _DWORD *v7; // r3
  int v8; // r1
  const char *v9; // r2
  char *v10; // r1
  int v11; // r6
  _DWORD *v12; // r3
  int v13; // r1
  _DWORD v14[7]; // [sp+28h] [bp-1044h] BYREF
  int v15; // [sp+44h] [bp-1028h]
  _DWORD v16[7]; // [sp+48h] [bp-1024h] BYREF
  int v17; // [sp+64h] [bp-1008h]
  char v18[4100]; // [sp+68h] [bp-1004h] BYREF

  ++dword_165000[*(_DWORD *)(a1 + 136) + 20];
  result = get_flag_from_monitor(a1);
  v2 = *((_DWORD *)result + 8);
  v3 = result;
  if ( (v2 & 2) != 0 )
  {
    V_LOCK();
    LOWORD(v9) = -4200;
    LOWORD(v10) = -22980;
    HIWORD(v9) = (unsigned int)"remotely delay occasions: %d" >> 16;
    HIWORD(v10) = (unsigned int)&unk_13996C >> 16;
    LOWORD(v11) = -4188;
    V_STR(v14, v10, v9);
    HIWORD(v11) = (unsigned int)"ay occasions: %d" >> 16;
    logfmt_raw(v18, 0x1000u, 0, v15, v14[0], v14[1], v14[2], v14[3], v14[4], v14[5], v14[6], v15, v11);
    V_UNLOCK();
    LOWORD(v12) = -14512;
    HIWORD(v12) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v13) = -4392;
    HIWORD(v13) = (unsigned int)"ares / min): %.2f/min" >> 16;
    result = (char *)zlog(*v12, v13, 132, "godminer_fan_monitor", 20, 819, 20, v18);
    v2 = *((_DWORD *)v3 + 8);
    *((_DWORD *)v3 + 10) |= 2u;
  }
  if ( (v2 & 1) != 0 )
  {
    V_LOCK();
    LOWORD(v4) = -4168;
    LOWORD(v5) = -22980;
    HIWORD(v4) = (unsigned int)"New blocks detected on network: %d" >> 16;
    HIWORD(v5) = (unsigned int)&unk_13996C >> 16;
    V_STR(v16, v5, v4);
    LOWORD(v6) = -4156;
    HIWORD(v6) = (unsigned int)"etected on network: %d" >> 16;
    logfmt_raw(v18, 0x1000u, 0, v17, v16[0], v16[1], v16[2], v16[3], v16[4], v16[5], v16[6], v17, v6);
    V_UNLOCK();
    LOWORD(v7) = -14512;
    HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v8) = -4392;
    HIWORD(v8) = (unsigned int)"ares / min): %.2f/min" >> 16;
    result = (char *)zlog(*v7, v8, 132, "godminer_fan_monitor", 20, 824, 20, v18);
    *((_DWORD *)v3 + 10) |= 1u;
  }
  return result;
}
