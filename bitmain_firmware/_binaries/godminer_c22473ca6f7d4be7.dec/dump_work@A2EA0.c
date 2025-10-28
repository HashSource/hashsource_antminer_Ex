int __fastcall dump_work(_DWORD *a1)
{
  const char *v2; // r6
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  char *v6; // r4
  char *v7; // r5
  int v8; // t1
  char v10[4096]; // [sp+18h] [bp-1000h] BYREF

  LOWORD(v2) = 25416;
  V_LOCK();
  LOWORD(v3) = -20108;
  HIWORD(v3) = (unsigned int)"ed!" >> 16;
  logfmt_raw(
    v10,
    0x1000u,
    0,
    v3,
    *a1,
    a1[1],
    a1[2],
    a1[3],
    *(_DWORD *)((char *)a1 + 254),
    *(_DWORD *)((char *)a1 + 258));
  V_UNLOCK();
  LOWORD(v4) = -14512;
  HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v5) = -20480;
  HIWORD(v5) = (unsigned int)"02x addr %04x, %08x, cmn lock failed" >> 16;
  v6 = (char *)a1 + 15;
  v7 = (char *)a1 + 253;
  zlog(*v4, v5, 160, "dump_work", 9, 71, 60, v10);
  do
  {
    v8 = (unsigned __int8)*++v6;
    HIWORD(v2) = (unsigned int)" no sensor chip temp exceed limit! (%d)" >> 16;
    printf(v2, v8);
  }
  while ( v6 != v7 );
  return putchar(10);
}
