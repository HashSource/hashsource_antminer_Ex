int __fastcall get_sweep_monitor_clock_ltc(int a1, int a2)
{
  int v2; // lr
  char v4; // r2
  void (__fastcall *v5)(int, _DWORD *, int, unsigned int *, _DWORD); // r5
  unsigned int v7[3]; // [sp+14h] [bp-20h] BYREF
  _DWORD v8[2]; // [sp+20h] [bp-14h] BYREF
  int v9; // [sp+28h] [bp-Ch]
  int v10; // [sp+2Ch] [bp-8h]

  v2 = *(_DWORD *)(a1 + 304);
  v9 = 0;
  v8[1] = 0;
  v8[0] = 0;
  v10 = 0;
  v4 = *(_BYTE *)(v2 + a2);
  HIWORD(v9) = 48;
  v5 = *(void (__fastcall **)(int, _DWORD *, int, unsigned int *, _DWORD))(a1 + 184);
  BYTE1(v9) = v4;
  v5(a1, v8, 1, v7, 0);
  usleep(0x2710u);
  printf("ASIC-%02X clock data %08x\n", a2, bswap32(v7[0]));
  return a2;
}
