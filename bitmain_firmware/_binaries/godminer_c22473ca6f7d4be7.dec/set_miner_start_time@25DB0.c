time_t set_miner_start_time()
{
  int *v0; // r4
  const char *v1; // r1
  int uptime; // r3
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  time_t result; // r0
  int v7; // r5
  char *v8; // r0
  const char *v9; // r1
  int v10; // [sp+0h] [bp-1154h]
  struct sysinfo info; // [sp+10h] [bp-1144h] BYREF
  char s[256]; // [sp+50h] [bp-1104h] BYREF
  char v13[4100]; // [sp+150h] [bp-1004h] BYREF

  if ( sysinfo(&info) )
  {
    v7 = *_errno_location();
    v0 = &dword_164FC8;
    v8 = strerror(v7);
    LOWORD(v9) = -8804;
    HIWORD(v9) = (unsigned int)" getaddrinfo() failed" >> 16;
    sprintf(s, v9, v7, v8);
    result = time(0);
    LODWORD(flt_164FE4) = result;
    dword_164FE0 = result + 1;
  }
  else
  {
    LOWORD(v0) = 20424;
    HIWORD(v0) = (unsigned int)&unk_164EB0 >> 16;
    LOWORD(v1) = -8760;
    uptime = info.uptime;
    HIWORD(v1) = (unsigned int)"iled" >> 16;
    v10 = info.uptime + 1;
    v0[6] = info.uptime + 1;
    v0[7] = uptime;
    sprintf(s, v1, "set_miner_start_time", uptime, v10);
    V_LOCK();
    LOWORD(v3) = -23476;
    HIWORD(v3) = (unsigned int)off_13ACF4 >> 16;
    logfmt_raw(v13, 0x1000u, 0, v3, s);
    V_UNLOCK();
    LOWORD(v4) = -14512;
    HIWORD(v4) = (unsigned int)&unk_16C65C >> 16;
    LOWORD(v5) = -10124;
    HIWORD(v5) = (unsigned int)"Total MH" >> 16;
    result = zlog(*v4, v5, 130, "set_miner_start_time", 20, 324, 60, v13);
  }
  *((_BYTE *)v0 + 32) = 1;
  return result;
}
